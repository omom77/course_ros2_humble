from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    # Rename the topic number to remapped number
    # Format tuple - ("old_name", "new_name")
    # topics & services - tuples
    # parameters - dictionaries

    robot_names = ["Jarvis", "Parrot_V1", "BB8", "C3PO"]
    robot_news_station = []

    for i in robot_names:
        robot_news_station.append(Node(
            package = "my_py_pkg",
            executable = "robot_news_station",
            name= i,
            parameters=[
                {"robot_name": i}
            ]
        ))
        

    smartphone_node = Node(
        package = "my_py_pkg",
        executable = "smartphone"
    )

    for node in robot_news_station:
        ld.add_action(node)
    
    ld.add_action(smartphone_node)
    return ld
