import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class EnterClassID(Node):
    def __init__(self):
        super().__init__("EnterClassNum")
        self.enter_classID = self.create_publisher(String, "enter_classID", 5)
        self.timer = self.create_timer(1.0, self.publish_ID)

    def publish_ID(self):
        msg = String()
        classnum = input("Enter classID: ")
        msg.data = classnum
        self.enter_classID.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    enter_classID = EnterClassID()
    rclpy.spin_once(enter_classID)

    enter_classID.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
