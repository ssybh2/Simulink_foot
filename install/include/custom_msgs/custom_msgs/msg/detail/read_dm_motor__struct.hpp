// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/ReadDmMotor.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__ReadDmMotor __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__ReadDmMotor __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReadDmMotor_
{
  using Type = ReadDmMotor_<ContainerAllocator>;

  explicit ReadDmMotor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->online = 0;
      this->disabled = 0;
      this->enabled = 0;
      this->overvoltage = 0;
      this->undervoltage = 0;
      this->overcurrent = 0;
      this->mos_overtemperature = 0;
      this->rotor_overtemperature = 0;
      this->communication_lost = 0;
      this->overload = 0;
      this->position = 0.0f;
      this->velocity = 0.0f;
      this->torque = 0.0f;
      this->mos_temperature = 0;
      this->rotor_temperature = 0;
    }
  }

  explicit ReadDmMotor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->online = 0;
      this->disabled = 0;
      this->enabled = 0;
      this->overvoltage = 0;
      this->undervoltage = 0;
      this->overcurrent = 0;
      this->mos_overtemperature = 0;
      this->rotor_overtemperature = 0;
      this->communication_lost = 0;
      this->overload = 0;
      this->position = 0.0f;
      this->velocity = 0.0f;
      this->torque = 0.0f;
      this->mos_temperature = 0;
      this->rotor_temperature = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _online_type =
    uint8_t;
  _online_type online;
  using _disabled_type =
    uint8_t;
  _disabled_type disabled;
  using _enabled_type =
    uint8_t;
  _enabled_type enabled;
  using _overvoltage_type =
    uint8_t;
  _overvoltage_type overvoltage;
  using _undervoltage_type =
    uint8_t;
  _undervoltage_type undervoltage;
  using _overcurrent_type =
    uint8_t;
  _overcurrent_type overcurrent;
  using _mos_overtemperature_type =
    uint8_t;
  _mos_overtemperature_type mos_overtemperature;
  using _rotor_overtemperature_type =
    uint8_t;
  _rotor_overtemperature_type rotor_overtemperature;
  using _communication_lost_type =
    uint8_t;
  _communication_lost_type communication_lost;
  using _overload_type =
    uint8_t;
  _overload_type overload;
  using _position_type =
    float;
  _position_type position;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _torque_type =
    float;
  _torque_type torque;
  using _mos_temperature_type =
    uint8_t;
  _mos_temperature_type mos_temperature;
  using _rotor_temperature_type =
    uint8_t;
  _rotor_temperature_type rotor_temperature;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__online(
    const uint8_t & _arg)
  {
    this->online = _arg;
    return *this;
  }
  Type & set__disabled(
    const uint8_t & _arg)
  {
    this->disabled = _arg;
    return *this;
  }
  Type & set__enabled(
    const uint8_t & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__overvoltage(
    const uint8_t & _arg)
  {
    this->overvoltage = _arg;
    return *this;
  }
  Type & set__undervoltage(
    const uint8_t & _arg)
  {
    this->undervoltage = _arg;
    return *this;
  }
  Type & set__overcurrent(
    const uint8_t & _arg)
  {
    this->overcurrent = _arg;
    return *this;
  }
  Type & set__mos_overtemperature(
    const uint8_t & _arg)
  {
    this->mos_overtemperature = _arg;
    return *this;
  }
  Type & set__rotor_overtemperature(
    const uint8_t & _arg)
  {
    this->rotor_overtemperature = _arg;
    return *this;
  }
  Type & set__communication_lost(
    const uint8_t & _arg)
  {
    this->communication_lost = _arg;
    return *this;
  }
  Type & set__overload(
    const uint8_t & _arg)
  {
    this->overload = _arg;
    return *this;
  }
  Type & set__position(
    const float & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__torque(
    const float & _arg)
  {
    this->torque = _arg;
    return *this;
  }
  Type & set__mos_temperature(
    const uint8_t & _arg)
  {
    this->mos_temperature = _arg;
    return *this;
  }
  Type & set__rotor_temperature(
    const uint8_t & _arg)
  {
    this->rotor_temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::ReadDmMotor_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::ReadDmMotor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::ReadDmMotor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::ReadDmMotor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::ReadDmMotor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::ReadDmMotor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::ReadDmMotor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::ReadDmMotor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::ReadDmMotor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::ReadDmMotor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__ReadDmMotor
    std::shared_ptr<custom_msgs::msg::ReadDmMotor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__ReadDmMotor
    std::shared_ptr<custom_msgs::msg::ReadDmMotor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadDmMotor_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->online != other.online) {
      return false;
    }
    if (this->disabled != other.disabled) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->overvoltage != other.overvoltage) {
      return false;
    }
    if (this->undervoltage != other.undervoltage) {
      return false;
    }
    if (this->overcurrent != other.overcurrent) {
      return false;
    }
    if (this->mos_overtemperature != other.mos_overtemperature) {
      return false;
    }
    if (this->rotor_overtemperature != other.rotor_overtemperature) {
      return false;
    }
    if (this->communication_lost != other.communication_lost) {
      return false;
    }
    if (this->overload != other.overload) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    if (this->mos_temperature != other.mos_temperature) {
      return false;
    }
    if (this->rotor_temperature != other.rotor_temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadDmMotor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadDmMotor_

// alias to use template instance with default allocator
using ReadDmMotor =
  custom_msgs::msg::ReadDmMotor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__READ_DM_MOTOR__STRUCT_HPP_
