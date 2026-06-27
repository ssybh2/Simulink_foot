// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/WriteDmMotorMITControl.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/write_dm_motor_mit_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/write_dm_motor_mit_control__struct.h"
#include "custom_msgs/msg/detail/write_dm_motor_mit_control__functions.h"
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


// forward declare type support functions


using _WriteDmMotorMITControl__ros_msg_type = custom_msgs__msg__WriteDmMotorMITControl;

static bool _WriteDmMotorMITControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WriteDmMotorMITControl__ros_msg_type * ros_message = static_cast<const _WriteDmMotorMITControl__ros_msg_type *>(untyped_ros_message);
  // Field name: enable
  {
    cdr << ros_message->enable;
  }

  // Field name: p_des
  {
    cdr << ros_message->p_des;
  }

  // Field name: v_des
  {
    cdr << ros_message->v_des;
  }

  // Field name: kp
  {
    cdr << ros_message->kp;
  }

  // Field name: kd
  {
    cdr << ros_message->kd;
  }

  // Field name: torque
  {
    cdr << ros_message->torque;
  }

  return true;
}

static bool _WriteDmMotorMITControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WriteDmMotorMITControl__ros_msg_type * ros_message = static_cast<_WriteDmMotorMITControl__ros_msg_type *>(untyped_ros_message);
  // Field name: enable
  {
    cdr >> ros_message->enable;
  }

  // Field name: p_des
  {
    cdr >> ros_message->p_des;
  }

  // Field name: v_des
  {
    cdr >> ros_message->v_des;
  }

  // Field name: kp
  {
    cdr >> ros_message->kp;
  }

  // Field name: kd
  {
    cdr >> ros_message->kd;
  }

  // Field name: torque
  {
    cdr >> ros_message->torque;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__WriteDmMotorMITControl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WriteDmMotorMITControl__ros_msg_type * ros_message = static_cast<const _WriteDmMotorMITControl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name enable
  {
    size_t item_size = sizeof(ros_message->enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name p_des
  {
    size_t item_size = sizeof(ros_message->p_des);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_des
  {
    size_t item_size = sizeof(ros_message->v_des);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kp
  {
    size_t item_size = sizeof(ros_message->kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kd
  {
    size_t item_size = sizeof(ros_message->kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torque
  {
    size_t item_size = sizeof(ros_message->torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WriteDmMotorMITControl__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__WriteDmMotorMITControl(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__WriteDmMotorMITControl(
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

  // member: enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: p_des
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: v_des
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: kp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: kd
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

  return current_alignment - initial_alignment;
}

static size_t _WriteDmMotorMITControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_msgs__msg__WriteDmMotorMITControl(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WriteDmMotorMITControl = {
  "custom_msgs::msg",
  "WriteDmMotorMITControl",
  _WriteDmMotorMITControl__cdr_serialize,
  _WriteDmMotorMITControl__cdr_deserialize,
  _WriteDmMotorMITControl__get_serialized_size,
  _WriteDmMotorMITControl__max_serialized_size
};

static rosidl_message_type_support_t _WriteDmMotorMITControl__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WriteDmMotorMITControl,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, WriteDmMotorMITControl)() {
  return &_WriteDmMotorMITControl__type_support;
}

#if defined(__cplusplus)
}
#endif
