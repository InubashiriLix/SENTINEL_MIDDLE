import rclpy
from rclpy.node import Node
import serial
import threading

PORT = "/dev/ttyACM0"


class SerialStringSubNode(Node):
    def __init__(self):
        super().__init__("SerialStringSubNode")

        self.log = self.get_logger().info
        self.log("SerialSubNode logger start")

        self.log("initial the serial")
        # declare the parameter
        self.declare_parameter("port", PORT)
        self.declare_parameter("baudrate", 115200)
        # use the paramter now
        port = self.get_parameter("port").get_parameter_value().string_value
        baudrate = self.get_parameter(
            "baudrate").get_parameter_value().integer_value
        # open the serial
        try:
            self.serial = serial.Serial(port, baudrate, timeout=2)
            self.log(f"connected to {port} at {baudrate} baud")
        except Exception as e:
            self.log(e)
            self.serial = None

        # initialize the multiple threads
        self.log("recv thread initalizing")
        self.receive_thread = threading.Thread(target=self.receive_data)
        self.receive_thread.daemon = True
        try:
            self.receive_thread.start()
        except Exception as e:
            self.log(f"Error when initalizing the listening thread:\n{e}")

    def receive_data(self):
        if not self.serial:
            self.log("receive_data: serial not found")
            return
        while rclpy.ok():
            try:
                if self.serial.in_waiting > 0:
                    data = self.serial.readline().decode().strip()
                    self.log(f" receive_data: {data}")
            except Exception as e:
                self.log(f"Error in the receive: {e}")

    def destroy_node(self):
        super().destroy_node()
        if self.serial:
            self.serial.close()
            self.log("Serial connection CLOSED")


def main():
    rclpy.init()
    node = SerialStringSubNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt as ke:
        print(ke)
        print("EXIT BY KEY")
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
