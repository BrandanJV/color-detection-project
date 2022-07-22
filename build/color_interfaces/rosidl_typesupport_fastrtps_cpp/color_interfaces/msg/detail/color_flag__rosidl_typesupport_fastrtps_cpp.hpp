// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from color_interfaces:msg/ColorFlag.idl
// generated code does not contain a copyright notice

#ifndef COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "color_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "color_interfaces/msg/detail/color_flag__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace color_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_color_interfaces
cdr_serialize(
  const color_interfaces::msg::ColorFlag & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_color_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  color_interfaces::msg::ColorFlag & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_color_interfaces
get_serialized_size(
  const color_interfaces::msg::ColorFlag & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_color_interfaces
max_serialized_size_ColorFlag(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace color_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_color_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, color_interfaces, msg, ColorFlag)();

#ifdef __cplusplus
}
#endif

#endif  // COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
