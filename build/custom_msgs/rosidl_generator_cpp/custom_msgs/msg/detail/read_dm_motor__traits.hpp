// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/ReadDmMotor.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/msg/detail/read_dm_motor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReadDmMotor & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: online
  {
    out << "online: ";
    rosidl_generator_traits::value_to_yaml(msg.online, out);
    out << ", ";
  }

  // member: disabled
  {
    out << "disabled: ";
    rosidl_generator_traits::value_to_yaml(msg.disabled, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: overvoltage
  {
    out << "overvoltage: ";
    rosidl_generator_traits::value_to_yaml(msg.overvoltage, out);
    out << ", ";
  }

  // member: undervoltage
  {
    out << "undervoltage: ";
    rosidl_generator_traits::value_to_yaml(msg.undervoltage, out);
    out << ", ";
  }

  // member: overcurrent
  {
    out << "overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.overcurrent, out);
    out << ", ";
  }

  // member: mos_overtemperature
  {
    out << "mos_overtemperature: ";
    rosidl_generator_traits::value_to_yaml(msg.mos_overtemperature, out);
    out << ", ";
  }

  // member: rotor_overtemperature
  {
    out << "rotor_overtemperature: ";
    rosidl_generator_traits::value_to_yaml(msg.rotor_overtemperature, out);
    out << ", ";
  }

  // member: communication_lost
  {
    out << "communication_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.communication_lost, out);
    out << ", ";
  }

  // member: overload
  {
    out << "overload: ";
    rosidl_generator_traits::value_to_yaml(msg.overload, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: torque
  {
    out << "torque: ";
    rosidl_generator_traits::value_to_yaml(msg.torque, out);
    out << ", ";
  }

  // member: mos_temperature
  {
    out << "mos_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.mos_temperature, out);
    out << ", ";
  }

  // member: rotor_temperature
  {
    out << "rotor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.rotor_temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadDmMotor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: online
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "online: ";
    rosidl_generator_traits::value_to_yaml(msg.online, out);
    out << "\n";
  }

  // member: disabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disabled: ";
    rosidl_generator_traits::value_to_yaml(msg.disabled, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: overvoltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overvoltage: ";
    rosidl_generator_traits::value_to_yaml(msg.overvoltage, out);
    out << "\n";
  }

  // member: undervoltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undervoltage: ";
    rosidl_generator_traits::value_to_yaml(msg.undervoltage, out);
    out << "\n";
  }

  // member: overcurrent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overcurrent: ";
    rosidl_generator_traits::value_to_yaml(msg.overcurrent, out);
    out << "\n";
  }

  // member: mos_overtemperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mos_overtemperature: ";
    rosidl_generator_traits::value_to_yaml(msg.mos_overtemperature, out);
    out << "\n";
  }

  // member: rotor_overtemperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotor_overtemperature: ";
    rosidl_generator_traits::value_to_yaml(msg.rotor_overtemperature, out);
    out << "\n";
  }

  // member: communication_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "communication_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.communication_lost, out);
    out << "\n";
  }

  // member: overload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overload: ";
    rosidl_generator_traits::value_to_yaml(msg.overload, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque: ";
    rosidl_generator_traits::value_to_yaml(msg.torque, out);
    out << "\n";
  }

  // member: mos_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mos_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.mos_temperature, out);
    out << "\n";
  }

  // member: rotor_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.rotor_temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadDmMotor & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::msg::ReadDmMotor & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::msg::ReadDmMotor & msg)
{
  return custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::msg::ReadDmMotor>()
{
  return "custom_msgs::msg::ReadDmMotor";
}

template<>
inline const char * name<custom_msgs::msg::ReadDmMotor>()
{
  return "custom_msgs/msg/ReadDmMotor";
}

template<>
struct has_fixed_size<custom_msgs::msg::ReadDmMotor>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<custom_msgs::msg::ReadDmMotor>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<custom_msgs::msg::ReadDmMotor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__TRAITS_HPP_
