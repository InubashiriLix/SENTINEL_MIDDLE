// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from hero_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

#ifndef HERO_MSGS__MSG__DETAIL__MOTION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define HERO_MSGS__MSG__DETAIL__MOTION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "hero_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "hero_msgs/msg/detail/motion__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace hero_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hero_msgs
cdr_serialize(
  const hero_msgs::msg::Motion & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hero_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hero_msgs::msg::Motion & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hero_msgs
get_serialized_size(
  const hero_msgs::msg::Motion & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hero_msgs
max_serialized_size_Motion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hero_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hero_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hero_msgs, msg, Motion)();

#ifdef __cplusplus
}
#endif

#endif  // HERO_MSGS__MSG__DETAIL__MOTION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
