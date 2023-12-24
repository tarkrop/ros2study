import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class GetClassID(Node):
    def __init__(self):
        super().__init__("GetClassNum")
        self.enter_classID = self.create_subscription(
            String, "enter_classID", self.callbackID, 5
        )
        self.ID = String()

    def callbackID(self, msg):
        self.ID = msg.data
        print("Class ID:", self.ID)


def main(args=None):
    rclpy.init(args=args)
    get_classID = GetClassID()
    rclpy.spin_once(get_classID)
    get_classID.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
