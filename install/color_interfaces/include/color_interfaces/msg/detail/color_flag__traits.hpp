// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from color_interfaces:msg/ColorFlag.idl
// generated code does not contain a copyright notice

#ifndef COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__TRAITS_HPP_
#define COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__TRAITS_HPP_

#include "color_interfaces/msg/detail/color_flag__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<color_interfaces::msg::ColorFlag>()
{
  return "color_interfaces::msg::ColorFlag";
}

template<>
inline const char * name<color_interfaces::msg::ColorFlag>()
{
  return "color_interfaces/msg/ColorFlag";
}

template<>
struct has_fixed_size<color_interfaces::msg::ColorFlag>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<color_interfaces::msg::ColorFlag>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<color_interfaces::msg::ColorFlag>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__TRAITS_HPP_
