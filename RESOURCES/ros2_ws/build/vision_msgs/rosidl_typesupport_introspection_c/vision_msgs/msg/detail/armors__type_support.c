// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vision_msgs:msg/Armors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vision_msgs/msg/detail/armors__rosidl_typesupport_introspection_c.h"
#include "vision_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vision_msgs/msg/detail/armors__functions.h"
#include "vision_msgs/msg/detail/armors__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `armors`
#include "vision_msgs/msg/armor.h"
// Member `armors`
#include "vision_msgs/msg/detail/armor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vision_msgs__msg__Armors__init(message_memory);
}

void vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_fini_function(void * message_memory)
{
  vision_msgs__msg__Armors__fini(message_memory);
}

size_t vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__size_function__Armors__armors(
  const void * untyped_member)
{
  const vision_msgs__msg__Armor__Sequence * member =
    (const vision_msgs__msg__Armor__Sequence *)(untyped_member);
  return member->size;
}

const void * vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__get_const_function__Armors__armors(
  const void * untyped_member, size_t index)
{
  const vision_msgs__msg__Armor__Sequence * member =
    (const vision_msgs__msg__Armor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__get_function__Armors__armors(
  void * untyped_member, size_t index)
{
  vision_msgs__msg__Armor__Sequence * member =
    (vision_msgs__msg__Armor__Sequence *)(untyped_member);
  return &member->data[index];
}

void vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__fetch_function__Armors__armors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const vision_msgs__msg__Armor * item =
    ((const vision_msgs__msg__Armor *)
    vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__get_const_function__Armors__armors(untyped_member, index));
  vision_msgs__msg__Armor * value =
    (vision_msgs__msg__Armor *)(untyped_value);
  *value = *item;
}

void vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__assign_function__Armors__armors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  vision_msgs__msg__Armor * item =
    ((vision_msgs__msg__Armor *)
    vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__get_function__Armors__armors(untyped_member, index));
  const vision_msgs__msg__Armor * value =
    (const vision_msgs__msg__Armor *)(untyped_value);
  *item = *value;
}

bool vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__resize_function__Armors__armors(
  void * untyped_member, size_t size)
{
  vision_msgs__msg__Armor__Sequence * member =
    (vision_msgs__msg__Armor__Sequence *)(untyped_member);
  vision_msgs__msg__Armor__Sequence__fini(member);
  return vision_msgs__msg__Armor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_msgs__msg__Armors, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "armor_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_msgs__msg__Armors, armor_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "armors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_msgs__msg__Armors, armors),  // bytes offset in struct
    NULL,  // default value
    vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__size_function__Armors__armors,  // size() function pointer
    vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__get_const_function__Armors__armors,  // get_const(index) function pointer
    vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__get_function__Armors__armors,  // get(index) function pointer
    vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__fetch_function__Armors__armors,  // fetch(index, &value) function pointer
    vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__assign_function__Armors__armors,  // assign(index, value) function pointer
    vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__resize_function__Armors__armors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_members = {
  "vision_msgs__msg",  // message namespace
  "Armors",  // message name
  3,  // number of fields
  sizeof(vision_msgs__msg__Armors),
  vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_member_array,  // message members
  vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_init_function,  // function to initialize message memory (memory has to be allocated)
  vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_type_support_handle = {
  0,
  &vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vision_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_msgs, msg, Armors)() {
  vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_msgs, msg, Armor)();
  if (!vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_type_support_handle.typesupport_identifier) {
    vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vision_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
