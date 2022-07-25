// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from color_interfaces:msg/ColorFlag.idl
// generated code does not contain a copyright notice
#include "color_interfaces/msg/detail/color_flag__rosidl_typesupport_fastrtps_cpp.hpp"
#include "color_interfaces/msg/detail/color_flag__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: greenflag
  cdr << (ros_message.greenflag ? true : false);
  // Member: yellowflag
  cdr << (ros_message.yellowflag ? true : false);
  // Member: redflag
  cdr << (ros_message.redflag ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_color_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  color_interfaces::msg::ColorFlag & ros_message)
{
  // Member: greenflag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.greenflag = tmp ? true : false;
  }

  // Member: yellowflag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.yellowflag = tmp ? true : false;
  }

  // Member: redflag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.redflag = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_color_interfaces
get_serialized_size(
  const color_interfaces::msg::ColorFlag & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: greenflag
  {
    size_t item_size = sizeof(ros_message.greenflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yellowflag
  {
    size_t item_size = sizeof(ros_message.yellowflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: redflag
  {
    size_t item_size = sizeof(ros_message.redflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_color_interfaces
max_serialized_size_ColorFlag(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: greenflag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: yellowflag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: redflag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ColorFlag__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const color_interfaces::msg::ColorFlag *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ColorFlag__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<color_interfaces::msg::ColorFlag *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ColorFlag__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const color_interfaces::msg::ColorFlag *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ColorFlag__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ColorFlag(full_bounded, 0);
}

static message_type_support_callbacks_t _ColorFlag__callbacks = {
  "color_interfaces::msg",
  "ColorFlag",
  _ColorFlag__cdr_serialize,
  _ColorFlag__cdr_deserialize,
  _ColorFlag__get_serialized_size,
  _ColorFlag__max_serialized_size
};

static rosidl_message_type_support_t _ColorFlag__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ColorFlag__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace color_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_color_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<color_interfaces::msg::ColorFlag>()
{
  return &color_interfaces::msg::typesupport_fastrtps_cpp::_ColorFlag__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, color_interfaces, msg, ColorFlag)() {
  return &color_interfaces::msg::typesupport_fastrtps_cpp::_ColorFlag__handle;
}

#ifdef __cplusplus
}
#endif
