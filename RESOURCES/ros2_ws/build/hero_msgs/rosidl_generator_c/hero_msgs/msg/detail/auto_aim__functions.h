// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hero_msgs:msg/AutoAIM.idl
// generated code does not contain a copyright notice

#ifndef HERO_MSGS__MSG__DETAIL__AUTO_AIM__FUNCTIONS_H_
#define HERO_MSGS__MSG__DETAIL__AUTO_AIM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hero_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hero_msgs/msg/detail/auto_aim__struct.h"

/// Initialize msg/AutoAIM message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hero_msgs__msg__AutoAIM
 * )) before or use
 * hero_msgs__msg__AutoAIM__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hero_msgs
bool
hero_msgs__msg__AutoAIM__init(hero_msgs__msg__AutoAIM * msg);

/// Finalize msg/AutoAIM message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hero_msgs
void
hero_msgs__msg__AutoAIM__fini(hero_msgs__msg__AutoAIM * msg);

/// Create msg/AutoAIM message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hero_msgs__msg__AutoAIM__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hero_msgs
hero_msgs__msg__AutoAIM *
hero_msgs__msg__AutoAIM__create();

/// Destroy msg/AutoAIM message.
/**
 * It calls
 * hero_msgs__msg__AutoAIM__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hero_msgs
void
hero_msgs__msg__AutoAIM__destroy(hero_msgs__msg__AutoAIM * msg);

/// Check for msg/AutoAIM message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hero_msgs
bool
hero_msgs__msg__AutoAIM__are_equal(const hero_msgs__msg__AutoAIM * lhs, const hero_msgs__msg__AutoAIM * rhs);

/// Copy a msg/AutoAIM message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hero_msgs
bool
hero_msgs__msg__AutoAIM__copy(
  const hero_msgs__msg__AutoAIM * input,
  hero_msgs__msg__AutoAIM * output);

/// Initialize array of msg/AutoAIM messages.
/**
 * It allocates the memory for the number of elements and calls
 * hero_msgs__msg__AutoAIM__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hero_msgs
bool
hero_msgs__msg__AutoAIM__Sequence__init(hero_msgs__msg__AutoAIM__Sequence * array, size_t size);

/// Finalize array of msg/AutoAIM messages.
/**
 * It calls
 * hero_msgs__msg__AutoAIM__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hero_msgs
void
hero_msgs__msg__AutoAIM__Sequence__fini(hero_msgs__msg__AutoAIM__Sequence * array);

/// Create array of msg/AutoAIM messages.
/**
 * It allocates the memory for the array and calls
 * hero_msgs__msg__AutoAIM__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hero_msgs
hero_msgs__msg__AutoAIM__Sequence *
hero_msgs__msg__AutoAIM__Sequence__create(size_t size);

/// Destroy array of msg/AutoAIM messages.
/**
 * It calls
 * hero_msgs__msg__AutoAIM__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hero_msgs
void
hero_msgs__msg__AutoAIM__Sequence__destroy(hero_msgs__msg__AutoAIM__Sequence * array);

/// Check for msg/AutoAIM message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hero_msgs
bool
hero_msgs__msg__AutoAIM__Sequence__are_equal(const hero_msgs__msg__AutoAIM__Sequence * lhs, const hero_msgs__msg__AutoAIM__Sequence * rhs);

/// Copy an array of msg/AutoAIM messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hero_msgs
bool
hero_msgs__msg__AutoAIM__Sequence__copy(
  const hero_msgs__msg__AutoAIM__Sequence * input,
  hero_msgs__msg__AutoAIM__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HERO_MSGS__MSG__DETAIL__AUTO_AIM__FUNCTIONS_H_
