// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vision_msgs:msg/Armors.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__ARMORS__STRUCT_HPP_
#define VISION_MSGS__MSG__DETAIL__ARMORS__STRUCT_HPP_

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
// Member 'armors'
#include "vision_msgs/msg/detail/armor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vision_msgs__msg__Armors __attribute__((deprecated))
#else
# define DEPRECATED__vision_msgs__msg__Armors __declspec(deprecated)
#endif

namespace vision_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Armors_
{
  using Type = Armors_<ContainerAllocator>;

  explicit Armors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->armor_type = 0;
    }
  }

  explicit Armors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->armor_type = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _armor_type_type =
    uint8_t;
  _armor_type_type armor_type;
  using _armors_type =
    std::vector<vision_msgs::msg::Armor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_msgs::msg::Armor_<ContainerAllocator>>>;
  _armors_type armors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__armor_type(
    const uint8_t & _arg)
  {
    this->armor_type = _arg;
    return *this;
  }
  Type & set__armors(
    const std::vector<vision_msgs::msg::Armor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vision_msgs::msg::Armor_<ContainerAllocator>>> & _arg)
  {
    this->armors = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ARMOR =
    0u;
  static constexpr uint8_t ENERGY =
    1u;
  static constexpr uint8_t ENEMY =
    2u;

  // pointer types
  using RawPtr =
    vision_msgs::msg::Armors_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_msgs::msg::Armors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_msgs::msg::Armors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_msgs::msg::Armors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_msgs::msg::Armors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_msgs::msg::Armors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_msgs::msg::Armors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_msgs::msg::Armors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_msgs::msg::Armors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_msgs::msg::Armors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_msgs__msg__Armors
    std::shared_ptr<vision_msgs::msg::Armors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_msgs__msg__Armors
    std::shared_ptr<vision_msgs::msg::Armors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Armors_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->armor_type != other.armor_type) {
      return false;
    }
    if (this->armors != other.armors) {
      return false;
    }
    return true;
  }
  bool operator!=(const Armors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Armors_

// alias to use template instance with default allocator
using Armors =
  vision_msgs::msg::Armors_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Armors_<ContainerAllocator>::ARMOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Armors_<ContainerAllocator>::ENERGY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Armors_<ContainerAllocator>::ENEMY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace vision_msgs

#endif  // VISION_MSGS__MSG__DETAIL__ARMORS__STRUCT_HPP_
