#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts

def main(args=None):
    rclpy.init(args=args)
    node = Node("add_two_ints_no_oop") 

    client = node.create_client(AddTwoInts, "add_two_ints")
    
    # Wait for the server to start - Refresh every one second
    while not client.wait_for_service(1.0):
        node.get_logger().warn("Waiting for Server Add Two Ints.....")
        # Exit once the server starts

    request = AddTwoInts.Request()
    request.a = 10
    request.b = 1

    # Always use async - program continues after sending request
    future = client.call_async(request) 
    # Future - contains a value that may be set in the future
    rclpy.spin_until_future_complete(node, future)  # wait for the node and future to complete

    try:
        response = future.result()
        node.get_logger().info(
                        str(request.a) + " + " + str(request.b) + " = " + str(response.sum))
    except Exception as e:
        node.get_logger().error("Service call failed %r" % (e,))

    rclpy.shutdown()


if __name__ == "__main__":
    main()