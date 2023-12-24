import rclpy
from rclpy.node import Node
from msg_package.msg import NumList #메세지 정의 임포트


class GetNumMultiply(Node):
    def __init__(self):
        super().__init__("GetNumMultiply")
        self.get_num_sum = self.create_subscription(
            NumList, "sum_num", self.callbackNum, 5
        )

    def callbackNum(self, msg):
        multiple = msg.first * msg.second
        print("The multiply of number:", msg.first, "x", msg.second, "=", multiple)
        self.get_logger().info(f"The multiplication is {multiple}", once=True)


def main(args=None):
    rclpy.init(args=args)
    get_num = GetNumMultiply()
    rclpy.spin(get_num)
    get_num.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
