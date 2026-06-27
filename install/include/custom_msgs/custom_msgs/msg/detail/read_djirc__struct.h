// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/ReadDJIRC.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__READ_DJIRC__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__READ_DJIRC__STRUCT_H_

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

/// Struct defined in msg/ReadDJIRC in the package custom_msgs.
typedef struct custom_msgs__msg__ReadDJIRC
{
  std_msgs__msg__Header header;
  uint8_t online;
  float left_x;
  float left_y;
  float right_x;
  float right_y;
  float dial;
  uint8_t left_switch;
  uint8_t right_switch;
  uint8_t w;
  uint8_t s;
  uint8_t a;
  uint8_t d;
  uint8_t q;
  uint8_t e;
  uint8_t r;
  uint8_t f;
  uint8_t g;
  uint8_t z;
  uint8_t x;
  uint8_t c;
  uint8_t v;
  uint8_t b;
  uint8_t shift;
  uint8_t ctrl;
  int16_t mouse_x;
  int16_t mouse_y;
  uint8_t mouse_left_clicked;
  uint8_t mouse_right_clicked;
} custom_msgs__msg__ReadDJIRC;

// Struct for a sequence of custom_msgs__msg__ReadDJIRC.
typedef struct custom_msgs__msg__ReadDJIRC__Sequence
{
  custom_msgs__msg__ReadDJIRC * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__ReadDJIRC__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__READ_DJIRC__STRUCT_H_
