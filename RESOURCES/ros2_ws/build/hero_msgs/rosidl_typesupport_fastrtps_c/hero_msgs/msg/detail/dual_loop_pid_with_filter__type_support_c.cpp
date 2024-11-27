// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hero_msgs:msg/DualLoopPIDWithFilter.idl
// generated code does not contain a copyright notice
#include "hero_msgs/msg/detail/dual_loop_pid_with_filter__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hero_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hero_msgs/msg/detail/dual_loop_pid_with_filter__struct.h"
#include "hero_msgs/msg/detail/dual_loop_pid_with_filter__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hero_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hero_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_hero_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _DualLoopPIDWithFilter__ros_msg_type = hero_msgs__msg__DualLoopPIDWithFilter;

static bool _DualLoopPIDWithFilter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DualLoopPIDWithFilter__ros_msg_type * ros_message = static_cast<const _DualLoopPIDWithFilter__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: inner_kp
  {
    cdr << ros_message->inner_kp;
  }

  // Field name: inner_ki
  {
    cdr << ros_message->inner_ki;
  }

  // Field name: inner_kd
  {
    cdr << ros_message->inner_kd;
  }

  // Field name: inner_p_filter_coefficient
  {
    cdr << ros_message->inner_p_filter_coefficient;
  }

  // Field name: inner_d_filter_coefficient
  {
    cdr << ros_message->inner_d_filter_coefficient;
  }

  // Field name: outer_kp
  {
    cdr << ros_message->outer_kp;
  }

  // Field name: outer_ki
  {
    cdr << ros_message->outer_ki;
  }

  // Field name: outer_kd
  {
    cdr << ros_message->outer_kd;
  }

  // Field name: outer_p_filter_coefficient
  {
    cdr << ros_message->outer_p_filter_coefficient;
  }

  // Field name: outer_d_filter_coefficient
  {
    cdr << ros_message->outer_d_filter_coefficient;
  }

  // Field name: inner_max_out
  {
    cdr << ros_message->inner_max_out;
  }

  // Field name: inner_max_iout
  {
    cdr << ros_message->inner_max_iout;
  }

  // Field name: outer_max_out
  {
    cdr << ros_message->outer_max_out;
  }

  // Field name: outer_max_iout
  {
    cdr << ros_message->outer_max_iout;
  }

  // Field name: inner_set
  {
    cdr << ros_message->inner_set;
  }

  // Field name: inner_feedback
  {
    cdr << ros_message->inner_feedback;
  }

  // Field name: inner_error
  {
    cdr << ros_message->inner_error;
  }

  // Field name: inner_error_sum
  {
    cdr << ros_message->inner_error_sum;
  }

  // Field name: inner_last_error
  {
    cdr << ros_message->inner_last_error;
  }

  // Field name: outer_set
  {
    cdr << ros_message->outer_set;
  }

  // Field name: outer_feedback
  {
    cdr << ros_message->outer_feedback;
  }

  // Field name: outer_error
  {
    cdr << ros_message->outer_error;
  }

  // Field name: outer_error_sum
  {
    cdr << ros_message->outer_error_sum;
  }

  // Field name: outer_last_error
  {
    cdr << ros_message->outer_last_error;
  }

  // Field name: inner_pout
  {
    cdr << ros_message->inner_pout;
  }

  // Field name: inner_iout
  {
    cdr << ros_message->inner_iout;
  }

  // Field name: inner_dout
  {
    cdr << ros_message->inner_dout;
  }

  // Field name: inner_out
  {
    cdr << ros_message->inner_out;
  }

  // Field name: outer_pout
  {
    cdr << ros_message->outer_pout;
  }

  // Field name: outer_iout
  {
    cdr << ros_message->outer_iout;
  }

  // Field name: outer_dout
  {
    cdr << ros_message->outer_dout;
  }

  // Field name: outer_out
  {
    cdr << ros_message->outer_out;
  }

  return true;
}

