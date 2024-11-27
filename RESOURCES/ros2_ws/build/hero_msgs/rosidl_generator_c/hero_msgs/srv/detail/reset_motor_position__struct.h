// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hero_msgs:srv/ResetMotorPosition.idl
// generated code does not contain a copyright notice

#ifndef HERO_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__STRUCT_H_
#define HERO_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ResetMotorPosition in the package hero_msgs.
typedef struct hero_msgs__srv__ResetMotorPosition_Request
{
  rosidl_runtime_c__String motor_name;
} hero_msgs__srv__ResetMotorPosition_Request;

// Struct for a sequence of hero_msgs__srv__ResetMotorPosition_Request.
typedef struct hero_msgs__srv__ResetMotorPosition_Request__Sequence
{
  hero_msgs__srv__ResetMotorPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hero_msgs__srv__ResetMotorPosition_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ResetMotorPosition in the package hero_msgs.
typedef struct hero_msgs__srv__ResetMotorPosition_Response
{
  bool succ;
} hero_msgs__srv__ResetMotorPosition_Response;

// Struct for a sequence of hero_msgs__srv__ResetMotorPosition_Response.
typedef struct hero_msgs__srv__ResetMotorPosition_Response__Sequence
{
  hero_msgs__srv__ResetMotorPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hero_msgs__srv__ResetMotorPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HERO_MSGS__SRV__DETAIL__RESET_MOTOR_POSITION__STRUCT_H_
