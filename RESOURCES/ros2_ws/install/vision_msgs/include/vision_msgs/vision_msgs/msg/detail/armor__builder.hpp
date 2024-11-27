// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_msgs:msg/Armor.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__ARMOR__BUILDER_HPP_
#define VISION_MSGS__MSG__DETAIL__ARMOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_msgs/msg/detail/armor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_msgs
{

namespace msg
{

namespace builder
{

class Init_Armor_points
{
public:
  explicit Init_Armor_points(::vision_msgs::msg::Armor & msg)
  : msg_(msg)
  {}
  ::vision_msgs::msg::Armor points(::vision_msgs::msg::Armor::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_msgs::msg::Armor msg_;
};

class Init_Armor_armor_type
{
public:
  explicit Init_Armor_armor_type(::vision_msgs::msg::Armor & msg)
  : msg_(msg)
  {}
  Init_Armor_points armor_type(::vision_msgs::msg::Armor::_armor_type_type arg)
  {
    msg_.armor_type = std::move(arg);
    return Init_Armor_points(msg_);
  }

private:
  ::vision_msgs::msg::Armor msg_;
};

class Init_Armor_dis
{
public:
  explicit Init_Armor_dis(::vision_msgs::msg::Armor & msg)
  : msg_(msg)
  {}
  Init_Armor_armor_type dis(::vision_msgs::msg::Armor::_dis_type arg)
  {
    msg_.dis = std::move(arg);
    return Init_Armor_armor_type(msg_);
  }

private:
  ::vision_msgs::msg::Armor msg_;
};

class Init_Armor_id
{
public:
  explicit Init_Armor_id(::vision_msgs::msg::Armor & msg)
  : msg_(msg)
  {}
  Init_Armor_dis id(::vision_msgs::msg::Armor::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Armor_dis(msg_);
  }

private:
  ::vision_msgs::msg::Armor msg_;
};

class Init_Armor_color
{
public:
  Init_Armor_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Armor_id color(::vision_msgs::msg::Armor::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_Armor_id(msg_);
  }

private:
  ::vision_msgs::msg::Armor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_msgs::msg::Armor>()
{
  return vision_msgs::msg::builder::Init_Armor_color();
}

}  // namespace vision_msgs

#endif  // VISION_MSGS__MSG__DETAIL__ARMOR__BUILDER_HPP_
