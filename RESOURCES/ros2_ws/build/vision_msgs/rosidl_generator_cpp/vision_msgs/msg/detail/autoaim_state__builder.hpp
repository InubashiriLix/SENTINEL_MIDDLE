// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_msgs:msg/AutoaimState.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__AUTOAIM_STATE__BUILDER_HPP_
#define VISION_MSGS__MSG__DETAIL__AUTOAIM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_msgs/msg/detail/autoaim_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_msgs
{

namespace msg
{

namespace builder
{

class Init_AutoaimState_target_id
{
public:
  explicit Init_AutoaimState_target_id(::vision_msgs::msg::AutoaimState & msg)
  : msg_(msg)
  {}
  ::vision_msgs::msg::AutoaimState target_id(::vision_msgs::msg::AutoaimState::_target_id_type arg)
  {
    msg_.target_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_msgs::msg::AutoaimState msg_;
};

class Init_AutoaimState_autoaim_state
{
public:
  explicit Init_AutoaimState_autoaim_state(::vision_msgs::msg::AutoaimState & msg)
  : msg_(msg)
  {}
  Init_AutoaimState_target_id autoaim_state(::vision_msgs::msg::AutoaimState::_autoaim_state_type arg)
  {
    msg_.autoaim_state = std::move(arg);
    return Init_AutoaimState_target_id(msg_);
  }

private:
  ::vision_msgs::msg::AutoaimState msg_;
};

class Init_AutoaimState_header
{
public:
  Init_AutoaimState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoaimState_autoaim_state header(::vision_msgs::msg::AutoaimState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AutoaimState_autoaim_state(msg_);
  }

private:
  ::vision_msgs::msg::AutoaimState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_msgs::msg::AutoaimState>()
{
  return vision_msgs::msg::builder::Init_AutoaimState_header();
}

}  // namespace vision_msgs

#endif  // VISION_MSGS__MSG__DETAIL__AUTOAIM_STATE__BUILDER_HPP_
