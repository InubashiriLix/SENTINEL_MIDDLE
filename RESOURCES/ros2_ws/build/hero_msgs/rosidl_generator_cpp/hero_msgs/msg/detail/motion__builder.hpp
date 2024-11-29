// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hero_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

#ifndef HERO_MSGS__MSG__DETAIL__MOTION__BUILDER_HPP_
#define HERO_MSGS__MSG__DETAIL__MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hero_msgs/msg/detail/motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hero_msgs
{

namespace msg
{

namespace builder
{

class Init_Motion_angular_z
{
public:
  explicit Init_Motion_angular_z(::hero_msgs::msg::Motion & msg)
  : msg_(msg)
  {}
  ::hero_msgs::msg::Motion angular_z(::hero_msgs::msg::Motion::_angular_z_type arg)
  {
    msg_.angular_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hero_msgs::msg::Motion msg_;
};

class Init_Motion_linear_y
{
public:
  explicit Init_Motion_linear_y(::hero_msgs::msg::Motion & msg)
  : msg_(msg)
  {}
  Init_Motion_angular_z linear_y(::hero_msgs::msg::Motion::_linear_y_type arg)
  {
    msg_.linear_y = std::move(arg);
    return Init_Motion_angular_z(msg_);
  }

private:
  ::hero_msgs::msg::Motion msg_;
};

class Init_Motion_linear_x
{
public:
  Init_Motion_linear_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motion_linear_y linear_x(::hero_msgs::msg::Motion::_linear_x_type arg)
  {
    msg_.linear_x = std::move(arg);
    return Init_Motion_linear_y(msg_);
  }

private:
  ::hero_msgs::msg::Motion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hero_msgs::msg::Motion>()
{
  return hero_msgs::msg::builder::Init_Motion_linear_x();
}

}  // namespace hero_msgs

#endif  // HERO_MSGS__MSG__DETAIL__MOTION__BUILDER_HPP_
