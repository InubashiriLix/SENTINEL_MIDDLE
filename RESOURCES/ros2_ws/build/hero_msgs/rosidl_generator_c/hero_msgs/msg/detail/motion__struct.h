// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hero_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

#ifndef HERO_MSGS__MSG__DETAIL__MOTION__STRUCT_H_
#define HERO_MSGS__MSG__DETAIL__MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Motion in the package hero_msgs.
typedef struct hero_msgs__msg__Motion
{
  double linear_x;
  double linear_y;
  double angular_z;
} hero_msgs__msg__Motion;

// Struct for a sequence of hero_msgs__msg__Motion.
typedef struct hero_msgs__msg__Motion__Sequence
{
  hero_msgs__msg__Motion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hero_msgs__msg__Motion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HERO_MSGS__MSG__DETAIL__MOTION__STRUCT_H_
