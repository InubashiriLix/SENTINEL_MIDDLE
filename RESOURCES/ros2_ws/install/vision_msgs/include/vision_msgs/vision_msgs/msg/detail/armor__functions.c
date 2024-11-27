// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vision_msgs:msg/Armor.idl
// generated code does not contain a copyright notice
#include "vision_msgs/msg/detail/armor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `points`
#include "vision_msgs/msg/detail/point__functions.h"

bool
vision_msgs__msg__Armor__init(vision_msgs__msg__Armor * msg)
{
  if (!msg) {
    return false;
  }
  // color
  // id
  // dis
  // armor_type
  // points
  if (!vision_msgs__msg__Point__Sequence__init(&msg->points, 0)) {
    vision_msgs__msg__Armor__fini(msg);
    return false;
  }
  return true;
}

void
vision_msgs__msg__Armor__fini(vision_msgs__msg__Armor * msg)
{
  if (!msg) {
    return;
  }
  // color
  // id
  // dis
  // armor_type
  // points
  vision_msgs__msg__Point__Sequence__fini(&msg->points);
}

bool
vision_msgs__msg__Armor__are_equal(const vision_msgs__msg__Armor * lhs, const vision_msgs__msg__Armor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // dis
  if (lhs->dis != rhs->dis) {
    return false;
  }
  // armor_type
  if (lhs->armor_type != rhs->armor_type) {
    return false;
  }
  // points
  if (!vision_msgs__msg__Point__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  return true;
}

bool
vision_msgs__msg__Armor__copy(
  const vision_msgs__msg__Armor * input,
  vision_msgs__msg__Armor * output)
{
  if (!input || !output) {
    return false;
  }
  // color
  output->color = input->color;
  // id
  output->id = input->id;
  // dis
  output->dis = input->dis;
  // armor_type
  output->armor_type = input->armor_type;
  // points
  if (!vision_msgs__msg__Point__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  return true;
}

vision_msgs__msg__Armor *
vision_msgs__msg__Armor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs__msg__Armor * msg = (vision_msgs__msg__Armor *)allocator.allocate(sizeof(vision_msgs__msg__Armor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vision_msgs__msg__Armor));
  bool success = vision_msgs__msg__Armor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vision_msgs__msg__Armor__destroy(vision_msgs__msg__Armor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vision_msgs__msg__Armor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vision_msgs__msg__Armor__Sequence__init(vision_msgs__msg__Armor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs__msg__Armor * data = NULL;

  if (size) {
    data = (vision_msgs__msg__Armor *)allocator.zero_allocate(size, sizeof(vision_msgs__msg__Armor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vision_msgs__msg__Armor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vision_msgs__msg__Armor__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vision_msgs__msg__Armor__Sequence__fini(vision_msgs__msg__Armor__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vision_msgs__msg__Armor__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vision_msgs__msg__Armor__Sequence *
vision_msgs__msg__Armor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs__msg__Armor__Sequence * array = (vision_msgs__msg__Armor__Sequence *)allocator.allocate(sizeof(vision_msgs__msg__Armor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vision_msgs__msg__Armor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vision_msgs__msg__Armor__Sequence__destroy(vision_msgs__msg__Armor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vision_msgs__msg__Armor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vision_msgs__msg__Armor__Sequence__are_equal(const vision_msgs__msg__Armor__Sequence * lhs, const vision_msgs__msg__Armor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vision_msgs__msg__Armor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vision_msgs__msg__Armor__Sequence__copy(
  const vision_msgs__msg__Armor__Sequence * input,
  vision_msgs__msg__Armor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vision_msgs__msg__Armor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vision_msgs__msg__Armor * data =
      (vision_msgs__msg__Armor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vision_msgs__msg__Armor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vision_msgs__msg__Armor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vision_msgs__msg__Armor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
