import rclpy
from rclpy.node import Node
import serial
import threading
import struct
import crcmod

CRC8_POLYNOMIAL = 0x31
CRC8_INIT = 0xFF
PORT = "/dev/ttyACM0"
DEBUG = True


def calculate_parity(data: bytes, parity_type: str) -> int:
    """
    calculate the odd or the even of the data
    :param data: int (uint8_t)
    :param parity_type: "odd" means the odd validation, "even" stands for even validation
    :return: validation pos
    """

    if parity_type not in ("even", "odd"):
        raise ValueError("the type of validation should be the odd and the even")

    parity = 0

    for byte in data:
        while byte:
            parity ^= byte & 1
            byte >>= 1

    if parity_type == "even":
        parity = ~parity & 1

    return parity


def vertify_parity(data: bytes, parity_bit: int, parity_type: str) -> bool:
    """
    :param data: digital bytes (0-255)
    :param parity_bit: the parity that recveived
    :param parity parity_type: should be "odd" or the "even"
    :return: wheather has pass the validation
    """
    # 1 float -> 4 bytes -> odd
    # 2 float -> 4 bytes -> even
    calculated_parity = calculate_parity(data, parity_type)
    return calculated_parity == parity_bit


def test_vertify_parity():
    data = 0b1010101
    parity_bit = 1
    parity_type = "odd"

    print(vertify_parity(data, parity_bit, parity_type))


def calculate_CRC8(data: bytes) -> int:
    """
    calculate the parity of the CRC8
    :params data: bytes stream
    :return: CRC calculating result
    """
    crc = CRC8_INIT
    for byte in data:
        crc ^= byte
        for _ in range(8):
            if crc & 0x80:
                crc = (crc << 1) ^ CRC8_POLYNOMIAL
            else:
                crc <<= 1
            crc &= 0xFF
    return crc


def vertify_crc8(data: bytes, recveived_crc: int) -> bool:
    """ "
    calculate the CRC DATA
    :param data: data stream
    :param recveived_crc: the verification code
    :return: whether the data has expolished
    """
    calculated_crc8 = calculate_CRC8(data)
    return calculated_crc8 == recveived_crc


def test_vertify_crc8():
    data = b"\x01\x02\x03"
    crc = calculate_CRC8(data)
    print(f"the {data} with {crc}: {vertify_crc8(data, crc)}")


def calculate_CRC16(data: bytes) -> int:
    # calculate the data received
    ibm = crcmod.mkCrcFun(0x18005, initCrc=0xFFFF, xorOut=0x0000, rev=True)
    return ibm(data)


def vertify_crc16(data: bytes, received_crc: int) -> bool:
    return calculate_CRC16(data) == received_crc


def test_verify_crc16():
    data = b"\x01\x02\x03\x04"
    crc16 = calculate_CRC16(data)
    if vertify_crc16(data, crc16):
        print("Validation Success")
    else:
        print("Validation Failed!")


class SerialFloatSubNode(Node):
    def __init__(self):
        super().__init__("SerialFloatSubNode")
        # initialize the logger
        self.info = self.get_logger().info
        self.info("SerialFloatSubNode Start")
        self.warn = self.get_logger().warn

        # declare the parameters
        self.declare_parameter("port", PORT)
        self.declare_parameter("baudrate", 115200)
        # use the parameter to initialize the com
        port = self.get_parameter("port").get_parameter_value().string_value
        baudrate = self.get_parameter("baudrate").get_parameter_value().integer_value
        # open the serial
        try:
            self.serial = serial.Serial(port, baudrate, timeout=2)
            self.info("Serial start")
        except Exception as e:
            self.warn(e)

        # initialize the serial listening thread
        self.serial_thread = threading.Thread(target=self.receive_data)
        self.serial_thread.daemon = True
        try:
            self.serial_thread.start()
        except Exception as e:
            self.warn(e)

    def _receive_data(self):
        if not self.serial:
            self.warn("seiral not found")
            return
        while rclpy.ok():
            try:
                if 5 <= self.serial.in_waiting <= 6:
                    data = self.serial.read(4)
                    parity_bit = self.serial.read(1)[0]
                    if not vertify_parity(data, parity_bit, "odd"):
                        self.warn(f"single failed: {data.hex()}, parity: {parity_bit}")
                        continue

                    float_value = struct.unpack("<f", data)[0]
                    self.info(f"new float: {float_value}")
                elif self.serial.in_waiting != 0:
                    data = self.serial.read(self.serial.in_waiting)
                    self.warn(f"broken: {data.hex()}")

            except Exception as e:
                print(e)

    def receive_data(self):
        if not self.serial:
            self.warn("serial not found")
            return
        while rclpy.ok():
            # if the rclpy is ready to be used
            try:
                if 5 <= self.serial.in_waiting <= 6:
                    # the first 4 pos stands for a float
                    # recv the msg data and the parity data
                    data = self.serial.read(4)
                    parity_bit = self.serial.read(1)[0]
                    # validation there
                    if not vertify_parity(data, parity_bit, "odd"):
                        self.warn(
                            f"single float: parity check failed for data: {data.hex()}"
                        )
                        continue

                    # the decoding mode is Little-Endian
                    float_value = struct.unpack("<f", data)[0]
                    self.info(f"recv {float_value}")
                    # TODO: further applilcation will be processed there

                elif 9 <= self.serial.in_waiting <= 10:
                    # the first 4 and second 4 poos are float 1 and float 2
                    data = self.serial.read(8)
                    parity_bit = self.serial.read(1)[0]
                    # VALIDATION
                    if not vertify_parity(data, parity_bit, "even"):
                        self.warn(
                            f"double float: parity check failed for data: {data.hex()}"
                        )
                        continue

                    float_value1, float_value2 = struct.unpack("<ff", data)
                    self.info(f"new 2 float {float_value1}, {float_value2}")
                    # TODO: application will be added there

                elif 18 <= self.serial.in_waiting <= 19:
                    # the data that more than 16 bytes (4floats) will use the crc16 verrtification
                    data = self.serial.read(16)
                    crc_recv = self.serial.read(2)
                    crc_code = int.from_bytes(crc_recv, "little")
                    # validation there
                    if not vertify_crc16(data, crc_code):
                        self.warn(f"crc16 failed: {data.hex()}")
                        self.warn(f"calculated crc16: {calculate_CRC16(data)}")
                        self.warn(f"received crc16: {crc_code}")
                        continue

                    float_pkg_4 = struct.unpack("<ffff", data)
                    self.info(
                        f"recv float4 pkg: {float_pkg_4[0]}, {float_pkg_4[1]}, {float_pkg_4[2]}, {float_pkg_4[3]}"
                    )
                    # TODO: further application needed?

            except Exception as e:
                self.warn(e)
                return

    def destroy_node(self):
        super().destroy_node()
        if self.serial:
            self.serial.close()
            self.info("Serial connection CLOSED")


def main():
    rclpy.init()
    node = SerialFloatSubNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt as e:
        print(e)
        print("EXIT BY KeyboardInterrupt")
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
