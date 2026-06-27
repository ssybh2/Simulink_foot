// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/WriteDmMotorMITControl.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/write_dm_motor_mit_control__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/write_dm_motor_mit_control__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace custom_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_serialize(
  const custom_msgs::msg::WriteDmMotorMITControl & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: enable
  cdr << ros_message.enable;
  // Member: p_des
  cdr << ros_message.p_des;
  // Member: v_des
  cdr << ros_message.v_des;
  // Member: kp
  cdr << ros_message.kp;
  // Member: kd
  cdr << ros_message.kd;
  // Member: torque
  cdr << ros_message.torque;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::WriteDmMotorMITControl & ros_message)
{
  // Member: enable
  cdr >> ros_message.enable;

  // Member: p_des
  cdr >> ros_message.p_des;

  // Member: v_des
  cdr >> ros_message.v_des;

  // Member: kp
  cdr >> ros_message.kp;

  // Member: kd
  cdr >> ros_message.kd;

  // Member: torque
  cdr >> ros_message.torque;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::WriteDmMotorMITControl & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: enable
  {
    size_t item_size = sizeof(ros_message.enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: p_des
  {
    size_t item_size = sizeof(ros_message.p_des);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: v_des
  {
    size_t item_size = sizeof(ros_message.v_des);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: kp
  {
    size_t item_size = sizeof(ros_message.kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: kd
  {
    size_t item_size = sizeof(ros_message.kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: torque
  {
    size_t item_size = sizeof(ros_message.torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_WriteDmMotorMITControl(
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


  // Member: enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: p_des
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: v_des
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: kp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: kd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: torque
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _WriteDmMotorMITControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::WriteDmMotorMITControl *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _WriteDmMotorMITControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::WriteDmMotorMITControl *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _WriteDmMotorMITControl__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::WriteDmMotorMITControl *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _WriteDmMotorMITControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_WriteDmMotorMITControl(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _WriteDmMotorMITControl__callbacks = {
  "custom_msgs::msg",
  "WriteDmMotorMITControl",
  _WriteDmMotorMITControl__cdr_serialize,
  _WriteDmMotorMITControl__cdr_deserialize,
  _WriteDmMotorMITControl__get_serialized_size,
  _WriteDmMotorMITControl__max_serialized_size
};

static rosidl_message_type_support_t _WriteDmMotorMITControl__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_WriteDmMotorMITControl__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs::msg::WriteDmMotorMITControl>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_WriteDmMotorMITControl__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, WriteDmMotorMITControl)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_WriteDmMotorMITControl__handle;
}

#ifdef __cplusplus
}
#endif
