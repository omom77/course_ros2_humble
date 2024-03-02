#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

class AddTWoIntsClientNode : public rclcpp::Node 
{
public:
    AddTWoIntsClientNode() : Node("add_two_ints_client") 
    {
        // thread1__ = std::thread(std::bind(&AddTWoIntsClientNode::callAddTwoIntsService, this, 4, 7));
        // thread2__ = std::thread(std::bind(&AddTWoIntsClientNode::callAddTwoIntsService, this, 13, 10));
        threads_.push_back(std::thread(std::bind(&AddTWoIntsClientNode::callAddTwoIntsService, this, 4, 7)));
        threads_.push_back(std::thread(std::bind(&AddTWoIntsClientNode::callAddTwoIntsService, this, 69, 69)));
    }

    void callAddTwoIntsService(int a, int b)
    {
        auto client = this->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");
        while (!client->wait_for_service(std::chrono::seconds(1)))
        {
            RCLCPP_WARN(this->get_logger(), "Waiting for server....");;
        }

        auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
        request->a = a;
        request->b = b; 

        auto future = client->async_send_request(request);

        try
        {
            auto response = future.get();
            RCLCPP_INFO(this->get_logger(), "%d + %d = %ld", a, b, response->sum);
        }
        catch(const std::exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "Service has failed");
        }
    }

private:
    // std::thread thread1__;
    // std::thread thread2__;
    std::vector<std::thread>  threads_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<AddTWoIntsClientNode>(); 
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}