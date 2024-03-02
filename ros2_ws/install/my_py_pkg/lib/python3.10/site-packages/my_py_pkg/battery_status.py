#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial

from my_robot_interfaces.srv import BatteryStatusLed

class BatteryStatusNode(Node): 
    def __init__(self):
        super().__init__("battery_status_node")
        self.timer_ = self.create_timer(3.0, self.send_request_on)
        self.timer_ = self.create_timer(6.0, self.send_request_off)
        
    def send_request_on(self):
        self.call_battery_status_server(1, "ON")

    def send_request_off(self):
        self.call_battery_status_server(0, "OFF")

    def call_battery_status_server(self, battery_level, led_condition):
        client = self.create_client(BatteryStatusLed, "set_led")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting Server LED_status_server....")
        
        request = BatteryStatusLed.Request()
        request.battery_level = battery_level
        request.led_condition = led_condition

        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_battery_status_server, battery_level=battery_level, led_condition=led_condition))

    def callback_battery_status_server(self, future, battery_level, led_condition):
        try:
            response = future.result()
            self.get_logger().info(str(battery_level) +"\n"+ led_condition +"\n Response"+ str(response.success))
        except Exception as e:
            self.get_logger().error("service call failed %r" % (e,))


def main(args=None):
    rclpy.init(args=args)
    node = BatteryStatusNode() 
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()