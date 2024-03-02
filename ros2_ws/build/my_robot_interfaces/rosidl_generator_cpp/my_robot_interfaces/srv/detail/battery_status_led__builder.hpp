// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:srv/BatteryStatusLed.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__BATTERY_STATUS_LED__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__BATTERY_STATUS_LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/srv/detail/battery_status_led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_BatteryStatusLed_Request_led_condition
{
public:
  explicit Init_BatteryStatusLed_Request_led_condition(::my_robot_interfaces::srv::BatteryStatusLed_Request & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::srv::BatteryStatusLed_Request led_condition(::my_robot_interfaces::srv::BatteryStatusLed_Request::_led_condition_type arg)
  {
    msg_.led_condition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::BatteryStatusLed_Request msg_;
};

class Init_BatteryStatusLed_Request_battery_level
{
public:
  Init_BatteryStatusLed_Request_battery_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryStatusLed_Request_led_condition battery_level(::my_robot_interfaces::srv::BatteryStatusLed_Request::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return Init_BatteryStatusLed_Request_led_condition(msg_);
  }

private:
  ::my_robot_interfaces::srv::BatteryStatusLed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::BatteryStatusLed_Request>()
{
  return my_robot_interfaces::srv::builder::Init_BatteryStatusLed_Request_battery_level();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_BatteryStatusLed_Response_success
{
public:
  Init_BatteryStatusLed_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::srv::BatteryStatusLed_Response success(::my_robot_interfaces::srv::BatteryStatusLed_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::BatteryStatusLed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::BatteryStatusLed_Response>()
{
  return my_robot_interfaces::srv::builder::Init_BatteryStatusLed_Response_success();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__BATTERY_STATUS_LED__BUILDER_HPP_
