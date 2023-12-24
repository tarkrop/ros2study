import rclpy
from rclpy.node import Node
from msg_package.msg import NumList #메세지 정의 임포트


class EnterNum(Node):
    def __init__(self):
        super().__init__("EnterNum")
        self.enter_num = self.create_publisher(NumList, "enter_num", 5)
        self.publish_num()

    def publish_num(self):
        msg = NumList()
        msg.first = int(input("Enter your first number: "))
        msg.second = int(input("Enter your second number: "))
        self.enter_num.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    enter_num = EnterNum()
    rclpy.spin_once(enter_num)

    enter_num.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
