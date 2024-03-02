// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_interfaces:srv/BatteryStatusLed.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__BATTERY_STATUS_LED__STRUCT_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__BATTERY_STATUS_LED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__srv__BatteryStatusLed_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__srv__BatteryStatusLed_Request __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatteryStatusLed_Request_
{
  using Type = BatteryStatusLed_Request_<ContainerAllocator>;

  explicit BatteryStatusLed_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_level = 0l;
      this->led_condition = "";
    }
  }

  explicit BatteryStatusLed_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : led_condition(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_level = 0l;
      this->led_condition = "";
    }
  }

  // field types and members
  using _battery_level_type =
    int32_t;
  _battery_level_type battery_level;
  using _led_condition_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _led_condition_type led_condition;

  // setters for named parameter idiom
  Type & set__battery_level(
    const int32_t & _arg)
  {
    this->battery_level = _arg;
    return *this;
  }
  Type & set__led_condition(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->led_condition = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::srv::BatteryStatusLed_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::srv::BatteryStatusLed_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::BatteryStatusLed_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::BatteryStatusLed_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::BatteryStatusLed_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::BatteryStatusLed_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::BatteryStatusLed_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::BatteryStatusLed_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::BatteryStatusLed_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::BatteryStatusLed_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__srv__BatteryStatusLed_Request
    std::shared_ptr<my_robot_interfaces::srv::BatteryStatusLed_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__srv__BatteryStatusLed_Request
    std::shared_ptr<my_robot_interfaces::srv::BatteryStatusLed_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryStatusLed_Request_ & other) const
  {
    if (this->battery_level != other.battery_level) {
      return false;
    }
    if (this->led_condition != other.led_condition) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryStatusLed_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryStatusLed_Request_

// alias to use template instance with default allocator
using BatteryStatusLed_Request =
  my_robot_interfaces::srv::BatteryStatusLed_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_interfaces


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__srv__BatteryStatusLed_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__srv__BatteryStatusLed_Response __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatteryStatusLed_Response_
{
  using Type = BatteryStatusLed_Response_<ContainerAllocator>;

  explicit BatteryStatusLed_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit BatteryStatusLed_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::srv::BatteryStatusLed_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::srv::BatteryStatusLed_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::BatteryStatusLed_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::srv::BatteryStatusLed_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::BatteryStatusLed_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::BatteryStatusLed_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::srv::BatteryStatusLed_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::srv::BatteryStatusLed_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::BatteryStatusLed_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::srv::BatteryStatusLed_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__srv__BatteryStatusLed_Response
    std::shared_ptr<my_robot_interfaces::srv::BatteryStatusLed_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__srv__BatteryStatusLed_Response
    std::shared_ptr<my_robot_interfaces::srv::BatteryStatusLed_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryStatusLed_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryStatusLed_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryStatusLed_Response_

// alias to use template instance with default allocator
using BatteryStatusLed_Response =
  my_robot_interfaces::srv::BatteryStatusLed_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_robot_interfaces

namespace my_robot_interfaces
{

namespace srv
{

struct BatteryStatusLed
{
  using Request = my_robot_interfaces::srv::BatteryStatusLed_Request;
  using Response = my_robot_interfaces::srv::BatteryStatusLed_Response;
};

}  // namespace srv

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__BATTERY_STATUS_LED__STRUCT_HPP_
