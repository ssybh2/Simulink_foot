// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/ReadDmMotor.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/read_dm_motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_ReadDmMotor_rotor_temperature
{
public:
  explicit Init_ReadDmMotor_rotor_temperature(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::ReadDmMotor rotor_temperature(::custom_msgs::msg::ReadDmMotor::_rotor_temperature_type arg)
  {
    msg_.rotor_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_mos_temperature
{
public:
  explicit Init_ReadDmMotor_mos_temperature(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  Init_ReadDmMotor_rotor_temperature mos_temperature(::custom_msgs::msg::ReadDmMotor::_mos_temperature_type arg)
  {
    msg_.mos_temperature = std::move(arg);
    return Init_ReadDmMotor_rotor_temperature(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_torque
{
public:
  explicit Init_ReadDmMotor_torque(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  Init_ReadDmMotor_mos_temperature torque(::custom_msgs::msg::ReadDmMotor::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_ReadDmMotor_mos_temperature(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_velocity
{
public:
  explicit Init_ReadDmMotor_velocity(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  Init_ReadDmMotor_torque velocity(::custom_msgs::msg::ReadDmMotor::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ReadDmMotor_torque(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_position
{
public:
  explicit Init_ReadDmMotor_position(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  Init_ReadDmMotor_velocity position(::custom_msgs::msg::ReadDmMotor::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ReadDmMotor_velocity(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_overload
{
public:
  explicit Init_ReadDmMotor_overload(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  Init_ReadDmMotor_position overload(::custom_msgs::msg::ReadDmMotor::_overload_type arg)
  {
    msg_.overload = std::move(arg);
    return Init_ReadDmMotor_position(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_communication_lost
{
public:
  explicit Init_ReadDmMotor_communication_lost(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  Init_ReadDmMotor_overload communication_lost(::custom_msgs::msg::ReadDmMotor::_communication_lost_type arg)
  {
    msg_.communication_lost = std::move(arg);
    return Init_ReadDmMotor_overload(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_rotor_overtemperature
{
public:
  explicit Init_ReadDmMotor_rotor_overtemperature(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  Init_ReadDmMotor_communication_lost rotor_overtemperature(::custom_msgs::msg::ReadDmMotor::_rotor_overtemperature_type arg)
  {
    msg_.rotor_overtemperature = std::move(arg);
    return Init_ReadDmMotor_communication_lost(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_mos_overtemperature
{
public:
  explicit Init_ReadDmMotor_mos_overtemperature(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  Init_ReadDmMotor_rotor_overtemperature mos_overtemperature(::custom_msgs::msg::ReadDmMotor::_mos_overtemperature_type arg)
  {
    msg_.mos_overtemperature = std::move(arg);
    return Init_ReadDmMotor_rotor_overtemperature(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_overcurrent
{
public:
  explicit Init_ReadDmMotor_overcurrent(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  Init_ReadDmMotor_mos_overtemperature overcurrent(::custom_msgs::msg::ReadDmMotor::_overcurrent_type arg)
  {
    msg_.overcurrent = std::move(arg);
    return Init_ReadDmMotor_mos_overtemperature(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_undervoltage
{
public:
  explicit Init_ReadDmMotor_undervoltage(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  Init_ReadDmMotor_overcurrent undervoltage(::custom_msgs::msg::ReadDmMotor::_undervoltage_type arg)
  {
    msg_.undervoltage = std::move(arg);
    return Init_ReadDmMotor_overcurrent(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_overvoltage
{
public:
  explicit Init_ReadDmMotor_overvoltage(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  Init_ReadDmMotor_undervoltage overvoltage(::custom_msgs::msg::ReadDmMotor::_overvoltage_type arg)
  {
    msg_.overvoltage = std::move(arg);
    return Init_ReadDmMotor_undervoltage(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_enabled
{
public:
  explicit Init_ReadDmMotor_enabled(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  Init_ReadDmMotor_overvoltage enabled(::custom_msgs::msg::ReadDmMotor::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_ReadDmMotor_overvoltage(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_disabled
{
public:
  explicit Init_ReadDmMotor_disabled(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  Init_ReadDmMotor_enabled disabled(::custom_msgs::msg::ReadDmMotor::_disabled_type arg)
  {
    msg_.disabled = std::move(arg);
    return Init_ReadDmMotor_enabled(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_online
{
public:
  explicit Init_ReadDmMotor_online(::custom_msgs::msg::ReadDmMotor & msg)
  : msg_(msg)
  {}
  Init_ReadDmMotor_disabled online(::custom_msgs::msg::ReadDmMotor::_online_type arg)
  {
    msg_.online = std::move(arg);
    return Init_ReadDmMotor_disabled(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

class Init_ReadDmMotor_header
{
public:
  Init_ReadDmMotor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReadDmMotor_online header(::custom_msgs::msg::ReadDmMotor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ReadDmMotor_online(msg_);
  }

private:
  ::custom_msgs::msg::ReadDmMotor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::ReadDmMotor>()
{
  return custom_msgs::msg::builder::Init_ReadDmMotor_header();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__BUILDER_HPP_
