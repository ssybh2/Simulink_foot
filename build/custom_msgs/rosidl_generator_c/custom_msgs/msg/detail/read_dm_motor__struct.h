// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/ReadDmMotor.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ReadDmMotor in the package custom_msgs.
typedef struct custom_msgs__msg__ReadDmMotor
{
  std_msgs__msg__Header header;
  uint8_t online;
  uint8_t disabled;
  uint8_t enabled;
  uint8_t overvoltage;
  uint8_t undervoltage;
  uint8_t overcurrent;
  uint8_t mos_overtemperature;
  uint8_t rotor_overtemperature;
  uint8_t communication_lost;
  uint8_t overload;
  float position;
  float velocity;
  float torque;
  uint8_t mos_temperature;
  uint8_t rotor_temperature;
} custom_msgs__msg__ReadDmMotor;

// Struct for a sequence of custom_msgs__msg__ReadDmMotor.
typedef struct custom_msgs__msg__ReadDmMotor__Sequence
{
  custom_msgs__msg__ReadDmMotor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__ReadDmMotor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__STRUCT_H_
