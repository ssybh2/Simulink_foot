// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/ReadDmMotor.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/read_dm_motor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
custom_msgs__msg__ReadDmMotor__init(custom_msgs__msg__ReadDmMotor * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    custom_msgs__msg__ReadDmMotor__fini(msg);
    return false;
  }
  // online
  // disabled
  // enabled
  // overvoltage
  // undervoltage
  // overcurrent
  // mos_overtemperature
  // rotor_overtemperature
  // communication_lost
  // overload
  // position
  // velocity
  // torque
  // mos_temperature
  // rotor_temperature
  return true;
}

void
custom_msgs__msg__ReadDmMotor__fini(custom_msgs__msg__ReadDmMotor * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // online
  // disabled
  // enabled
  // overvoltage
  // undervoltage
  // overcurrent
  // mos_overtemperature
  // rotor_overtemperature
  // communication_lost
  // overload
  // position
  // velocity
  // torque
  // mos_temperature
  // rotor_temperature
}

bool
custom_msgs__msg__ReadDmMotor__are_equal(const custom_msgs__msg__ReadDmMotor * lhs, const custom_msgs__msg__ReadDmMotor * rhs)
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
  // disabled
  if (lhs->disabled != rhs->disabled) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // overvoltage
  if (lhs->overvoltage != rhs->overvoltage) {
    return false;
  }
  // undervoltage
  if (lhs->undervoltage != rhs->undervoltage) {
    return false;
  }
  // overcurrent
  if (lhs->overcurrent != rhs->overcurrent) {
    return false;
  }
  // mos_overtemperature
  if (lhs->mos_overtemperature != rhs->mos_overtemperature) {
    return false;
  }
  // rotor_overtemperature
  if (lhs->rotor_overtemperature != rhs->rotor_overtemperature) {
    return false;
  }
  // communication_lost
  if (lhs->communication_lost != rhs->communication_lost) {
    return false;
  }
  // overload
  if (lhs->overload != rhs->overload) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // torque
  if (lhs->torque != rhs->torque) {
    return false;
  }
  // mos_temperature
  if (lhs->mos_temperature != rhs->mos_temperature) {
    return false;
  }
  // rotor_temperature
  if (lhs->rotor_temperature != rhs->rotor_temperature) {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__ReadDmMotor__copy(
  const custom_msgs__msg__ReadDmMotor * input,
  custom_msgs__msg__ReadDmMotor * output)
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
  // disabled
  output->disabled = input->disabled;
  // enabled
  output->enabled = input->enabled;
  // overvoltage
  output->overvoltage = input->overvoltage;
  // undervoltage
  output->undervoltage = input->undervoltage;
  // overcurrent
  output->overcurrent = input->overcurrent;
  // mos_overtemperature
  output->mos_overtemperature = input->mos_overtemperature;
  // rotor_overtemperature
  output->rotor_overtemperature = input->rotor_overtemperature;
  // communication_lost
  output->communication_lost = input->communication_lost;
  // overload
  output->overload = input->overload;
  // position
  output->position = input->position;
  // velocity
  output->velocity = input->velocity;
  // torque
  output->torque = input->torque;
  // mos_temperature
  output->mos_temperature = input->mos_temperature;
  // rotor_temperature
  output->rotor_temperature = input->rotor_temperature;
  return true;
}

custom_msgs__msg__ReadDmMotor *
custom_msgs__msg__ReadDmMotor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ReadDmMotor * msg = (custom_msgs__msg__ReadDmMotor *)allocator.allocate(sizeof(custom_msgs__msg__ReadDmMotor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__ReadDmMotor));
  bool success = custom_msgs__msg__ReadDmMotor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__ReadDmMotor__destroy(custom_msgs__msg__ReadDmMotor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__ReadDmMotor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__ReadDmMotor__Sequence__init(custom_msgs__msg__ReadDmMotor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ReadDmMotor * data = NULL;

  if (size) {
    data = (custom_msgs__msg__ReadDmMotor *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__ReadDmMotor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__ReadDmMotor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__ReadDmMotor__fini(&data[i - 1]);
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
custom_msgs__msg__ReadDmMotor__Sequence__fini(custom_msgs__msg__ReadDmMotor__Sequence * array)
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
      custom_msgs__msg__ReadDmMotor__fini(&array->data[i]);
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

custom_msgs__msg__ReadDmMotor__Sequence *
custom_msgs__msg__ReadDmMotor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__ReadDmMotor__Sequence * array = (custom_msgs__msg__ReadDmMotor__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__ReadDmMotor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__ReadDmMotor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__ReadDmMotor__Sequence__destroy(custom_msgs__msg__ReadDmMotor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__ReadDmMotor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__ReadDmMotor__Sequence__are_equal(const custom_msgs__msg__ReadDmMotor__Sequence * lhs, const custom_msgs__msg__ReadDmMotor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__ReadDmMotor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__ReadDmMotor__Sequence__copy(
  const custom_msgs__msg__ReadDmMotor__Sequence * input,
  custom_msgs__msg__ReadDmMotor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__ReadDmMotor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__ReadDmMotor * data =
      (custom_msgs__msg__ReadDmMotor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__ReadDmMotor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__ReadDmMotor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__ReadDmMotor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
