// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_msgs:msg/Armors.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__ARMORS__BUILDER_HPP_
#define VISION_MSGS__MSG__DETAIL__ARMORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_msgs/msg/detail/armors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_msgs
{

namespace msg
{

namespace builder
{

class Init_Armors_armors
{
public:
  explicit Init_Armors_armors(::vision_msgs::msg::Armors & msg)
  : msg_(msg)
  {}
  ::vision_msgs::msg::Armors armors(::vision_msgs::msg::Armors::_armors_type arg)
  {
    msg_.armors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_msgs::msg::Armors msg_;
};

class Init_Armors_armor_type
{
public:
  explicit Init_Armors_armor_type(::vision_msgs::msg::Armors & msg)
  : msg_(msg)
  {}
  Init_Armors_armors armor_type(::vision_msgs::msg::Armors::_armor_type_type arg)
  {
    msg_.armor_type = std::move(arg);
    return Init_Armors_armors(msg_);
  }

private:
  ::vision_msgs::msg::Armors msg_;
};

class Init_Armors_header
{
public:
  Init_Armors_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Armors_armor_type header(::vision_msgs::msg::Armors::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Armors_armor_type(msg_);
  }

private:
  ::vision_msgs::msg::Armors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_msgs::msg::Armors>()
{
  return vision_msgs::msg::builder::Init_Armors_header();
}

}  // namespace vision_msgs

#endif  // VISION_MSGS__MSG__DETAIL__ARMORS__BUILDER_HPP_
