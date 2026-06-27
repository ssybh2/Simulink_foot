// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_msgs:msg/ReadDmMotor.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__FUNCTIONS_H_
#define CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "custom_msgs/msg/detail/read_dm_motor__struct.h"

/// Initialize msg/ReadDmMotor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msgs__msg__ReadDmMotor
 * )) before or use
 * custom_msgs__msg__ReadDmMotor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ReadDmMotor__init(custom_msgs__msg__ReadDmMotor * msg);

/// Finalize msg/ReadDmMotor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__ReadDmMotor__fini(custom_msgs__msg__ReadDmMotor * msg);

/// Create msg/ReadDmMotor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msgs__msg__ReadDmMotor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
custom_msgs__msg__ReadDmMotor *
custom_msgs__msg__ReadDmMotor__create();

/// Destroy msg/ReadDmMotor message.
/**
 * It calls
 * custom_msgs__msg__ReadDmMotor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__ReadDmMotor__destroy(custom_msgs__msg__ReadDmMotor * msg);

/// Check for msg/ReadDmMotor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ReadDmMotor__are_equal(const custom_msgs__msg__ReadDmMotor * lhs, const custom_msgs__msg__ReadDmMotor * rhs);

/// Copy a msg/ReadDmMotor message.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ReadDmMotor__copy(
  const custom_msgs__msg__ReadDmMotor * input,
  custom_msgs__msg__ReadDmMotor * output);

/// Initialize array of msg/ReadDmMotor messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msgs__msg__ReadDmMotor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ReadDmMotor__Sequence__init(custom_msgs__msg__ReadDmMotor__Sequence * array, size_t size);

/// Finalize array of msg/ReadDmMotor messages.
/**
 * It calls
 * custom_msgs__msg__ReadDmMotor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__ReadDmMotor__Sequence__fini(custom_msgs__msg__ReadDmMotor__Sequence * array);

/// Create array of msg/ReadDmMotor messages.
/**
 * It allocates the memory for the array and calls
 * custom_msgs__msg__ReadDmMotor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
custom_msgs__msg__ReadDmMotor__Sequence *
custom_msgs__msg__ReadDmMotor__Sequence__create(size_t size);

/// Destroy array of msg/ReadDmMotor messages.
/**
 * It calls
 * custom_msgs__msg__ReadDmMotor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
void
custom_msgs__msg__ReadDmMotor__Sequence__destroy(custom_msgs__msg__ReadDmMotor__Sequence * array);

/// Check for msg/ReadDmMotor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ReadDmMotor__Sequence__are_equal(const custom_msgs__msg__ReadDmMotor__Sequence * lhs, const custom_msgs__msg__ReadDmMotor__Sequence * rhs);

/// Copy an array of msg/ReadDmMotor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_msgs
bool
custom_msgs__msg__ReadDmMotor__Sequence__copy(
  const custom_msgs__msg__ReadDmMotor__Sequence * input,
  custom_msgs__msg__ReadDmMotor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__FUNCTIONS_H_
