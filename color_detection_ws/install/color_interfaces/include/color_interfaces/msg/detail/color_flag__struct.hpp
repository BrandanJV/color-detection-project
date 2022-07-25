// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from color_interfaces:msg/ColorFlag.idl
// generated code does not contain a copyright notice

#ifndef COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__STRUCT_HPP_
#define COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__color_interfaces__msg__ColorFlag __attribute__((deprecated))
#else
# define DEPRECATED__color_interfaces__msg__ColorFlag __declspec(deprecated)
#endif

namespace color_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ColorFlag_
{
  using Type = ColorFlag_<ContainerAllocator>;

  explicit ColorFlag_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->greenflag = false;
      this->yellowflag = false;
      this->redflag = false;
    }
  }

  explicit ColorFlag_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->greenflag = false;
      this->yellowflag = false;
      this->redflag = false;
    }
  }

  // field types and members
  using _greenflag_type =
    bool;
  _greenflag_type greenflag;
  using _yellowflag_type =
    bool;
  _yellowflag_type yellowflag;
  using _redflag_type =
    bool;
  _redflag_type redflag;

  // setters for named parameter idiom
  Type & set__greenflag(
    const bool & _arg)
  {
    this->greenflag = _arg;
    return *this;
  }
  Type & set__yellowflag(
    const bool & _arg)
  {
    this->yellowflag = _arg;
    return *this;
  }
  Type & set__redflag(
    const bool & _arg)
  {
    this->redflag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    color_interfaces::msg::ColorFlag_<ContainerAllocator> *;
  using ConstRawPtr =
    const color_interfaces::msg::ColorFlag_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<color_interfaces::msg::ColorFlag_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<color_interfaces::msg::ColorFlag_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      color_interfaces::msg::ColorFlag_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<color_interfaces::msg::ColorFlag_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      color_interfaces::msg::ColorFlag_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<color_interfaces::msg::ColorFlag_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<color_interfaces::msg::ColorFlag_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<color_interfaces::msg::ColorFlag_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__color_interfaces__msg__ColorFlag
    std::shared_ptr<color_interfaces::msg::ColorFlag_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__color_interfaces__msg__ColorFlag
    std::shared_ptr<color_interfaces::msg::ColorFlag_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ColorFlag_ & other) const
  {
    if (this->greenflag != other.greenflag) {
      return false;
    }
    if (this->yellowflag != other.yellowflag) {
      return false;
    }
    if (this->redflag != other.redflag) {
      return false;
    }
    return true;
  }
  bool operator!=(const ColorFlag_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ColorFlag_

// alias to use template instance with default allocator
using ColorFlag =
  color_interfaces::msg::ColorFlag_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace color_interfaces

#endif  // COLOR_INTERFACES__MSG__DETAIL__COLOR_FLAG__STRUCT_HPP_
