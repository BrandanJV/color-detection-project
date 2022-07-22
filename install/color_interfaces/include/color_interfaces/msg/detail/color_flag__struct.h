// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from color_interfaces:msg/ColorFlag.idl
// generated code does not contain a copyright notice

#ifndef COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__STRUCT_H_
#define COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ColorFlag in the package color_interfaces.
typedef struct color_interfaces__msg__ColorFlag
{
  bool greenflag;
  bool yellowflag;
  bool redflag;
} color_interfaces__msg__ColorFlag;

// Struct for a sequence of color_interfaces__msg__ColorFlag.
typedef struct color_interfaces__msg__ColorFlag__Sequence
{
  color_interfaces__msg__ColorFlag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} color_interfaces__msg__ColorFlag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__STRUCT_H_
