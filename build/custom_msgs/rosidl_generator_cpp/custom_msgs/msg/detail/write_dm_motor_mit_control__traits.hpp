// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/WriteDmMotorMITControl.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__WRITE_DM_MOTOR_MIT_CONTROL__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__WRITE_DM_MOTOR_MIT_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/msg/detail/write_dm_motor_mit_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WriteDmMotorMITControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << ", ";
  }

  // member: p_des
  {
    out << "p_des: ";
    rosidl_generator_traits::value_to_yaml(msg.p_des, out);
    out << ", ";
  }

  // member: v_des
  {
    out << "v_des: ";
    rosidl_generator_traits::value_to_yaml(msg.v_des, out);
    out << ", ";
  }

  // member: kp
  {
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << ", ";
  }

  // member: kd
  {
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << ", ";
  }

  // member: torque
  {
    out << "torque: ";
    rosidl_generator_traits::value_to_yaml(msg.torque, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WriteDmMotorMITControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }

  // member: p_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_des: ";
    rosidl_generator_traits::value_to_yaml(msg.p_des, out);
    out << "\n";
  }

  // member: v_des
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v_des: ";
    rosidl_generator_traits::value_to_yaml(msg.v_des, out);
    out << "\n";
  }

  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << "\n";
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WriteDmMotorMITControl & msg, bool use_flow_style = false)
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
  const custom_msgs::msg::WriteDmMotorMITControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::msg::WriteDmMotorMITControl & msg)
{
  return custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::msg::WriteDmMotorMITControl>()
{
  return "custom_msgs::msg::WriteDmMotorMITControl";
}

template<>
inline const char * name<custom_msgs::msg::WriteDmMotorMITControl>()
{
  return "custom_msgs/msg/WriteDmMotorMITControl";
}

template<>
struct has_fixed_size<custom_msgs::msg::WriteDmMotorMITControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs::msg::WriteDmMotorMITControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs::msg::WriteDmMotorMITControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__WRITE_DM_MOTOR_MIT_CONTROL__TRAITS_HPP_
