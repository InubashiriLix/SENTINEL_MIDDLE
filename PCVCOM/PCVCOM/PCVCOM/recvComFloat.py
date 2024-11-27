import rclpy
from rclpy.node import Node
import serial
import threading
import struct

PORT = "/dev/ttyACM0"


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
        baudrate = self.get_parameter(
            "baudrate").get_parameter_value().integer_value
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

    def receive_data(self):
        if not self.serial:
            self.warn("serial not found")
            return
        while rclpy.ok():
            # if the rclpy is ready to be used
            try:
                if self.serial.in_waiting >= 4:
                    # decode the four bytes if we has received one
                    data = self.serial.read(4)
                    self.info(f"new msg detected: {data.hex()}")

                    # decode the data into the float
                    # the decoding mode is Little-Endian
                    # TODO: may be the validation is needed
                    float_value = struct.unpack("<f", data)[0]
                    self.info(f"recv {float_value}")

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
