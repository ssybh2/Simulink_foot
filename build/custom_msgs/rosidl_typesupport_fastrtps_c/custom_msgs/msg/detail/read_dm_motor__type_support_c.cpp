// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/ReadDmMotor.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/read_dm_motor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/read_dm_motor__struct.h"
#include "custom_msgs/msg/detail/read_dm_motor__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ReadDmMotor__ros_msg_type = custom_msgs__msg__ReadDmMotor;

static bool _ReadDmMotor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ReadDmMotor__ros_msg_type * ros_message = static_cast<const _ReadDmMotor__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: online
  {
    cdr << ros_message->online;
  }

  // Field name: disabled
  {
    cdr << ros_message->disabled;
  }

  // Field name: enabled
  {
    cdr << ros_message->enabled;
  }

  // Field name: overvoltage
  {
    cdr << ros_message->overvoltage;
  }

  // Field name: undervoltage
  {
    cdr << ros_message->undervoltage;
  }

  // Field name: overcurrent
  {
    cdr << ros_message->overcurrent;
  }

  // Field name: mos_overtemperature
  {
    cdr << ros_message->mos_overtemperature;
  }

  // Field name: rotor_overtemperature
  {
    cdr << ros_message->rotor_overtemperature;
  }

  // Field name: communication_lost
  {
    cdr << ros_message->communication_lost;
  }

  // Field name: overload
  {
    cdr << ros_message->overload;
  }

  // Field name: position
  {
    cdr << ros_message->position;
  }

  // Field name: velocity
  {
    cdr << ros_message->velocity;
  }

  // Field name: torque
  {
    cdr << ros_message->torque;
  }

  // Field name: mos_temperature
  {
    cdr << ros_message->mos_temperature;
  }

  // Field name: rotor_temperature
  {
    cdr << ros_message->rotor_temperature;
  }

  return true;
}

static bool _ReadDmMotor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ReadDmMotor__ros_msg_type * ros_message = static_cast<_ReadDmMotor__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: online
  {
    cdr >> ros_message->online;
  }

  // Field name: disabled
  {
    cdr >> ros_message->disabled;
  }

  // Field name: enabled
  {
    cdr >> ros_message->enabled;
  }

  // Field name: overvoltage
  {
    cdr >> ros_message->overvoltage;
  }

  // Field name: undervoltage
  {
    cdr >> ros_message->undervoltage;
  }

  // Field name: overcurrent
  {
    cdr >> ros_message->overcurrent;
  }

  // Field name: mos_overtemperature
  {
    cdr >> ros_message->mos_overtemperature;
  }

  // Field name: rotor_overtemperature
  {
    cdr >> ros_message->rotor_overtemperature;
  }

  // Field name: communication_lost
  {
    cdr >> ros_message->communication_lost;
  }

  // Field name: overload
  {
    cdr >> ros_message->overload;
  }

  // Field name: position
  {
    cdr >> ros_message->position;
  }

  // Field name: velocity
  {
    cdr >> ros_message->velocity;
  }

  // Field name: torque
  {
    cdr >> ros_message->torque;
  }

  // Field name: mos_temperature
  {
    cdr >> ros_message->mos_temperature;
  }

  // Field name: rotor_temperature
  {
    cdr >> ros_message->rotor_temperature;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__ReadDmMotor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ReadDmMotor__ros_msg_type * ros_message = static_cast<const _ReadDmMotor__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name online
  {
    size_t item_size = sizeof(ros_message->online);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disabled
  {
    size_t item_size = sizeof(ros_message->disabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enabled
  {
    size_t item_size = sizeof(ros_message->enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name overvoltage
  {
    size_t item_size = sizeof(ros_message->overvoltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name undervoltage
  {
    size_t item_size = sizeof(ros_message->undervoltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name overcurrent
  {
    size_t item_size = sizeof(ros_message->overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mos_overtemperature
  {
    size_t item_size = sizeof(ros_message->mos_overtemperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotor_overtemperature
  {
    size_t item_size = sizeof(ros_message->rotor_overtemperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name communication_lost
  {
    size_t item_size = sizeof(ros_message->communication_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name overload
  {
    size_t item_size = sizeof(ros_message->overload);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position
  {
    size_t item_size = sizeof(ros_message->position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity
  {
    size_t item_size = sizeof(ros_message->velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque
  {
    size_t item_size = sizeof(ros_message->torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mos_temperature
  {
    size_t item_size = sizeof(ros_message->mos_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotor_temperature
  {
    size_t item_size = sizeof(ros_message->rotor_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ReadDmMotor__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__ReadDmMotor(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__ReadDmMotor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: online
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: disabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: overvoltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: undervoltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: overcurrent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mos_overtemperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rotor_overtemperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: communication_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: overload
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mos_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rotor_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ReadDmMotor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_msgs__msg__ReadDmMotor(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ReadDmMotor = {
  "custom_msgs::msg",
  "ReadDmMotor",
  _ReadDmMotor__cdr_serialize,
  _ReadDmMotor__cdr_deserialize,
  _ReadDmMotor__get_serialized_size,
  _ReadDmMotor__max_serialized_size
};

static rosidl_message_type_support_t _ReadDmMotor__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ReadDmMotor,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, ReadDmMotor)() {
  return &_ReadDmMotor__type_support;
}

#if defined(__cplusplus)
}
#endif
