// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hero_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

#ifndef HERO_MSGS__MSG__DETAIL__MOTION__STRUCT_HPP_
#define HERO_MSGS__MSG__DETAIL__MOTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hero_msgs__msg__Motion __attribute__((deprecated))
#else
# define DEPRECATED__hero_msgs__msg__Motion __declspec(deprecated)
#endif

namespace hero_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motion_
{
  using Type = Motion_<ContainerAllocator>;

  explicit Motion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_x = 0.0;
      this->linear_y = 0.0;
      this->angular_z = 0.0;
    }
  }

  explicit Motion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_x = 0.0;
      this->linear_y = 0.0;
      this->angular_z = 0.0;
    }
  }

  // field types and members
  using _linear_x_type =
    double;
  _linear_x_type linear_x;
  using _linear_y_type =
    double;
  _linear_y_type linear_y;
  using _angular_z_type =
    double;
  _angular_z_type angular_z;

  // setters for named parameter idiom
  Type & set__linear_x(
    const double & _arg)
  {
    this->linear_x = _arg;
    return *this;
  }
  Type & set__linear_y(
    const double & _arg)
  {
    this->linear_y = _arg;
    return *this;
  }
  Type & set__angular_z(
    const double & _arg)
  {
    this->angular_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hero_msgs::msg::Motion_<ContainerAllocator> *;
  using ConstRawPtr =
    const hero_msgs::msg::Motion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hero_msgs::msg::Motion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hero_msgs::msg::Motion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hero_msgs::msg::Motion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hero_msgs::msg::Motion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hero_msgs::msg::Motion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hero_msgs::msg::Motion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hero_msgs::msg::Motion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hero_msgs::msg::Motion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hero_msgs__msg__Motion
    std::shared_ptr<hero_msgs::msg::Motion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hero_msgs__msg__Motion
    std::shared_ptr<hero_msgs::msg::Motion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motion_ & other) const
  {
    if (this->linear_x != other.linear_x) {
      return false;
    }
    if (this->linear_y != other.linear_y) {
      return false;
    }
    if (this->angular_z != other.angular_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motion_

// alias to use template instance with default allocator
using Motion =
  hero_msgs::msg::Motion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hero_msgs

#endif  // HERO_MSGS__MSG__DETAIL__MOTION__STRUCT_HPP_
