// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from color_interfaces:msg/ColorFlag.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "color_interfaces/msg/detail/color_flag__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace color_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ColorFlag_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) color_interfaces::msg::ColorFlag(_init);
}

void ColorFlag_fini_function(void * message_memory)
{
  auto typed_message = static_cast<color_interfaces::msg::ColorFlag *>(message_memory);
  typed_message->~ColorFlag();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ColorFlag_message_member_array[3] = {
  {
    "greenflag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(color_interfaces::msg::ColorFlag, greenflag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yellowflag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(color_interfaces::msg::ColorFlag, yellowflag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "redflag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(color_interfaces::msg::ColorFlag, redflag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ColorFlag_message_members = {
  "color_interfaces::msg",  // message namespace
  "ColorFlag",  // message name
  3,  // number of fields
  sizeof(color_interfaces::msg::ColorFlag),
  ColorFlag_message_member_array,  // message members
  ColorFlag_init_function,  // function to initialize message memory (memory has to be allocated)
  ColorFlag_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ColorFlag_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ColorFlag_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace color_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<color_interfaces::msg::ColorFlag>()
{
  return &::color_interfaces::msg::rosidl_typesupport_introspection_cpp::ColorFlag_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, color_interfaces, msg, ColorFlag)() {
  return &::color_interfaces::msg::rosidl_typesupport_introspection_cpp::ColorFlag_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
