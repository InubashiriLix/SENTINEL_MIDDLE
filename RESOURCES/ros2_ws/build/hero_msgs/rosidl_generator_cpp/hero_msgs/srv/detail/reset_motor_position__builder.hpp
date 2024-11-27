// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hero_msgs:srv/ResetMotorPosition.idl
// generated code does not contain a copyright notice

#ifndef HERO_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__BUILDER_HPP_
#define HERO_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hero_msgs/srv/detail/reset_motor_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hero_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetMotorPosition_Request_motor_name
{
public:
  Init_ResetMotorPosition_Request_motor_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hero_msgs::srv::ResetMotorPosition_Request motor_name(::hero_msgs::srv::ResetMotorPosition_Request::_motor_name_type arg)
  {
    msg_.motor_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hero_msgs::srv::ResetMotorPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hero_msgs::srv::ResetMotorPosition_Request>()
{
  return hero_msgs::srv::builder::Init_ResetMotorPosition_Request_motor_name();
}

}  // namespace hero_msgs


namespace hero_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetMotorPosition_Response_succ
{
public:
  Init_ResetMotorPosition_Response_succ()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::hero_msgs::srv::ResetMotorPosition_Response succ(::hero_msgs::srv::ResetMotorPosition_Response::_succ_type arg)
  {
    msg_.succ = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hero_msgs::srv::ResetMotorPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hero_msgs::srv::ResetMotorPosition_Response>()
{
  return hero_msgs::srv::builder::Init_ResetMotorPosition_Response_succ();
}

}  // namespace hero_msgs

#endif  // HERO_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__BUILDER_HPP_
