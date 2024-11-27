import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial


class SerialReceiver(Node):
    def __init__(self):
        super().__init__("serail_sub")

        self.serial_port = serial.Serial(
            "/dev/ttyAS5", baudrate=115200, timeout=100)
        self.publisher = self.create_publisher(String, "serial_data", 10)
        self.timer = self.create_timer(0.1, self.timer_callback)

    def timer_callback(self):
        self.get_logger().info("asdfsaddfdsa")
        if self.serial_port.in_waiting > 0:
            data = self.serial_port.readline().decode("utf-8").strip()
            if data:
                self.get_logger().info(f"recv {data}")

                msg = String()
                msg.data = data
                self.publisher.publish(msg)


def main():
    rclpy.init()
    serial_receiever = SerialReceiver()
    serial_receiever.get_logger().info("Node Start")
    rclpy.spin(serial_receiever)

    serial_receiever.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
