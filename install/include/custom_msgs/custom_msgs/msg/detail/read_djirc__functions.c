// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/ReadDJIRC.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/read_djirc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
custom_msgs__msg__ReadDJIRC__init(custom_msgs__msg__ReadDJIRC * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    custom_msgs__msg__ReadDJIRC__fini(msg);
    return false;
  }
  // online
  // left_x
  // left_y
  // right_x
  // right_y
  // dial
  // left_switch
  // right_switch
  // w
  // s
  // a
  // d
  // q
  // e
  // r
  // f
  // g
  // z
  // x
  // c
  // v
  // b
  // shift
  // ctrl
  // mouse_x
  // mouse_y
  // mouse_left_clicked
  // mouse_right_clicked
  return true;
}

void
custom_msgs__msg__ReadDJIRC__fini(custom_msgs__msg__ReadDJIRC * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // online
  // left_x
  // left_y
  // right_x
  // right_y
  // dial
  // left_switch
  // right_switch
  // w
  // s
  // a
  // d
  // q
  // e
  // r
  // f
  // g
  // z
  // x
  // c
  // v
  // b
  // shift
  // ctrl
  // mouse_x
  // mouse_y
  // mouse_left_clicked
  // mouse_right_clicked
}

bool
custom_msgs__msg__ReadDJIRC__are_equal(const custom_msgs__msg__ReadDJIRC * lhs, const custom_msgs__msg__ReadDJIRC * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // online
  if (lhs->online != rhs->online) {
    return false;
  }
  // left_x
  if (lhs->left_x != rhs->left_x) {
    return false;
  }
  // left_y
  if (lhs->left_y != rhs->left_y) {
    return false;
  }
  // right_x
  if (lhs->right_x != rhs->right_x) {
    return false;
  }
  // right_y
  if (lhs->right_y != rhs->right_y) {
    return false;
  }
  // dial
  if (lhs->dial != rhs->dial) {
    return false;
  }
  // left_switch
  if (lhs->left_switch != rhs->left_switch) {
    return false;
  }
  // right_switch
  if (lhs->right_switch != rhs->right_switch) {
    return false;
  }
  // w
  if (lhs->w != rhs->w) {
    return false;
  }
  // s
  if (lhs->s != rhs->s) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // d
  if (lhs->d != rhs->d) {
    return false;
  }
  // q
  if (lhs->q != rhs->q) {
    return false;
  }
  // e
  if (lhs->e != rhs->e) {
    return false;
  }
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // f
  if (lhs->f != rhs->f) {
    return false;
  }
  // g
  if (lhs->g != rhs->g) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  // v
  if (lhs->v != rhs->v) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // shift
  if (lhs->shift != rhs->shift) {
    return false;
  }
  // ctrl
  if (lhs->ctrl != rhs->ctrl) {
    return false;
  }
  // mouse_x
  if (lhs->mouse_x != rhs->mouse_x) {
    return false;
  }
  // mouse_y
  if (lhs->mouse_y != rhs->mouse_y) {
    return false;
  }
  // mouse_left_clicked
  if (lhs->mouse_left_clicked != rhs->mouse_left_clicked) {
    return false;
  }
  // mouse_right_clicked
  if (lhs->mouse_right_clicked != rhs->mouse_right_clicked) {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__ReadDJIRC__copy(
  const custom_msgs__msg__ReadDJIRC * input,
  custom_msgs__msg__ReadDJIRC * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // online
  output->online = input->online;
  // left_x
  output->left_x = input->left_x;
  // left_y
  output->left_y = input->left_y;
  // right_x
  output->right_x = input->right_x;
  // right_y
  output->right_y = input->right_y;
  // dial
  output->dial = input->dial;
  // left_switch
  output->left_switch = input->left_switch;
  // right_switch
  output->right_switch = input->right_switch;
  // w
  output->w = input->w;
  // s
  output->s = input->s;
  // a
  output->a = input->a;
  // d
  output->d = input->d;
  // q
  output->q = input->q;
  // e
  output->e = input->e;
  // r
  output->r = input->r;
  // f
  output->f = input->f;
  // g
  output->g = input->g;
  // z
  output->z = input->z;
  // x
  output->x = input->x;
  // c
  output->c = input->c;
  // v
  output->v = input->v;
  // b
  output->b = input->b;
  // shift
  output->shift = input->shift;
  // ctrl
  output->ctrl = input->ctrl;
  // mouse_x
  output->mouse_x = input->mouse_x;
  // mouse_y
  output->mouse_y = input->mouse_y;
  // mouse_left_clicked
  output->mouse_left_clicked = input->mouse_left_clicked;
  // mouse_right_clicked
  output->mouse_right_clicked = input->mouse_right_clicked;
  return true;
}

custom_msgs__msg__ReadDJIRC *
custom_msgs__msg__ReadDJIRC__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ReadDJIRC * msg = (custom_msgs__msg__ReadDJIRC *)allocator.allocate(sizeof(custom_msgs__msg__ReadDJIRC), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__ReadDJIRC));
  bool success = custom_msgs__msg__ReadDJIRC__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__ReadDJIRC__destroy(custom_msgs__msg__ReadDJIRC * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__ReadDJIRC__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__ReadDJIRC__Sequence__init(custom_msgs__msg__ReadDJIRC__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ReadDJIRC * data = NULL;

  if (size) {
    data = (custom_msgs__msg__ReadDJIRC *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__ReadDJIRC), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__ReadDJIRC__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__ReadDJIRC__fini(&data[i - 1]);
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
custom_msgs__msg__ReadDJIRC__Sequence__fini(custom_msgs__msg__ReadDJIRC__Sequence * array)
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
      custom_msgs__msg__ReadDJIRC__fini(&array->data[i]);
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

custom_msgs__msg__ReadDJIRC__Sequence *
custom_msgs__msg__ReadDJIRC__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ReadDJIRC__Sequence * array = (custom_msgs__msg__ReadDJIRC__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__ReadDJIRC__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__ReadDJIRC__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__ReadDJIRC__Sequence__destroy(custom_msgs__msg__ReadDJIRC__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__ReadDJIRC__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__ReadDJIRC__Sequence__are_equal(const custom_msgs__msg__ReadDJIRC__Sequence * lhs, const custom_msgs__msg__ReadDJIRC__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__ReadDJIRC__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__ReadDJIRC__Sequence__copy(
  const custom_msgs__msg__ReadDJIRC__Sequence * input,
  custom_msgs__msg__ReadDJIRC__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__ReadDJIRC);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__ReadDJIRC * data =
      (custom_msgs__msg__ReadDJIRC *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__ReadDJIRC__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__ReadDJIRC__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__ReadDJIRC__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
