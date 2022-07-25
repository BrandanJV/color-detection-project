// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from color_interfaces:msg/ColorFlag.idl
// generated code does not contain a copyright notice

#ifndef COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__BUILDER_HPP_
#define COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__BUILDER_HPP_

#include "color_interfaces/msg/detail/color_flag__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace color_interfaces
{

namespace msg
{

namespace builder
{

class Init_ColorFlag_redflag
{
public:
  explicit Init_ColorFlag_redflag(::color_interfaces::msg::ColorFlag & msg)
  : msg_(msg)
  {}
  ::color_interfaces::msg::ColorFlag redflag(::color_interfaces::msg::ColorFlag::_redflag_type arg)
  {
    msg_.redflag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::color_interfaces::msg::ColorFlag msg_;
};

class Init_ColorFlag_yellowflag
{
public:
  explicit Init_ColorFlag_yellowflag(::color_interfaces::msg::ColorFlag & msg)
  : msg_(msg)
  {}
  Init_ColorFlag_redflag yellowflag(::color_interfaces::msg::ColorFlag::_yellowflag_type arg)
  {
    msg_.yellowflag = std::move(arg);
    return Init_ColorFlag_redflag(msg_);
  }

private:
  ::color_interfaces::msg::ColorFlag msg_;
};

class Init_ColorFlag_greenflag
{
public:
  Init_ColorFlag_greenflag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ColorFlag_yellowflag greenflag(::color_interfaces::msg::ColorFlag::_greenflag_type arg)
  {
    msg_.greenflag = std::move(arg);
    return Init_ColorFlag_yellowflag(msg_);
  }

private:
  ::color_interfaces::msg::ColorFlag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::color_interfaces::msg::ColorFlag>()
{
  return color_interfaces::msg::builder::Init_ColorFlag_greenflag();
}

}  // namespace color_interfaces

#endif  // COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__BUILDER_HPP_
