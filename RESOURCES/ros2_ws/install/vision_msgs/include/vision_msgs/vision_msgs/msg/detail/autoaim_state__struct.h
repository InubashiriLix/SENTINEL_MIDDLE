// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_msgs:msg/AutoaimState.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__AUTOAIM_STATE__STRUCT_H_
#define VISION_MSGS__MSG__DETAIL__AUTOAIM_STATE__STRUCT_H_

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
  vision_msgs__msg__AutoaimState__TARGET_ID0_NONE = 0
};

/// Constant 'TARGET_ID1_HERO'.
enum
{
  vision_msgs__msg__AutoaimState__TARGET_ID1_HERO = 1
};

/// Constant 'TARGET_ID2_ENGINEEER'.
enum
{
  vision_msgs__msg__AutoaimState__TARGET_ID2_ENGINEEER = 2
};

/// Constant 'TARGET_ID3_INFANTRY'.
enum
{
  vision_msgs__msg__AutoaimState__TARGET_ID3_INFANTRY = 3
};

/// Constant 'TARGET_ID4_INFANTRY'.
enum
{
  vision_msgs__msg__AutoaimState__TARGET_ID4_INFANTRY = 4
};

/// Constant 'TARGET_ID5_INFANTRY'.
enum
{
  vision_msgs__msg__AutoaimState__TARGET_ID5_INFANTRY = 5
};

/// Constant 'TARGET_ID6_OUTPOST'.
enum
{
  vision_msgs__msg__AutoaimState__TARGET_ID6_OUTPOST = 6
};

/// Constant 'TARGET_ID7_SENTRY'.
enum
{
  vision_msgs__msg__AutoaimState__TARGET_ID7_SENTRY = 7
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/AutoaimState in the package vision_msgs.
/**
  * This message contains auto aiming state
 */
typedef struct vision_msgs__msg__AutoaimState
{
  std_msgs__msg__Header header;
  uint8_t autoaim_state;
  /// auto aiming priority target
  uint8_t target_id;
} vision_msgs__msg__AutoaimState;

// Struct for a sequence of vision_msgs__msg__AutoaimState.
typedef struct vision_msgs__msg__AutoaimState__Sequence
{
  vision_msgs__msg__AutoaimState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_msgs__msg__AutoaimState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_MSGS__MSG__DETAIL__AUTOAIM_STATE__STRUCT_H_
