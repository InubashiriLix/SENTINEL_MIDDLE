// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hero_msgs:msg/AutoAIM.idl
// generated code does not contain a copyright notice

#ifndef HERO_MSGS__MSG__DETAIL__AUTO_AIM__STRUCT_H_
#define HERO_MSGS__MSG__DETAIL__AUTO_AIM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TARGET_ID0_NONE'.
enum
{
  hero_msgs__msg__AutoAIM__TARGET_ID0_NONE = 0
};

/// Constant 'TARGET_ID1_HERO'.
enum
{
  hero_msgs__msg__AutoAIM__TARGET_ID1_HERO = 1
};

/// Constant 'TARGET_ID2_ENGINEER'.
enum
{
  hero_msgs__msg__AutoAIM__TARGET_ID2_ENGINEER = 2
};

/// Constant 'TARGET_ID3_INFANTRY'.
enum
{
  hero_msgs__msg__AutoAIM__TARGET_ID3_INFANTRY = 3
};

/// Constant 'TARGET_ID4_INFANTRY'.
enum
{
  hero_msgs__msg__AutoAIM__TARGET_ID4_INFANTRY = 4
};

/// Constant 'TARGET_ID5_INFANTRY'.
enum
{
  hero_msgs__msg__AutoAIM__TARGET_ID5_INFANTRY = 5
};

/// Constant 'TARGET_ID6_OUTPOST'.
enum
{
  hero_msgs__msg__AutoAIM__TARGET_ID6_OUTPOST = 6
};

/// Constant 'TARGET_ID7_SENTRY'.
enum
{
  hero_msgs__msg__AutoAIM__TARGET_ID7_SENTRY = 7
};

/// Constant 'VISION_MODE_ARMOR'.
enum
{
  hero_msgs__msg__AutoAIM__VISION_MODE_ARMOR = 1
};

/// Constant 'VISION_MODE_SMALL'.
enum
{
  hero_msgs__msg__AutoAIM__VISION_MODE_SMALL = 2
};

/// Constant 'VISION_MODE_BIG'.
enum
{
  hero_msgs__msg__AutoAIM__VISION_MODE_BIG = 3
};

/// Constant 'VISION_MODE_TAG'.
enum
{
  hero_msgs__msg__AutoAIM__VISION_MODE_TAG = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/AutoAIM in the package hero_msgs.
/**
  * This message contains auto aiming data
 */
typedef struct hero_msgs__msg__AutoAIM
{
  std_msgs__msg__Header header;
  float pitch;
  float yaw;
  /// auto aiming target, see enum below
  uint8_t target_id;
  /// auto aiming target distance
  float target_distance;
  /// auto aiming mode, see enum below
  uint8_t vision_mode;
} hero_msgs__msg__AutoAIM;

// Struct for a sequence of hero_msgs__msg__AutoAIM.
typedef struct hero_msgs__msg__AutoAIM__Sequence
{
  hero_msgs__msg__AutoAIM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hero_msgs__msg__AutoAIM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HERO_MSGS__MSG__DETAIL__AUTO_AIM__STRUCT_H_
