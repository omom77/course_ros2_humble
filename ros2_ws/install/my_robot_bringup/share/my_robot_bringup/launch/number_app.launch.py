from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    # Rename the topic number to remapped number
    # Format tuple - ("old_name", "new_name")
    # topics & services - tuples
    # parameters - dictionaries
    remap_number_topic = ("number","remapped_number")

    number_publisher_node = Node(
        package = "my_py_pkg",
        executable = "number_publisher",
        name = "num_pub",
        remappings=[
            remap_number_topic
        ],
        parameters=[
            {"number_to_publish": 69},
            {"frequency_to_publish": 3.0}
        ]
    )
    number_counter_node = Node(
        package = "my_py_pkg",
        executable = "number_counter",
        name = "num_sub",
        remappings=[
            remap_number_topic,
            ("number_count", "remapped_number_count")
        ]     
    )

    ld.add_action(number_publisher_node)
    ld.add_action(number_counter_node)
    return ld