// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from color_interfaces:msg/ColorFlag.idl
// generated code does not contain a copyright notice
#include "color_interfaces/msg/detail/color_flag__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "color_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "color_interfaces/msg/detail/color_flag__struct.h"
#include "color_interfaces/msg/detail/color_flag__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ColorFlag__ros_msg_type = color_interfaces__msg__ColorFlag;

static bool _ColorFlag__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ColorFlag__ros_msg_type * ros_message = static_cast<const _ColorFlag__ros_msg_type *>(untyped_ros_message);
  // Field name: greenflag
  {
    cdr << (ros_message->greenflag ? true : false);
  }

  // Field name: yellowflag
  {
    cdr << (ros_message->yellowflag ? true : false);
  }

  // Field name: redflag
  {
    cdr << (ros_message->redflag ? true : false);
  }

  return true;
}

static bool _ColorFlag__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ColorFlag__ros_msg_type * ros_message = static_cast<_ColorFlag__ros_msg_type *>(untyped_ros_message);
  // Field name: greenflag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->greenflag = tmp ? true : false;
  }

  // Field name: yellowflag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->yellowflag = tmp ? true : false;
  }

  // Field name: redflag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->redflag = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_color_interfaces
size_t get_serialized_size_color_interfaces__msg__ColorFlag(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ColorFlag__ros_msg_type * ros_message = static_cast<const _ColorFlag__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name greenflag
  {
    size_t item_size = sizeof(ros_message->greenflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yellowflag
  {
    size_t item_size = sizeof(ros_message->yellowflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name redflag
  {
    size_t item_size = sizeof(ros_message->redflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ColorFlag__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_color_interfaces__msg__ColorFlag(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_color_interfaces
size_t max_serialized_size_color_interfaces__msg__ColorFlag(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: greenflag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: yellowflag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: redflag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ColorFlag__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_color_interfaces__msg__ColorFlag(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ColorFlag = {
  "color_interfaces::msg",
  "ColorFlag",
  _ColorFlag__cdr_serialize,
  _ColorFlag__cdr_deserialize,
  _ColorFlag__get_serialized_size,
  _ColorFlag__max_serialized_size
};

static rosidl_message_type_support_t _ColorFlag__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ColorFlag,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, color_interfaces, msg, ColorFlag)() {
  return &_ColorFlag__type_support;
}

#if defined(__cplusplus)
}
#endif
