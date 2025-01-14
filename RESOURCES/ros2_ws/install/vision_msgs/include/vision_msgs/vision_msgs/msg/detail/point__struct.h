// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_msgs:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__POINT__STRUCT_H_
#define VISION_MSGS__MSG__DETAIL__POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Point in the package vision_msgs.
typedef struct vision_msgs__msg__Point
{
  float x;
  float y;
} vision_msgs__msg__Point;

// Struct for a sequence of vision_msgs__msg__Point.
typedef struct vision_msgs__msg__Point__Sequence
{
  vision_msgs__msg__Point * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_msgs__msg__Point__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_MSGS__MSG__DETAIL__POINT__STRUCT_H_
