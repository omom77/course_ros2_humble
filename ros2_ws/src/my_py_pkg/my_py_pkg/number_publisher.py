#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.msg import Int64

class NumberPublisherNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("NumberPublisherNode") # Executable 
        self.robot_name = "Parrot V1"

        self.declare_parameter("number_to_publish", 10)
        self.declare_parameter("frequency_to_publish", 1.0)

        self.number = self.get_parameter("number_to_publish").value    # .value to get the value of the parameter
        self.publish_frequency_ = self.get_parameter("frequency_to_publish").value      # .value to get the value of the parameter
        self.publisher_ = self.create_publisher(Int64, "number", 10)
        self.timer_ = self.create_timer(1.0 / self.publish_frequency_, self.publish_news)
        self.get_logger().info(self.robot_name)    

    def publish_news(self) :   # Function to publish on the publisher
        msg = Int64()
        msg.data = self.number
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisherNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()