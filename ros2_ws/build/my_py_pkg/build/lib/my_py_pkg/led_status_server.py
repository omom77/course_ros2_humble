#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from my_robot_interfaces.srv import BatteryStatusLed
from my_robot_interfaces.msg import LedStatus

class BatteryStatusNode(Node): 
    def __init__(self):
        super().__init__("Battery_Status_Node")
        self.led_on = [0, 0, 1]
        self.led_off = [0, 0, 0]
        self.led_ = [0, 0, 1]
        # Service to respond to request from battery_status client
        self.server_ = self.create_service(BatteryStatusLed, "set_led", self.callback_battery_status_led)

        # Create a publisher
        # Publish to led_panel_state topic
        self.publisher_led_status_= self.create_publisher(LedStatus, "led_panel_state", 10)
        # self.timer_ = self.create_timer(1.0, self.publish_led_status) redundant now

        self.get_logger().info("Server - Battery Status")

    def publish_led_status(self) :   # Function to publish on the publisher
        msg = LedStatus()
        msg.led_status = self.led_
        self.publisher_led_status_.publish(msg) 
    
    def callback_battery_status_led(self, request, response):
        response.success = True
        if(request.battery_level == 0):
            self.led_ = self.led_on
            self.led = "ON"
        elif(request.battery_level == 1):
            self.led_ = self.led_off
            self.led_status = "OFF"
        self.get_logger().info(str(request.battery_level))
        self.get_logger().info(request.led_condition)
        self.get_logger().info(str(response.success))
        self.get_logger().info(str(self.led_))
        self.publish_led_status()
        return response

     


def main(args=None):
    rclpy.init(args=args)
    node = BatteryStatusNode() 
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()