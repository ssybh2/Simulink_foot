// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/ReadDJIRC.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__READ_DJIRC__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__READ_DJIRC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/read_djirc__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_ReadDJIRC_mouse_right_clicked
{
public:
  explicit Init_ReadDJIRC_mouse_right_clicked(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::ReadDJIRC mouse_right_clicked(::custom_msgs::msg::ReadDJIRC::_mouse_right_clicked_type arg)
  {
    msg_.mouse_right_clicked = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_mouse_left_clicked
{
public:
  explicit Init_ReadDJIRC_mouse_left_clicked(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_mouse_right_clicked mouse_left_clicked(::custom_msgs::msg::ReadDJIRC::_mouse_left_clicked_type arg)
  {
    msg_.mouse_left_clicked = std::move(arg);
    return Init_ReadDJIRC_mouse_right_clicked(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_mouse_y
{
public:
  explicit Init_ReadDJIRC_mouse_y(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_mouse_left_clicked mouse_y(::custom_msgs::msg::ReadDJIRC::_mouse_y_type arg)
  {
    msg_.mouse_y = std::move(arg);
    return Init_ReadDJIRC_mouse_left_clicked(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_mouse_x
{
public:
  explicit Init_ReadDJIRC_mouse_x(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_mouse_y mouse_x(::custom_msgs::msg::ReadDJIRC::_mouse_x_type arg)
  {
    msg_.mouse_x = std::move(arg);
    return Init_ReadDJIRC_mouse_y(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_ctrl
{
public:
  explicit Init_ReadDJIRC_ctrl(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_mouse_x ctrl(::custom_msgs::msg::ReadDJIRC::_ctrl_type arg)
  {
    msg_.ctrl = std::move(arg);
    return Init_ReadDJIRC_mouse_x(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_shift
{
public:
  explicit Init_ReadDJIRC_shift(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_ctrl shift(::custom_msgs::msg::ReadDJIRC::_shift_type arg)
  {
    msg_.shift = std::move(arg);
    return Init_ReadDJIRC_ctrl(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_b
{
public:
  explicit Init_ReadDJIRC_b(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_shift b(::custom_msgs::msg::ReadDJIRC::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_ReadDJIRC_shift(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_v
{
public:
  explicit Init_ReadDJIRC_v(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_b v(::custom_msgs::msg::ReadDJIRC::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_ReadDJIRC_b(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_c
{
public:
  explicit Init_ReadDJIRC_c(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_v c(::custom_msgs::msg::ReadDJIRC::_c_type arg)
  {
    msg_.c = std::move(arg);
    return Init_ReadDJIRC_v(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_x
{
public:
  explicit Init_ReadDJIRC_x(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_c x(::custom_msgs::msg::ReadDJIRC::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ReadDJIRC_c(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_z
{
public:
  explicit Init_ReadDJIRC_z(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_x z(::custom_msgs::msg::ReadDJIRC::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_ReadDJIRC_x(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_g
{
public:
  explicit Init_ReadDJIRC_g(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_z g(::custom_msgs::msg::ReadDJIRC::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_ReadDJIRC_z(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_f
{
public:
  explicit Init_ReadDJIRC_f(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_g f(::custom_msgs::msg::ReadDJIRC::_f_type arg)
  {
    msg_.f = std::move(arg);
    return Init_ReadDJIRC_g(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_r
{
public:
  explicit Init_ReadDJIRC_r(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_f r(::custom_msgs::msg::ReadDJIRC::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_ReadDJIRC_f(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_e
{
public:
  explicit Init_ReadDJIRC_e(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_r e(::custom_msgs::msg::ReadDJIRC::_e_type arg)
  {
    msg_.e = std::move(arg);
    return Init_ReadDJIRC_r(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_q
{
public:
  explicit Init_ReadDJIRC_q(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_e q(::custom_msgs::msg::ReadDJIRC::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_ReadDJIRC_e(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_d
{
public:
  explicit Init_ReadDJIRC_d(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_q d(::custom_msgs::msg::ReadDJIRC::_d_type arg)
  {
    msg_.d = std::move(arg);
    return Init_ReadDJIRC_q(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_a
{
public:
  explicit Init_ReadDJIRC_a(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_d a(::custom_msgs::msg::ReadDJIRC::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_ReadDJIRC_d(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_s
{
public:
  explicit Init_ReadDJIRC_s(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_a s(::custom_msgs::msg::ReadDJIRC::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_ReadDJIRC_a(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_w
{
public:
  explicit Init_ReadDJIRC_w(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_s w(::custom_msgs::msg::ReadDJIRC::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_ReadDJIRC_s(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_right_switch
{
public:
  explicit Init_ReadDJIRC_right_switch(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_w right_switch(::custom_msgs::msg::ReadDJIRC::_right_switch_type arg)
  {
    msg_.right_switch = std::move(arg);
    return Init_ReadDJIRC_w(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_left_switch
{
public:
  explicit Init_ReadDJIRC_left_switch(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_right_switch left_switch(::custom_msgs::msg::ReadDJIRC::_left_switch_type arg)
  {
    msg_.left_switch = std::move(arg);
    return Init_ReadDJIRC_right_switch(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_dial
{
public:
  explicit Init_ReadDJIRC_dial(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_left_switch dial(::custom_msgs::msg::ReadDJIRC::_dial_type arg)
  {
    msg_.dial = std::move(arg);
    return Init_ReadDJIRC_left_switch(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_right_y
{
public:
  explicit Init_ReadDJIRC_right_y(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_dial right_y(::custom_msgs::msg::ReadDJIRC::_right_y_type arg)
  {
    msg_.right_y = std::move(arg);
    return Init_ReadDJIRC_dial(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_right_x
{
public:
  explicit Init_ReadDJIRC_right_x(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_right_y right_x(::custom_msgs::msg::ReadDJIRC::_right_x_type arg)
  {
    msg_.right_x = std::move(arg);
    return Init_ReadDJIRC_right_y(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_left_y
{
public:
  explicit Init_ReadDJIRC_left_y(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_right_x left_y(::custom_msgs::msg::ReadDJIRC::_left_y_type arg)
  {
    msg_.left_y = std::move(arg);
    return Init_ReadDJIRC_right_x(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_left_x
{
public:
  explicit Init_ReadDJIRC_left_x(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_left_y left_x(::custom_msgs::msg::ReadDJIRC::_left_x_type arg)
  {
    msg_.left_x = std::move(arg);
    return Init_ReadDJIRC_left_y(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_online
{
public:
  explicit Init_ReadDJIRC_online(::custom_msgs::msg::ReadDJIRC & msg)
  : msg_(msg)
  {}
  Init_ReadDJIRC_left_x online(::custom_msgs::msg::ReadDJIRC::_online_type arg)
  {
    msg_.online = std::move(arg);
    return Init_ReadDJIRC_left_x(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

class Init_ReadDJIRC_header
{
public:
  Init_ReadDJIRC_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReadDJIRC_online header(::custom_msgs::msg::ReadDJIRC::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ReadDJIRC_online(msg_);
  }

private:
  ::custom_msgs::msg::ReadDJIRC msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::ReadDJIRC>()
{
  return custom_msgs::msg::builder::Init_ReadDJIRC_header();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__READ_DJIRC__BUILDER_HPP_
