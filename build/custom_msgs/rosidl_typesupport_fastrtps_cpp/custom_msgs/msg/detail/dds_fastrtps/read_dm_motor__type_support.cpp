// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/ReadDmMotor.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/read_dm_motor__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/read_dm_motor__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace custom_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_serialize(
  const custom_msgs::msg::ReadDmMotor & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: online
  cdr << ros_message.online;
  // Member: disabled
  cdr << ros_message.disabled;
  // Member: enabled
  cdr << ros_message.enabled;
  // Member: overvoltage
  cdr << ros_message.overvoltage;
  // Member: undervoltage
  cdr << ros_message.undervoltage;
  // Member: overcurrent
  cdr << ros_message.overcurrent;
  // Member: mos_overtemperature
  cdr << ros_message.mos_overtemperature;
  // Member: rotor_overtemperature
  cdr << ros_message.rotor_overtemperature;
  // Member: communication_lost
  cdr << ros_message.communication_lost;
  // Member: overload
  cdr << ros_message.overload;
  // Member: position
  cdr << ros_message.position;
  // Member: velocity
  cdr << ros_message.velocity;
  // Member: torque
  cdr << ros_message.torque;
  // Member: mos_temperature
  cdr << ros_message.mos_temperature;
  // Member: rotor_temperature
  cdr << ros_message.rotor_temperature;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::ReadDmMotor & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: online
  cdr >> ros_message.online;

  // Member: disabled
  cdr >> ros_message.disabled;

  // Member: enabled
  cdr >> ros_message.enabled;

  // Member: overvoltage
  cdr >> ros_message.overvoltage;

  // Member: undervoltage
  cdr >> ros_message.undervoltage;

  // Member: overcurrent
  cdr >> ros_message.overcurrent;

  // Member: mos_overtemperature
  cdr >> ros_message.mos_overtemperature;

  // Member: rotor_overtemperature
  cdr >> ros_message.rotor_overtemperature;

  // Member: communication_lost
  cdr >> ros_message.communication_lost;

  // Member: overload
  cdr >> ros_message.overload;

  // Member: position
  cdr >> ros_message.position;

  // Member: velocity
  cdr >> ros_message.velocity;

  // Member: torque
  cdr >> ros_message.torque;

  // Member: mos_temperature
  cdr >> ros_message.mos_temperature;

  // Member: rotor_temperature
  cdr >> ros_message.rotor_temperature;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::ReadDmMotor & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: online
  {
    size_t item_size = sizeof(ros_message.online);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: disabled
  {
    size_t item_size = sizeof(ros_message.disabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enabled
  {
    size_t item_size = sizeof(ros_message.enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: overvoltage
  {
    size_t item_size = sizeof(ros_message.overvoltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: undervoltage
  {
    size_t item_size = sizeof(ros_message.undervoltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: overcurrent
  {
    size_t item_size = sizeof(ros_message.overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mos_overtemperature
  {
    size_t item_size = sizeof(ros_message.mos_overtemperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rotor_overtemperature
  {
    size_t item_size = sizeof(ros_message.rotor_overtemperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: communication_lost
  {
    size_t item_size = sizeof(ros_message.communication_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: overload
  {
    size_t item_size = sizeof(ros_message.overload);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position
  {
    size_t item_size = sizeof(ros_message.position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity
  {
    size_t item_size = sizeof(ros_message.velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: torque
  {
    size_t item_size = sizeof(ros_message.torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mos_temperature
  {
    size_t item_size = sizeof(ros_message.mos_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rotor_temperature
  {
    size_t item_size = sizeof(ros_message.rotor_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_ReadDmMotor(
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


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: online
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: disabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: overvoltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: undervoltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: overcurrent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mos_overtemperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rotor_overtemperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: communication_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: overload
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity
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

  // Member: mos_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rotor_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ReadDmMotor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::ReadDmMotor *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ReadDmMotor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::ReadDmMotor *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ReadDmMotor__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::ReadDmMotor *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ReadDmMotor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ReadDmMotor(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ReadDmMotor__callbacks = {
  "custom_msgs::msg",
  "ReadDmMotor",
  _ReadDmMotor__cdr_serialize,
  _ReadDmMotor__cdr_deserialize,
  _ReadDmMotor__get_serialized_size,
  _ReadDmMotor__max_serialized_size
};

static rosidl_message_type_support_t _ReadDmMotor__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ReadDmMotor__callbacks,
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
get_message_type_support_handle<custom_msgs::msg::ReadDmMotor>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_ReadDmMotor__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, ReadDmMotor)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_ReadDmMotor__handle;
}

#ifdef __cplusplus
}
#endif
