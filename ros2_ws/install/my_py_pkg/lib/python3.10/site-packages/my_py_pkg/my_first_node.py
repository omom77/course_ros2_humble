#!/usr/bin/env python3

# To use ROS2 functionalities we import rclpy
import rclpy
from rclpy.node import Node

class MyNode(Node):

    def __init__(self):
        super().__init__("py_node")
        self.counter_=0     # Initialize a counter
        self.get_logger().info("Hello ROS2")
        self.create_timer(0.5, self.timer_callback)     # a timer of 2mhz

    def timer_callback(self):
        self.counter_+= 1
        self.get_logger().info("Counting    :" + str(self.counter_))

# Write this in every ros2 program, essential component
def main(args=None):
    rclpy.init(args=args)   # initialize ros2 communication
    node = MyNode()     # Node is created inside main
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()