#include "rclcpp/rclcpp.hpp"
#include "my_robot_interfaces/msg/hardware_status.hpp"

class HardwareStatusPublisherNode : public rclcpp::Node
{
public:
    HardwareStatusPublisherNode() : Node("hardware_status"), robot_name_("Parrot V1")
    {
        publisher_ = this->create_publisher<my_robot_interfaces::msg::HardwareStatus>("hardware_status", 10);
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&HardwareStatusPublisherNode::PublishHardwareStatus, this));
        RCLCPP_INFO(this->get_logger(),"CPP Custom Interface Test");
    }

private:
    void PublishHardwareStatus()
    {
        auto msg = my_robot_interfaces::msg::HardwareStatus();
        msg.temperature = 51;
        msg.are_motors_ready = false;
        msg.debug_message = "Critical Motor Temperature!";
        publisher_->publish(msg);
    }

    std::string robot_name_;
    rclcpp::Publisher<my_robot_interfaces::msg::HardwareStatus>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<HardwareStatusPublisherNode>(); // MODIFY NAME
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}