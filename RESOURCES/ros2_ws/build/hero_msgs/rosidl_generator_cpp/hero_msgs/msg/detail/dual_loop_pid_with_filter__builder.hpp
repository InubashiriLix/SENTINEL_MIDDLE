// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hero_msgs:msg/DualLoopPIDWithFilter.idl
// generated code does not contain a copyright notice

#ifndef HERO_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__BUILDER_HPP_
#define HERO_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hero_msgs/msg/detail/dual_loop_pid_with_filter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hero_msgs
{

namespace msg
{

namespace builder
{

class Init_DualLoopPIDWithFilter_outer_out
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_out(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  ::hero_msgs::msg::DualLoopPIDWithFilter outer_out(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_out_type arg)
  {
    msg_.outer_out = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_dout
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_dout(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_out outer_dout(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_dout_type arg)
  {
    msg_.outer_dout = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_out(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_iout
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_iout(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_dout outer_iout(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_iout_type arg)
  {
    msg_.outer_iout = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_dout(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_pout
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_pout(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_iout outer_pout(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_pout_type arg)
  {
    msg_.outer_pout = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_iout(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_out
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_out(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_pout inner_out(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_out_type arg)
  {
    msg_.inner_out = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_pout(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_dout
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_dout(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_out inner_dout(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_dout_type arg)
  {
    msg_.inner_dout = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_out(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_iout
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_iout(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_dout inner_iout(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_iout_type arg)
  {
    msg_.inner_iout = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_dout(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_pout
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_pout(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_iout inner_pout(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_pout_type arg)
  {
    msg_.inner_pout = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_iout(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_last_error
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_last_error(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_pout outer_last_error(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_last_error_type arg)
  {
    msg_.outer_last_error = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_pout(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_error_sum
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_error_sum(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_last_error outer_error_sum(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_error_sum_type arg)
  {
    msg_.outer_error_sum = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_last_error(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_error
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_error(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_error_sum outer_error(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_error_type arg)
  {
    msg_.outer_error = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_error_sum(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_feedback
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_feedback(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_error outer_feedback(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_feedback_type arg)
  {
    msg_.outer_feedback = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_error(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_set
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_set(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_feedback outer_set(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_set_type arg)
  {
    msg_.outer_set = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_feedback(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_last_error
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_last_error(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_set inner_last_error(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_last_error_type arg)
  {
    msg_.inner_last_error = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_set(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_error_sum
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_error_sum(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_last_error inner_error_sum(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_error_sum_type arg)
  {
    msg_.inner_error_sum = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_last_error(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_error
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_error(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_error_sum inner_error(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_error_type arg)
  {
    msg_.inner_error = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_error_sum(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_feedback
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_feedback(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_error inner_feedback(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_feedback_type arg)
  {
    msg_.inner_feedback = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_error(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_set
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_set(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_feedback inner_set(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_set_type arg)
  {
    msg_.inner_set = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_feedback(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_max_iout
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_max_iout(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_set outer_max_iout(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_max_iout_type arg)
  {
    msg_.outer_max_iout = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_set(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_max_out
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_max_out(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_max_iout outer_max_out(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_max_out_type arg)
  {
    msg_.outer_max_out = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_max_iout(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_max_iout
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_max_iout(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_max_out inner_max_iout(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_max_iout_type arg)
  {
    msg_.inner_max_iout = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_max_out(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_max_out
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_max_out(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_max_iout inner_max_out(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_max_out_type arg)
  {
    msg_.inner_max_out = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_max_iout(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_d_filter_coefficient
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_d_filter_coefficient(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_max_out outer_d_filter_coefficient(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_d_filter_coefficient_type arg)
  {
    msg_.outer_d_filter_coefficient = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_max_out(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_p_filter_coefficient
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_p_filter_coefficient(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_d_filter_coefficient outer_p_filter_coefficient(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_p_filter_coefficient_type arg)
  {
    msg_.outer_p_filter_coefficient = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_d_filter_coefficient(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_kd
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_kd(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_p_filter_coefficient outer_kd(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_kd_type arg)
  {
    msg_.outer_kd = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_p_filter_coefficient(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_ki
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_ki(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_kd outer_ki(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_ki_type arg)
  {
    msg_.outer_ki = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_kd(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_outer_kp
{
public:
  explicit Init_DualLoopPIDWithFilter_outer_kp(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_ki outer_kp(::hero_msgs::msg::DualLoopPIDWithFilter::_outer_kp_type arg)
  {
    msg_.outer_kp = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_ki(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_d_filter_coefficient
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_d_filter_coefficient(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_outer_kp inner_d_filter_coefficient(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_d_filter_coefficient_type arg)
  {
    msg_.inner_d_filter_coefficient = std::move(arg);
    return Init_DualLoopPIDWithFilter_outer_kp(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_p_filter_coefficient
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_p_filter_coefficient(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_d_filter_coefficient inner_p_filter_coefficient(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_p_filter_coefficient_type arg)
  {
    msg_.inner_p_filter_coefficient = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_d_filter_coefficient(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_kd
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_kd(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_p_filter_coefficient inner_kd(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_kd_type arg)
  {
    msg_.inner_kd = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_p_filter_coefficient(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_ki
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_ki(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_kd inner_ki(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_ki_type arg)
  {
    msg_.inner_ki = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_kd(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_inner_kp
{
public:
  explicit Init_DualLoopPIDWithFilter_inner_kp(::hero_msgs::msg::DualLoopPIDWithFilter & msg)
  : msg_(msg)
  {}
  Init_DualLoopPIDWithFilter_inner_ki inner_kp(::hero_msgs::msg::DualLoopPIDWithFilter::_inner_kp_type arg)
  {
    msg_.inner_kp = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_ki(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

class Init_DualLoopPIDWithFilter_header
{
public:
  Init_DualLoopPIDWithFilter_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DualLoopPIDWithFilter_inner_kp header(::hero_msgs::msg::DualLoopPIDWithFilter::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DualLoopPIDWithFilter_inner_kp(msg_);
  }

private:
  ::hero_msgs::msg::DualLoopPIDWithFilter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::hero_msgs::msg::DualLoopPIDWithFilter>()
{
  return hero_msgs::msg::builder::Init_DualLoopPIDWithFilter_header();
}

}  // namespace hero_msgs

#endif  // HERO_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__BUILDER_HPP_
