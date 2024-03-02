#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"

class RobotNewsStationNode : public rclcpp::Node
{
public:
    RobotNewsStationNode() : Node("robot_news_station")
    {
        this->declare_parameter("robot_name", "parrot");
        this->declare_parameter("publish_frequency_ms", 1);
        robot_name_  = this->get_parameter("robot_name").as_string();
        publish_frequency_ = this->get_parameter("publish_frequency_ms").as_int();

        publisher_ = this->create_publisher<example_interfaces::msg::String>("robot_news", 10);
        timer_ = this->create_wall_timer(std::chrono::milliseconds(publish_frequency_), std::bind(&RobotNewsStationNode::PublishNews, this));
        RCLCPP_INFO(this->get_logger(),"Robot news station has been started.");
    }

private:
    void PublishNews()
    {
        auto msg = example_interfaces::msg::String();
        msg.data = std::string("Hi this is ") + robot_name_ + std::string("From the robot news station");
        publisher_->publish(msg);
    }

    std::string robot_name_;
    int publish_frequency_;
    rclcpp::Publisher<example_interfaces::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RobotNewsStationNode>(); // MODIFY NAME
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}