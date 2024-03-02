#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

class TurtleControllerNode(Node): # MODIFY NAME
    def __init__(self):
        super().__init__("turtle_controller") 

        self.target_x_ = 8.0
        self.target_y_ = 4.0

        self.pose_ = None
        self.cmd_vel_publisher = self.create_publisher(Twist, "turtle1/cmd_vel", 10)
        self.pose_subscriber_ = self.create_subscription(Pose, "turtle1/pose", self.callback_turtle_pose, 10)
        self.control_loop_timer_ = self.create_timer(0.01, self.control_loop)

    def callback_turtle_pose(self, msg):
        self.pose_ = msg

    def control_loop(self):
        if(self.pose_ == None):
            return
        
        dist_x = self.target_x_ - self.pose_.x
        dist_y = self.target_y_ - self.pose_.y
        distance = math.sqrt(dist_x * dist_x + dist_y + dist_y)
        
        msg = Twist()

        # calculations

        self.cmd_vel_publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = TurtleControllerNode() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()