// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_msgs:msg/Armors.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__ARMORS__STRUCT_H_
#define VISION_MSGS__MSG__DETAIL__ARMORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ARMOR'.
enum
{
  vision_msgs__msg__Armors__ARMOR = 0
};

/// Constant 'ENERGY'.
enum
{
  vision_msgs__msg__Armors__ENERGY = 1
};

/// Constant 'ENEMY'.
enum
{
  vision_msgs__msg__Armors__ENEMY = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'armors'
#include "vision_msgs/msg/detail/armor__struct.h"

/// Struct defined in msg/Armors in the package vision_msgs.
typedef struct vision_msgs__msg__Armors
{
  std_msgs__msg__Header header;
  uint8_t armor_type;
  vision_msgs__msg__Armor__Sequence armors;
} vision_msgs__msg__Armors;

// Struct for a sequence of vision_msgs__msg__Armors.
typedef struct vision_msgs__msg__Armors__Sequence
{
  vision_msgs__msg__Armors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_msgs__msg__Armors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_MSGS__MSG__DETAIL__ARMORS__STRUCT_H_
