// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:srv/BatteryStatusLed.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_robot_interfaces/srv/detail/battery_status_led__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void BatteryStatusLed_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::srv::BatteryStatusLed_Request(_init);
}

void BatteryStatusLed_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::srv::BatteryStatusLed_Request *>(message_memory);
  typed_message->~BatteryStatusLed_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BatteryStatusLed_Request_message_member_array[2] = {
  {
    "battery_level",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::srv::BatteryStatusLed_Request, battery_level),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "led_condition",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::srv::BatteryStatusLed_Request, led_condition),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BatteryStatusLed_Request_message_members = {
  "my_robot_interfaces::srv",  // message namespace
  "BatteryStatusLed_Request",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces::srv::BatteryStatusLed_Request),
  BatteryStatusLed_Request_message_member_array,  // message members
  BatteryStatusLed_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  BatteryStatusLed_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BatteryStatusLed_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BatteryStatusLed_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::srv::BatteryStatusLed_Request>()
{
  return &::my_robot_interfaces::srv::rosidl_typesupport_introspection_cpp::BatteryStatusLed_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, srv, BatteryStatusLed_Request)() {
  return &::my_robot_interfaces::srv::rosidl_typesupport_introspection_cpp::BatteryStatusLed_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "my_robot_interfaces/srv/detail/battery_status_led__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void BatteryStatusLed_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::srv::BatteryStatusLed_Response(_init);
}

void BatteryStatusLed_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::srv::BatteryStatusLed_Response *>(message_memory);
  typed_message->~BatteryStatusLed_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BatteryStatusLed_Response_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::srv::BatteryStatusLed_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BatteryStatusLed_Response_message_members = {
  "my_robot_interfaces::srv",  // message namespace
  "BatteryStatusLed_Response",  // message name
  1,  // number of fields
  sizeof(my_robot_interfaces::srv::BatteryStatusLed_Response),
  BatteryStatusLed_Response_message_member_array,  // message members
  BatteryStatusLed_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  BatteryStatusLed_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BatteryStatusLed_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BatteryStatusLed_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::srv::BatteryStatusLed_Response>()
{
  return &::my_robot_interfaces::srv::rosidl_typesupport_introspection_cpp::BatteryStatusLed_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, srv, BatteryStatusLed_Response)() {
  return &::my_robot_interfaces::srv::rosidl_typesupport_introspection_cpp::BatteryStatusLed_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "my_robot_interfaces/srv/detail/battery_status_led__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace my_robot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers BatteryStatusLed_service_members = {
  "my_robot_interfaces::srv",  // service namespace
  "BatteryStatusLed",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<my_robot_interfaces::srv::BatteryStatusLed>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t BatteryStatusLed_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BatteryStatusLed_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<my_robot_interfaces::srv::BatteryStatusLed>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::my_robot_interfaces::srv::rosidl_typesupport_introspection_cpp::BatteryStatusLed_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_robot_interfaces::srv::BatteryStatusLed_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::my_robot_interfaces::srv::BatteryStatusLed_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, srv, BatteryStatusLed)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<my_robot_interfaces::srv::BatteryStatusLed>();
}

#ifdef __cplusplus
}
#endif
