// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_msgs:msg/Armor.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__ARMOR__STRUCT_H_
#define VISION_MSGS__MSG__DETAIL__ARMOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BLUE'.
enum
{
  vision_msgs__msg__Armor__BLUE = 0
};

/// Constant 'RED'.
enum
{
  vision_msgs__msg__Armor__RED = 1
};

/// Constant 'ARMOR'.
enum
{
  vision_msgs__msg__Armor__ARMOR = 0
};

/// Constant 'ENERGY'.
enum
{
  vision_msgs__msg__Armor__ENERGY = 1
};

/// Constant 'ENEMY'.
enum
{
  vision_msgs__msg__Armor__ENEMY = 2
};

// Include directives for member types
// Member 'points'
#include "vision_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Armor in the package vision_msgs.
typedef struct vision_msgs__msg__Armor
{
  uint8_t color;
  uint8_t id;
  float dis;
  uint8_t armor_type;
  vision_msgs__msg__Point__Sequence points;
} vision_msgs__msg__Armor;

// Struct for a sequence of vision_msgs__msg__Armor.
typedef struct vision_msgs__msg__Armor__Sequence
{
  vision_msgs__msg__Armor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_msgs__msg__Armor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_MSGS__MSG__DETAIL__ARMOR__STRUCT_H_
