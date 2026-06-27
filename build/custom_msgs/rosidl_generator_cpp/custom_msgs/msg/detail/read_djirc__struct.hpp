// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/ReadDJIRC.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__READ_DJIRC__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__READ_DJIRC__STRUCT_HPP_

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
# define DEPRECATED__custom_msgs__msg__ReadDJIRC __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__ReadDJIRC __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReadDJIRC_
{
  using Type = ReadDJIRC_<ContainerAllocator>;

  explicit ReadDJIRC_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->online = 0;
      this->left_x = 0.0f;
      this->left_y = 0.0f;
      this->right_x = 0.0f;
      this->right_y = 0.0f;
      this->dial = 0.0f;
      this->left_switch = 0;
      this->right_switch = 0;
      this->w = 0;
      this->s = 0;
      this->a = 0;
      this->d = 0;
      this->q = 0;
      this->e = 0;
      this->r = 0;
      this->f = 0;
      this->g = 0;
      this->z = 0;
      this->x = 0;
      this->c = 0;
      this->v = 0;
      this->b = 0;
      this->shift = 0;
      this->ctrl = 0;
      this->mouse_x = 0;
      this->mouse_y = 0;
      this->mouse_left_clicked = 0;
      this->mouse_right_clicked = 0;
    }
  }

  explicit ReadDJIRC_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->online = 0;
      this->left_x = 0.0f;
      this->left_y = 0.0f;
      this->right_x = 0.0f;
      this->right_y = 0.0f;
      this->dial = 0.0f;
      this->left_switch = 0;
      this->right_switch = 0;
      this->w = 0;
      this->s = 0;
      this->a = 0;
      this->d = 0;
      this->q = 0;
      this->e = 0;
      this->r = 0;
      this->f = 0;
      this->g = 0;
      this->z = 0;
      this->x = 0;
      this->c = 0;
      this->v = 0;
      this->b = 0;
      this->shift = 0;
      this->ctrl = 0;
      this->mouse_x = 0;
      this->mouse_y = 0;
      this->mouse_left_clicked = 0;
      this->mouse_right_clicked = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _online_type =
    uint8_t;
  _online_type online;
  using _left_x_type =
    float;
  _left_x_type left_x;
  using _left_y_type =
    float;
  _left_y_type left_y;
  using _right_x_type =
    float;
  _right_x_type right_x;
  using _right_y_type =
    float;
  _right_y_type right_y;
  using _dial_type =
    float;
  _dial_type dial;
  using _left_switch_type =
    uint8_t;
  _left_switch_type left_switch;
  using _right_switch_type =
    uint8_t;
  _right_switch_type right_switch;
  using _w_type =
    uint8_t;
  _w_type w;
  using _s_type =
    uint8_t;
  _s_type s;
  using _a_type =
    uint8_t;
  _a_type a;
  using _d_type =
    uint8_t;
  _d_type d;
  using _q_type =
    uint8_t;
  _q_type q;
  using _e_type =
    uint8_t;
  _e_type e;
  using _r_type =
    uint8_t;
  _r_type r;
  using _f_type =
    uint8_t;
  _f_type f;
  using _g_type =
    uint8_t;
  _g_type g;
  using _z_type =
    uint8_t;
  _z_type z;
  using _x_type =
    uint8_t;
  _x_type x;
  using _c_type =
    uint8_t;
  _c_type c;
  using _v_type =
    uint8_t;
  _v_type v;
  using _b_type =
    uint8_t;
  _b_type b;
  using _shift_type =
    uint8_t;
  _shift_type shift;
  using _ctrl_type =
    uint8_t;
  _ctrl_type ctrl;
  using _mouse_x_type =
    int16_t;
  _mouse_x_type mouse_x;
  using _mouse_y_type =
    int16_t;
  _mouse_y_type mouse_y;
  using _mouse_left_clicked_type =
    uint8_t;
  _mouse_left_clicked_type mouse_left_clicked;
  using _mouse_right_clicked_type =
    uint8_t;
  _mouse_right_clicked_type mouse_right_clicked;

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
  Type & set__left_x(
    const float & _arg)
  {
    this->left_x = _arg;
    return *this;
  }
  Type & set__left_y(
    const float & _arg)
  {
    this->left_y = _arg;
    return *this;
  }
  Type & set__right_x(
    const float & _arg)
  {
    this->right_x = _arg;
    return *this;
  }
  Type & set__right_y(
    const float & _arg)
  {
    this->right_y = _arg;
    return *this;
  }
  Type & set__dial(
    const float & _arg)
  {
    this->dial = _arg;
    return *this;
  }
  Type & set__left_switch(
    const uint8_t & _arg)
  {
    this->left_switch = _arg;
    return *this;
  }
  Type & set__right_switch(
    const uint8_t & _arg)
  {
    this->right_switch = _arg;
    return *this;
  }
  Type & set__w(
    const uint8_t & _arg)
  {
    this->w = _arg;
    return *this;
  }
  Type & set__s(
    const uint8_t & _arg)
  {
    this->s = _arg;
    return *this;
  }
  Type & set__a(
    const uint8_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__d(
    const uint8_t & _arg)
  {
    this->d = _arg;
    return *this;
  }
  Type & set__q(
    const uint8_t & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__e(
    const uint8_t & _arg)
  {
    this->e = _arg;
    return *this;
  }
  Type & set__r(
    const uint8_t & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__f(
    const uint8_t & _arg)
  {
    this->f = _arg;
    return *this;
  }
  Type & set__g(
    const uint8_t & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__z(
    const uint8_t & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__x(
    const uint8_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__c(
    const uint8_t & _arg)
  {
    this->c = _arg;
    return *this;
  }
  Type & set__v(
    const uint8_t & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__b(
    const uint8_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__shift(
    const uint8_t & _arg)
  {
    this->shift = _arg;
    return *this;
  }
  Type & set__ctrl(
    const uint8_t & _arg)
  {
    this->ctrl = _arg;
    return *this;
  }
  Type & set__mouse_x(
    const int16_t & _arg)
  {
    this->mouse_x = _arg;
    return *this;
  }
  Type & set__mouse_y(
    const int16_t & _arg)
  {
    this->mouse_y = _arg;
    return *this;
  }
  Type & set__mouse_left_clicked(
    const uint8_t & _arg)
  {
    this->mouse_left_clicked = _arg;
    return *this;
  }
  Type & set__mouse_right_clicked(
    const uint8_t & _arg)
  {
    this->mouse_right_clicked = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::ReadDJIRC_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::ReadDJIRC_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::ReadDJIRC_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::ReadDJIRC_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::ReadDJIRC_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::ReadDJIRC_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::ReadDJIRC_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::ReadDJIRC_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::ReadDJIRC_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::ReadDJIRC_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__ReadDJIRC
    std::shared_ptr<custom_msgs::msg::ReadDJIRC_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__ReadDJIRC
    std::shared_ptr<custom_msgs::msg::ReadDJIRC_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadDJIRC_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->online != other.online) {
      return false;
    }
    if (this->left_x != other.left_x) {
      return false;
    }
    if (this->left_y != other.left_y) {
      return false;
    }
    if (this->right_x != other.right_x) {
      return false;
    }
    if (this->right_y != other.right_y) {
      return false;
    }
    if (this->dial != other.dial) {
      return false;
    }
    if (this->left_switch != other.left_switch) {
      return false;
    }
    if (this->right_switch != other.right_switch) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    if (this->s != other.s) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->e != other.e) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->f != other.f) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->c != other.c) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->shift != other.shift) {
      return false;
    }
    if (this->ctrl != other.ctrl) {
      return false;
    }
    if (this->mouse_x != other.mouse_x) {
      return false;
    }
    if (this->mouse_y != other.mouse_y) {
      return false;
    }
    if (this->mouse_left_clicked != other.mouse_left_clicked) {
      return false;
    }
    if (this->mouse_right_clicked != other.mouse_right_clicked) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadDJIRC_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadDJIRC_

// alias to use template instance with default allocator
using ReadDJIRC =
  custom_msgs::msg::ReadDJIRC_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__READ_DJIRC__STRUCT_HPP_
