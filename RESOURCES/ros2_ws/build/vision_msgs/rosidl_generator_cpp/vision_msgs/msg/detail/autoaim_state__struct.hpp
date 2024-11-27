// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vision_msgs:msg/AutoaimState.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__AUTOAIM_STATE__STRUCT_HPP_
#define VISION_MSGS__MSG__DETAIL__AUTOAIM_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vision_msgs__msg__AutoaimState __attribute__((deprecated))
#else
# define DEPRECATED__vision_msgs__msg__AutoaimState __declspec(deprecated)
#endif

namespace vision_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AutoaimState_
{
  using Type = AutoaimState_<ContainerAllocator>;

  explicit AutoaimState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->autoaim_state = 0;
      this->target_id = 0;
    }
  }

  explicit AutoaimState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->autoaim_state = 0;
      this->target_id = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _autoaim_state_type =
    uint8_t;
  _autoaim_state_type autoaim_state;
  using _target_id_type =
    uint8_t;
  _target_id_type target_id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__autoaim_state(
    const uint8_t & _arg)
  {
    this->autoaim_state = _arg;
    return *this;
  }
  Type & set__target_id(
    const uint8_t & _arg)
  {
    this->target_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TARGET_ID0_NONE =
    0u;
  static constexpr uint8_t TARGET_ID1_HERO =
    1u;
  static constexpr uint8_t TARGET_ID2_ENGINEEER =
    2u;
  static constexpr uint8_t TARGET_ID3_INFANTRY =
    3u;
  static constexpr uint8_t TARGET_ID4_INFANTRY =
    4u;
  static constexpr uint8_t TARGET_ID5_INFANTRY =
    5u;
  static constexpr uint8_t TARGET_ID6_OUTPOST =
    6u;
  static constexpr uint8_t TARGET_ID7_SENTRY =
    7u;

  // pointer types
  using RawPtr =
    vision_msgs::msg::AutoaimState_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_msgs::msg::AutoaimState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_msgs::msg::AutoaimState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_msgs::msg::AutoaimState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_msgs::msg::AutoaimState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_msgs::msg::AutoaimState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_msgs::msg::AutoaimState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_msgs::msg::AutoaimState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_msgs::msg::AutoaimState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_msgs::msg::AutoaimState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_msgs__msg__AutoaimState
    std::shared_ptr<vision_msgs::msg::AutoaimState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_msgs__msg__AutoaimState
    std::shared_ptr<vision_msgs::msg::AutoaimState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoaimState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->autoaim_state != other.autoaim_state) {
      return false;
    }
    if (this->target_id != other.target_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoaimState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoaimState_

// alias to use template instance with default allocator
using AutoaimState =
  vision_msgs::msg::AutoaimState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoaimState_<ContainerAllocator>::TARGET_ID0_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoaimState_<ContainerAllocator>::TARGET_ID1_HERO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoaimState_<ContainerAllocator>::TARGET_ID2_ENGINEEER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoaimState_<ContainerAllocator>::TARGET_ID3_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoaimState_<ContainerAllocator>::TARGET_ID4_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoaimState_<ContainerAllocator>::TARGET_ID5_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoaimState_<ContainerAllocator>::TARGET_ID6_OUTPOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoaimState_<ContainerAllocator>::TARGET_ID7_SENTRY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace vision_msgs

#endif  // VISION_MSGS__MSG__DETAIL__AUTOAIM_STATE__STRUCT_HPP_
