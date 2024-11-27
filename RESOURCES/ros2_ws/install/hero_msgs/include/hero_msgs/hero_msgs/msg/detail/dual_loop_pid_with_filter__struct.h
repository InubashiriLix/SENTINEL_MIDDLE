// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hero_msgs:msg/DualLoopPIDWithFilter.idl
// generated code does not contain a copyright notice

#ifndef HERO_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__STRUCT_H_
#define HERO_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/DualLoopPIDWithFilter in the package hero_msgs.
/**
  * This message contains dual-loop PID controller data
 */
typedef struct hero_msgs__msg__DualLoopPIDWithFilter
{
  std_msgs__msg__Header header;
  /// parameters
  double inner_kp;
  double inner_ki;
  double inner_kd;
  double inner_p_filter_coefficient;
  double inner_d_filter_coefficient;
  double outer_kp;
  double outer_ki;
  double outer_kd;
  double outer_p_filter_coefficient;
  double outer_d_filter_coefficient;
  /// limitations
  double inner_max_out;
  double inner_max_iout;
  double outer_max_out;
  double outer_max_iout;
  /// status
  double inner_set;
  double inner_feedback;
  double inner_error;
  double inner_error_sum;
  double inner_last_error;
  double outer_set;
  double outer_feedback;
  double outer_error;
  double outer_error_sum;
  double outer_last_error;
  /// output
  double inner_pout;
  double inner_iout;
  double inner_dout;
  double inner_out;
  double outer_pout;
  double outer_iout;
  double outer_dout;
  double outer_out;
} hero_msgs__msg__DualLoopPIDWithFilter;

// Struct for a sequence of hero_msgs__msg__DualLoopPIDWithFilter.
typedef struct hero_msgs__msg__DualLoopPIDWithFilter__Sequence
{
  hero_msgs__msg__DualLoopPIDWithFilter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hero_msgs__msg__DualLoopPIDWithFilter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HERO_MSGS__MSG__DETAIL__DUAL_LOOP_PID_WITH_FILTER__STRUCT_H_
