// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/WriteDmMotorMITControl.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__WRITE_DM_MOTOR_MIT_CONTROL__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__WRITE_DM_MOTOR_MIT_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/write_dm_motor_mit_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_WriteDmMotorMITControl_torque
{
public:
  explicit Init_WriteDmMotorMITControl_torque(::custom_msgs::msg::WriteDmMotorMITControl & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::WriteDmMotorMITControl torque(::custom_msgs::msg::WriteDmMotorMITControl::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::WriteDmMotorMITControl msg_;
};

class Init_WriteDmMotorMITControl_kd
{
public:
  explicit Init_WriteDmMotorMITControl_kd(::custom_msgs::msg::WriteDmMotorMITControl & msg)
  : msg_(msg)
  {}
  Init_WriteDmMotorMITControl_torque kd(::custom_msgs::msg::WriteDmMotorMITControl::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_WriteDmMotorMITControl_torque(msg_);
  }

private:
  ::custom_msgs::msg::WriteDmMotorMITControl msg_;
};

class Init_WriteDmMotorMITControl_kp
{
public:
  explicit Init_WriteDmMotorMITControl_kp(::custom_msgs::msg::WriteDmMotorMITControl & msg)
  : msg_(msg)
  {}
  Init_WriteDmMotorMITControl_kd kp(::custom_msgs::msg::WriteDmMotorMITControl::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_WriteDmMotorMITControl_kd(msg_);
  }

private:
  ::custom_msgs::msg::WriteDmMotorMITControl msg_;
};

class Init_WriteDmMotorMITControl_v_des
{
public:
  explicit Init_WriteDmMotorMITControl_v_des(::custom_msgs::msg::WriteDmMotorMITControl & msg)
  : msg_(msg)
  {}
  Init_WriteDmMotorMITControl_kp v_des(::custom_msgs::msg::WriteDmMotorMITControl::_v_des_type arg)
  {
    msg_.v_des = std::move(arg);
    return Init_WriteDmMotorMITControl_kp(msg_);
  }

private:
  ::custom_msgs::msg::WriteDmMotorMITControl msg_;
};

class Init_WriteDmMotorMITControl_p_des
{
public:
  explicit Init_WriteDmMotorMITControl_p_des(::custom_msgs::msg::WriteDmMotorMITControl & msg)
  : msg_(msg)
  {}
  Init_WriteDmMotorMITControl_v_des p_des(::custom_msgs::msg::WriteDmMotorMITControl::_p_des_type arg)
  {
    msg_.p_des = std::move(arg);
    return Init_WriteDmMotorMITControl_v_des(msg_);
  }

private:
  ::custom_msgs::msg::WriteDmMotorMITControl msg_;
};

class Init_WriteDmMotorMITControl_enable
{
public:
  Init_WriteDmMotorMITControl_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WriteDmMotorMITControl_p_des enable(::custom_msgs::msg::WriteDmMotorMITControl::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_WriteDmMotorMITControl_p_des(msg_);
  }

private:
  ::custom_msgs::msg::WriteDmMotorMITControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::WriteDmMotorMITControl>()
{
  return custom_msgs::msg::builder::Init_WriteDmMotorMITControl_enable();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__WRITE_DM_MOTOR_MIT_CONTROL__BUILDER_HPP_