static bool _DualLoopPIDWithFilter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DualLoopPIDWithFilter__ros_msg_type * ros_message = static_cast<_DualLoopPIDWithFilter__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: inner_kp
  {
    cdr >> ros_message->inner_kp;
  }

  // Field name: inner_ki
  {
    cdr >> ros_message->inner_ki;
  }

  // Field name: inner_kd
  {
    cdr >> ros_message->inner_kd;
  }

  // Field name: inner_p_filter_coefficient
  {
    cdr >> ros_message->inner_p_filter_coefficient;
  }

  // Field name: inner_d_filter_coefficient
  {
    cdr >> ros_message->inner_d_filter_coefficient;
  }

  // Field name: outer_kp
  {
    cdr >> ros_message->outer_kp;
  }

  // Field name: outer_ki
  {
    cdr >> ros_message->outer_ki;
  }

  // Field name: outer_kd
  {
    cdr >> ros_message->outer_kd;
  }

  // Field name: outer_p_filter_coefficient
  {
    cdr >> ros_message->outer_p_filter_coefficient;
  }

  // Field name: outer_d_filter_coefficient
  {
    cdr >> ros_message->outer_d_filter_coefficient;
  }

  // Field name: inner_max_out
  {
    cdr >> ros_message->inner_max_out;
  }

  // Field name: inner_max_iout
  {
    cdr >> ros_message->inner_max_iout;
  }

  // Field name: outer_max_out
  {
    cdr >> ros_message->outer_max_out;
  }

  // Field name: outer_max_iout
  {
    cdr >> ros_message->outer_max_iout;
  }

  // Field name: inner_set
  {
    cdr >> ros_message->inner_set;
  }

  // Field name: inner_feedback
  {
    cdr >> ros_message->inner_feedback;
  }

  // Field name: inner_error
  {
    cdr >> ros_message->inner_error;
  }

  // Field name: inner_error_sum
  {
    cdr >> ros_message->inner_error_sum;
  }

  // Field name: inner_last_error
  {
    cdr >> ros_message->inner_last_error;
  }

  // Field name: outer_set
  {
    cdr >> ros_message->outer_set;
  }

  // Field name: outer_feedback
  {
    cdr >> ros_message->outer_feedback;
  }

  // Field name: outer_error
  {
    cdr >> ros_message->outer_error;
  }

  // Field name: outer_error_sum
  {
    cdr >> ros_message->outer_error_sum;
  }

  // Field name: outer_last_error
  {
    cdr >> ros_message->outer_last_error;
  }

  // Field name: inner_pout
  {
    cdr >> ros_message->inner_pout;
  }

  // Field name: inner_iout
  {
    cdr >> ros_message->inner_iout;
  }

  // Field name: inner_dout
  {
    cdr >> ros_message->inner_dout;
  }

  // Field name: inner_out
  {
    cdr >> ros_message->inner_out;
  }

  // Field name: outer_pout
  {
    cdr >> ros_message->outer_pout;
  }

  // Field name: outer_iout
  {
    cdr >> ros_message->outer_iout;
  }

  // Field name: outer_dout
  {
    cdr >> ros_message->outer_dout;
  }

  // Field name: outer_out
  {
    cdr >> ros_message->outer_out;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hero_msgs
size_t get_serialized_size_hero_msgs__msg__DualLoopPIDWithFilter(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DualLoopPIDWithFilter__ros_msg_type * ros_message = static_cast<const _DualLoopPIDWithFilter__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name inner_kp
  {
    size_t item_size = sizeof(ros_message->inner_kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_ki
  {
    size_t item_size = sizeof(ros_message->inner_ki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_kd
  {
    size_t item_size = sizeof(ros_message->inner_kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_p_filter_coefficient
  {
    size_t item_size = sizeof(ros_message->inner_p_filter_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_d_filter_coefficient
  {
    size_t item_size = sizeof(ros_message->inner_d_filter_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_kp
  {
    size_t item_size = sizeof(ros_message->outer_kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_ki
  {
    size_t item_size = sizeof(ros_message->outer_ki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_kd
  {
    size_t item_size = sizeof(ros_message->outer_kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_p_filter_coefficient
  {
    size_t item_size = sizeof(ros_message->outer_p_filter_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_d_filter_coefficient
  {
    size_t item_size = sizeof(ros_message->outer_d_filter_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_max_out
  {
    size_t item_size = sizeof(ros_message->inner_max_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_max_iout
  {
    size_t item_size = sizeof(ros_message->inner_max_iout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_max_out
  {
    size_t item_size = sizeof(ros_message->outer_max_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_max_iout
  {
    size_t item_size = sizeof(ros_message->outer_max_iout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_set
  {
    size_t item_size = sizeof(ros_message->inner_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_feedback
  {
    size_t item_size = sizeof(ros_message->inner_feedback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_error
  {
    size_t item_size = sizeof(ros_message->inner_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_error_sum
  {
    size_t item_size = sizeof(ros_message->inner_error_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_last_error
  {
    size_t item_size = sizeof(ros_message->inner_last_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_set
  {
    size_t item_size = sizeof(ros_message->outer_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_feedback
  {
    size_t item_size = sizeof(ros_message->outer_feedback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_error
  {
    size_t item_size = sizeof(ros_message->outer_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_error_sum
  {
    size_t item_size = sizeof(ros_message->outer_error_sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_last_error
  {
    size_t item_size = sizeof(ros_message->outer_last_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_pout
  {
    size_t item_size = sizeof(ros_message->inner_pout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_iout
  {
    size_t item_size = sizeof(ros_message->inner_iout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_dout
  {
    size_t item_size = sizeof(ros_message->inner_dout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inner_out
  {
    size_t item_size = sizeof(ros_message->inner_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_pout
  {
    size_t item_size = sizeof(ros_message->outer_pout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_iout
  {
    size_t item_size = sizeof(ros_message->outer_iout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_dout
  {
    size_t item_size = sizeof(ros_message->outer_dout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name outer_out
  {
    size_t item_size = sizeof(ros_message->outer_out);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DualLoopPIDWithFilter__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hero_msgs__msg__DualLoopPIDWithFilter(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hero_msgs
size_t max_serialized_size_hero_msgs__msg__DualLoopPIDWithFilter(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: inner_kp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_ki
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_kd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_p_filter_coefficient
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_d_filter_coefficient
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_kp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_ki
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_kd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_p_filter_coefficient
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_d_filter_coefficient
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_max_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_max_iout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_max_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_max_iout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_feedback
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_error_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_last_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_feedback
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_error_sum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_last_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_pout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_iout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_dout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: inner_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_pout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_iout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_dout
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: outer_out
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hero_msgs__msg__DualLoopPIDWithFilter;
    is_plain =
      (
      offsetof(DataType, outer_out) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DualLoopPIDWithFilter__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hero_msgs__msg__DualLoopPIDWithFilter(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DualLoopPIDWithFilter = {
  "hero_msgs::msg",
  "DualLoopPIDWithFilter",
  _DualLoopPIDWithFilter__cdr_serialize,
  _DualLoopPIDWithFilter__cdr_deserialize,
  _DualLoopPIDWithFilter__get_serialized_size,
  _DualLoopPIDWithFilter__max_serialized_size
};

static rosidl_message_type_support_t _DualLoopPIDWithFilter__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DualLoopPIDWithFilter,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hero_msgs, msg, DualLoopPIDWithFilter)() {
  return &_DualLoopPIDWithFilter__type_support;
}

#if defined(__cplusplus)
}
#endif
