import rclpy
from rclpy.node import Node

from example_interfaces.msg import Int64
from example_interfaces.srv import SetBool

class NumberCounterNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("NumberCounterNode") # Executable 
        self.counter_= 0    # Initialize Counter
        self.publisher_counter = self.create_publisher(Int64, "number_count", 10)
        self.subscriber_ = self.create_subscription(Int64, "number", self.callback_number, 10)
        self.reset_counter_service_ = self.create_service(SetBool, "reset_counter", self.callback_reset_counter)
        self.get_logger().info("Number Counter has been started")

    def callback_number(self, msg):
        self.counter_+= 1
        msg_count = Int64()
        msg_count.data = self.counter_
        self.get_logger().info(str(msg.data) + " Count : " + str(msg_count.data))
        self.publisher_counter.publish(msg_count) 
    def callback_reset_counter(self, request, response):
        if request.data:
            self.counter_ = 0
            response.success = True
            response.message = "Counter Successfully Reset"
        else:
            response.success = False
            response.message = "Failed to Reset Counter"
        return response
        

def main(args=None):
    rclpy.init(args=args)
    node = NumberCounterNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()