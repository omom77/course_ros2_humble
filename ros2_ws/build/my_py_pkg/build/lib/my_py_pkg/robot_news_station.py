#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.msg import String

class RobotNewsStatioNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("robot_news_station") # Executable 

        self.declare_parameter("robot_name", "no robot yet")
        self.declare_parameter("frequency_to_publish", 1.0)

        self.robot_name = self.get_parameter("robot_name").value    # .value to get the value of the parameter
        self.publish_frequency_ = self.get_parameter("frequency_to_publish").value      # .value to get the value of the parameter

        self.publisher_ = self.create_publisher(String, "robot_news", 10)
        self.timer_ = self.create_timer(1.0/ self.publish_frequency_, self.publish_news)
        self.get_logger().info("Robots Have started talking")    

    def publish_news(self) :   # Function to publish on the publisher
        msg = String()
        msg.data = "Welcome to the " + str(self.robot_name) + " Interface for ROS2."
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = RobotNewsStatioNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
