import rclpy
from rclpy.node import Node
from msg_package.msg import NumList #메세지 정의 임포트


class GetNumSum(Node):
    def __init__(self):
        super().__init__("GetNumSum")
        self.get_num_sum = self.create_subscription(
            NumList, "enter_num", self.callbackNum, 5
        )
        self.enter_num = self.create_publisher(NumList, "sum_num", 5)

    def callbackNum(self, msg):
        sum = int(msg.first) + int(msg.second)
        print("The sum of number:", msg.first, "+", msg.second, "=", sum)
        self.publish_num(sum)

    def publish_num(self, sum):
        msg = NumList()
        msg.first = sum
        msg.second = int(input("Enter your number to multiply: "))
        self.enter_num.publish(msg)



def main(args=None):
    rclpy.init(args=args)
    get_num = GetNumSum()
    rclpy.spin(get_num)
    get_num.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
