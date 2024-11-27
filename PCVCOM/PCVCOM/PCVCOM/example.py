import rclpy
from rclpy.node import Node
import serial
import threading


class SerialNode(Node):
    def __init__(self):
        super().__init__("SerialExampleNode")
        self.declare_parameter("port", "/dev/ttyACM0")
        self.declare_parameter("baudrate", 115200)

        port = self.get_parameter("port").get_parameter_value().string_value
        baudrate = self.get_parameter(
            "baudrate").get_parameter_value().integer_value

        try:
            self.serial = serial.Serial(port, baudrate, timeout=100)
            self.get_logger().info(f"connected to {port} at {baudrate} baud")
        except Exception as e:
            self.get_logger().info(e)
            self.serial = None

        self.timer = self.create_timer(1.0, self.send_data)

        self.receive_thread = threading.Thread(target=self.receive_data)
        self.receive_thread.daemon = True

        self.receive_thread.start()

    def send_data(self):
        if self.serial:
            data = "hello from ROS 2 \n"
            self.serial.write(data.encode())
            self.get_logger().info(f"Sent: {data.strip()}")

    def receive_data(self):
        if not self.serial:
            return
        while rclpy.ok():
            try:
                if self.serial.in_waiting > 0:
                    data = self.serial.readline().decode().strip()
                    self.get_logger().info(f"Receive: {data}")
            except Exception as e:
                self.get_logger().error(
                    f"Error in reading the serial data: {e}")

    def destroy_node(self):
        super().destroy_node()
        if self.serial:
            self.serial.close()
            self.get_logger().info("Serial connection CLOSED")


def main():
    rclpy.init()
    node = SerialNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt as ke:
        print(ke)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
