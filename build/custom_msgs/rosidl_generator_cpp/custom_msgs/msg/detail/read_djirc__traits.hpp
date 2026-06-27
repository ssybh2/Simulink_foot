// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/ReadDJIRC.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__READ_DJIRC__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__READ_DJIRC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/msg/detail/read_djirc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ReadDJIRC & msg,
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

  // member: left_x
  {
    out << "left_x: ";
    rosidl_generator_traits::value_to_yaml(msg.left_x, out);
    out << ", ";
  }

  // member: left_y
  {
    out << "left_y: ";
    rosidl_generator_traits::value_to_yaml(msg.left_y, out);
    out << ", ";
  }

  // member: right_x
  {
    out << "right_x: ";
    rosidl_generator_traits::value_to_yaml(msg.right_x, out);
    out << ", ";
  }

  // member: right_y
  {
    out << "right_y: ";
    rosidl_generator_traits::value_to_yaml(msg.right_y, out);
    out << ", ";
  }

  // member: dial
  {
    out << "dial: ";
    rosidl_generator_traits::value_to_yaml(msg.dial, out);
    out << ", ";
  }

  // member: left_switch
  {
    out << "left_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.left_switch, out);
    out << ", ";
  }

  // member: right_switch
  {
    out << "right_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.right_switch, out);
    out << ", ";
  }

  // member: w
  {
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
    out << ", ";
  }

  // member: s
  {
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << ", ";
  }

  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << ", ";
  }

  // member: q
  {
    out << "q: ";
    rosidl_generator_traits::value_to_yaml(msg.q, out);
    out << ", ";
  }

  // member: e
  {
    out << "e: ";
    rosidl_generator_traits::value_to_yaml(msg.e, out);
    out << ", ";
  }

  // member: r
  {
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << ", ";
  }

  // member: f
  {
    out << "f: ";
    rosidl_generator_traits::value_to_yaml(msg.f, out);
    out << ", ";
  }

  // member: g
  {
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: c
  {
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << ", ";
  }

  // member: v
  {
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: shift
  {
    out << "shift: ";
    rosidl_generator_traits::value_to_yaml(msg.shift, out);
    out << ", ";
  }

  // member: ctrl
  {
    out << "ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrl, out);
    out << ", ";
  }

  // member: mouse_x
  {
    out << "mouse_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mouse_x, out);
    out << ", ";
  }

  // member: mouse_y
  {
    out << "mouse_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mouse_y, out);
    out << ", ";
  }

  // member: mouse_left_clicked
  {
    out << "mouse_left_clicked: ";
    rosidl_generator_traits::value_to_yaml(msg.mouse_left_clicked, out);
    out << ", ";
  }

  // member: mouse_right_clicked
  {
    out << "mouse_right_clicked: ";
    rosidl_generator_traits::value_to_yaml(msg.mouse_right_clicked, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadDJIRC & msg,
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

  // member: left_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_x: ";
    rosidl_generator_traits::value_to_yaml(msg.left_x, out);
    out << "\n";
  }

  // member: left_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_y: ";
    rosidl_generator_traits::value_to_yaml(msg.left_y, out);
    out << "\n";
  }

  // member: right_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_x: ";
    rosidl_generator_traits::value_to_yaml(msg.right_x, out);
    out << "\n";
  }

  // member: right_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_y: ";
    rosidl_generator_traits::value_to_yaml(msg.right_y, out);
    out << "\n";
  }

  // member: dial
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dial: ";
    rosidl_generator_traits::value_to_yaml(msg.dial, out);
    out << "\n";
  }

  // member: left_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.left_switch, out);
    out << "\n";
  }

  // member: right_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.right_switch, out);
    out << "\n";
  }

  // member: w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "w: ";
    rosidl_generator_traits::value_to_yaml(msg.w, out);
    out << "\n";
  }

  // member: s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << "\n";
  }

  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }

  // member: q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q: ";
    rosidl_generator_traits::value_to_yaml(msg.q, out);
    out << "\n";
  }

  // member: e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e: ";
    rosidl_generator_traits::value_to_yaml(msg.e, out);
    out << "\n";
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f: ";
    rosidl_generator_traits::value_to_yaml(msg.f, out);
    out << "\n";
  }

  // member: g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c: ";
    rosidl_generator_traits::value_to_yaml(msg.c, out);
    out << "\n";
  }

  // member: v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: shift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shift: ";
    rosidl_generator_traits::value_to_yaml(msg.shift, out);
    out << "\n";
  }

  // member: ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrl, out);
    out << "\n";
  }

  // member: mouse_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mouse_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mouse_x, out);
    out << "\n";
  }

  // member: mouse_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mouse_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mouse_y, out);
    out << "\n";
  }

  // member: mouse_left_clicked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mouse_left_clicked: ";
    rosidl_generator_traits::value_to_yaml(msg.mouse_left_clicked, out);
    out << "\n";
  }

  // member: mouse_right_clicked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mouse_right_clicked: ";
    rosidl_generator_traits::value_to_yaml(msg.mouse_right_clicked, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadDJIRC & msg, bool use_flow_style = false)
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
  const custom_msgs::msg::ReadDJIRC & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::msg::ReadDJIRC & msg)
{
  return custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::msg::ReadDJIRC>()
{
  return "custom_msgs::msg::ReadDJIRC";
}

template<>
inline const char * name<custom_msgs::msg::ReadDJIRC>()
{
  return "custom_msgs/msg/ReadDJIRC";
}

template<>
struct has_fixed_size<custom_msgs::msg::ReadDJIRC>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<custom_msgs::msg::ReadDJIRC>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<custom_msgs::msg::ReadDJIRC>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__READ_DJIRC__TRAITS_HPP_
