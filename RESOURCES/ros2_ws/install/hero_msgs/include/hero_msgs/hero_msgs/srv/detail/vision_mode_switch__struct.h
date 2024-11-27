// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hero_msgs:srv/VisionModeSwitch.idl
// generated code does not contain a copyright notice

#ifndef HERO_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__STRUCT_H_
#define HERO_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_ARMOR'.
enum
{
  hero_msgs__srv__VisionModeSwitch_Request__MODE_ARMOR = 1
};

/// Constant 'MODE_SMALL'.
enum
{
  hero_msgs__srv__VisionModeSwitch_Request__MODE_SMALL = 2
};

/// Constant 'MODE_BIG'.
enum
{
  hero_msgs__srv__VisionModeSwitch_Request__MODE_BIG = 3
};

/// Constant 'MODE_TAG'.
enum
{
  hero_msgs__srv__VisionModeSwitch_Request__MODE_TAG = 4
};

/// Struct defined in srv/VisionModeSwitch in the package hero_msgs.
typedef struct hero_msgs__srv__VisionModeSwitch_Request
{
  uint8_t mode;
} hero_msgs__srv__VisionModeSwitch_Request;

// Struct for a sequence of hero_msgs__srv__VisionModeSwitch_Request.
typedef struct hero_msgs__srv__VisionModeSwitch_Request__Sequence
{
  hero_msgs__srv__VisionModeSwitch_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hero_msgs__srv__VisionModeSwitch_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/VisionModeSwitch in the package hero_msgs.
typedef struct hero_msgs__srv__VisionModeSwitch_Response
{
  bool succ;
} hero_msgs__srv__VisionModeSwitch_Response;

// Struct for a sequence of hero_msgs__srv__VisionModeSwitch_Response.
typedef struct hero_msgs__srv__VisionModeSwitch_Response__Sequence
{
  hero_msgs__srv__VisionModeSwitch_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hero_msgs__srv__VisionModeSwitch_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HERO_MSGS__SRV__DETAIL__VISION_MODE_SWITCH__STRUCT_H_
