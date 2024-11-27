import rclpy
from rclpy.node import Node
import serial
import threading


class SerialPubNode(Node):
    def __init__(self):
        super().__init__("SerialPubNode")

        self.info = self.get_logger().info
        self.warn = self.get_logger().warn

        # start hint
        self.info("Node SerialPubNode Start")

        # initial the serial config
        self.declare_parameter("port", "/dev/ttyACM0")
        self.declare_parameter("baudrate", 115200)

        # paramter setup
        port = self.get_parameter("port").get_parameter_value().string_value
        baudrate = self.get_parameter(
            "baudrate").get_parameter_value().integer_value

        # open the serial
        try:
            self.serial = serial.Serial(port, baudrate, timeout=100)
            self.info(f"connected to {port} at {baudrate} baud")
        except Exception as e:
            self.warn(e)
            self.serial = None

        # TODO:the callback is need there
        self.info("recv thread initializing")
        # TODO: FIX THERE (the callback_pub)
        self.pub_thread = threading.Thread(target=self.callback_todo)
        self.pub_thread.daemon = True
        try:
            self.pub_thread.start()
        except Exception as e:
            self.warn(f"Error when initializing the publishing thread: \n{e}")

    # TODO:    def callback_pub

    # TODO: how to pub the message as the new message coming from outside
    def callback_todo(self):
        pass


def main():
    rclpy.init()

    node = SerialPubNode()

    try:
        rclpy.spin(node)
    except Exception as e:
        print(e)
        print("SerialPubNode END WITH KEY")

    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
