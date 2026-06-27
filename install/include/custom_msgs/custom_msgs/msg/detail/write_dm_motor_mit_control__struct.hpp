// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/WriteDmMotorMITControl.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__WRITE_DM_MOTOR_MIT_CONTROL__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__WRITE_DM_MOTOR_MIT_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__WriteDmMotorMITControl __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__WriteDmMotorMITControl __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WriteDmMotorMITControl_
{
  using Type = WriteDmMotorMITControl_<ContainerAllocator>;

  explicit WriteDmMotorMITControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = 0;
      this->p_des = 0.0f;
      this->v_des = 0.0f;
      this->kp = 0.0f;
      this->kd = 0.0f;
      this->torque = 0.0f;
    }
  }

  explicit WriteDmMotorMITControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = 0;
      this->p_des = 0.0f;
      this->v_des = 0.0f;
      this->kp = 0.0f;
      this->kd = 0.0f;
      this->torque = 0.0f;
    }
  }

  // field types and members
  using _enable_type =
    uint8_t;
  _enable_type enable;
  using _p_des_type =
    float;
  _p_des_type p_des;
  using _v_des_type =
    float;
  _v_des_type v_des;
  using _kp_type =
    float;
  _kp_type kp;
  using _kd_type =
    float;
  _kd_type kd;
  using _torque_type =
    float;
  _torque_type torque;

  // setters for named parameter idiom
  Type & set__enable(
    const uint8_t & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__p_des(
    const float & _arg)
  {
    this->p_des = _arg;
    return *this;
  }
  Type & set__v_des(
    const float & _arg)
  {
    this->v_des = _arg;
    return *this;
  }
  Type & set__kp(
    const float & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const float & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__torque(
    const float & _arg)
  {
    this->torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::WriteDmMotorMITControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::WriteDmMotorMITControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::WriteDmMotorMITControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::WriteDmMotorMITControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::WriteDmMotorMITControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::WriteDmMotorMITControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::WriteDmMotorMITControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::WriteDmMotorMITControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::WriteDmMotorMITControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::WriteDmMotorMITControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__WriteDmMotorMITControl
    std::shared_ptr<custom_msgs::msg::WriteDmMotorMITControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__WriteDmMotorMITControl
    std::shared_ptr<custom_msgs::msg::WriteDmMotorMITControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WriteDmMotorMITControl_ & other) const
  {
    if (this->enable != other.enable) {
      return false;
    }
    if (this->p_des != other.p_des) {
      return false;
    }
    if (this->v_des != other.v_des) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const WriteDmMotorMITControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WriteDmMotorMITControl_

// alias to use template instance with default allocator
using WriteDmMotorMITControl =
  custom_msgs::msg::WriteDmMotorMITControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__WRITE_DM_MOTOR_MIT_CONTROL__STRUCT_HPP_
