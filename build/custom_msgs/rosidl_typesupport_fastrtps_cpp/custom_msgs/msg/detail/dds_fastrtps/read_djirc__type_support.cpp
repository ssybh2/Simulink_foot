// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/ReadDJIRC.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/read_djirc__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/read_djirc__struct.hpp"

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
  const custom_msgs::msg::ReadDJIRC & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: online
  cdr << ros_message.online;
  // Member: left_x
  cdr << ros_message.left_x;
  // Member: left_y
  cdr << ros_message.left_y;
  // Member: right_x
  cdr << ros_message.right_x;
  // Member: right_y
  cdr << ros_message.right_y;
  // Member: dial
  cdr << ros_message.dial;
  // Member: left_switch
  cdr << ros_message.left_switch;
  // Member: right_switch
  cdr << ros_message.right_switch;
  // Member: w
  cdr << ros_message.w;
  // Member: s
  cdr << ros_message.s;
  // Member: a
  cdr << ros_message.a;
  // Member: d
  cdr << ros_message.d;
  // Member: q
  cdr << ros_message.q;
  // Member: e
  cdr << ros_message.e;
  // Member: r
  cdr << ros_message.r;
  // Member: f
  cdr << ros_message.f;
  // Member: g
  cdr << ros_message.g;
  // Member: z
  cdr << ros_message.z;
  // Member: x
  cdr << ros_message.x;
  // Member: c
  cdr << ros_message.c;
  // Member: v
  cdr << ros_message.v;
  // Member: b
  cdr << ros_message.b;
  // Member: shift
  cdr << ros_message.shift;
  // Member: ctrl
  cdr << ros_message.ctrl;
  // Member: mouse_x
  cdr << ros_message.mouse_x;
  // Member: mouse_y
  cdr << ros_message.mouse_y;
  // Member: mouse_left_clicked
  cdr << ros_message.mouse_left_clicked;
  // Member: mouse_right_clicked
  cdr << ros_message.mouse_right_clicked;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::ReadDJIRC & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: online
  cdr >> ros_message.online;

  // Member: left_x
  cdr >> ros_message.left_x;

  // Member: left_y
  cdr >> ros_message.left_y;

  // Member: right_x
  cdr >> ros_message.right_x;

  // Member: right_y
  cdr >> ros_message.right_y;

  // Member: dial
  cdr >> ros_message.dial;

  // Member: left_switch
  cdr >> ros_message.left_switch;

  // Member: right_switch
  cdr >> ros_message.right_switch;

  // Member: w
  cdr >> ros_message.w;

  // Member: s
  cdr >> ros_message.s;

  // Member: a
  cdr >> ros_message.a;

  // Member: d
  cdr >> ros_message.d;

  // Member: q
  cdr >> ros_message.q;

  // Member: e
  cdr >> ros_message.e;

  // Member: r
  cdr >> ros_message.r;

  // Member: f
  cdr >> ros_message.f;

  // Member: g
  cdr >> ros_message.g;

  // Member: z
  cdr >> ros_message.z;

  // Member: x
  cdr >> ros_message.x;

  // Member: c
  cdr >> ros_message.c;

  // Member: v
  cdr >> ros_message.v;

  // Member: b
  cdr >> ros_message.b;

  // Member: shift
  cdr >> ros_message.shift;

  // Member: ctrl
  cdr >> ros_message.ctrl;

  // Member: mouse_x
  cdr >> ros_message.mouse_x;

  // Member: mouse_y
  cdr >> ros_message.mouse_y;

  // Member: mouse_left_clicked
  cdr >> ros_message.mouse_left_clicked;

  // Member: mouse_right_clicked
  cdr >> ros_message.mouse_right_clicked;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::ReadDJIRC & ros_message,
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
  // Member: left_x
  {
    size_t item_size = sizeof(ros_message.left_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_y
  {
    size_t item_size = sizeof(ros_message.left_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_x
  {
    size_t item_size = sizeof(ros_message.right_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_y
  {
    size_t item_size = sizeof(ros_message.right_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dial
  {
    size_t item_size = sizeof(ros_message.dial);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_switch
  {
    size_t item_size = sizeof(ros_message.left_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_switch
  {
    size_t item_size = sizeof(ros_message.right_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: w
  {
    size_t item_size = sizeof(ros_message.w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: s
  {
    size_t item_size = sizeof(ros_message.s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a
  {
    size_t item_size = sizeof(ros_message.a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: d
  {
    size_t item_size = sizeof(ros_message.d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: q
  {
    size_t item_size = sizeof(ros_message.q);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: e
  {
    size_t item_size = sizeof(ros_message.e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: r
  {
    size_t item_size = sizeof(ros_message.r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: f
  {
    size_t item_size = sizeof(ros_message.f);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: g
  {
    size_t item_size = sizeof(ros_message.g);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z
  {
    size_t item_size = sizeof(ros_message.z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x
  {
    size_t item_size = sizeof(ros_message.x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: c
  {
    size_t item_size = sizeof(ros_message.c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: v
  {
    size_t item_size = sizeof(ros_message.v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b
  {
    size_t item_size = sizeof(ros_message.b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shift
  {
    size_t item_size = sizeof(ros_message.shift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ctrl
  {
    size_t item_size = sizeof(ros_message.ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mouse_x
  {
    size_t item_size = sizeof(ros_message.mouse_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mouse_y
  {
    size_t item_size = sizeof(ros_message.mouse_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mouse_left_clicked
  {
    size_t item_size = sizeof(ros_message.mouse_left_clicked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mouse_right_clicked
  {
    size_t item_size = sizeof(ros_message.mouse_right_clicked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_ReadDJIRC(
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

  // Member: left_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dial
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_switch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_switch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: s
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: q
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: f
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: g
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: c
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: v
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: shift
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ctrl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mouse_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mouse_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mouse_left_clicked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mouse_right_clicked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ReadDJIRC__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::ReadDJIRC *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ReadDJIRC__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::ReadDJIRC *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ReadDJIRC__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::ReadDJIRC *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ReadDJIRC__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ReadDJIRC(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ReadDJIRC__callbacks = {
  "custom_msgs::msg",
  "ReadDJIRC",
  _ReadDJIRC__cdr_serialize,
  _ReadDJIRC__cdr_deserialize,
  _ReadDJIRC__get_serialized_size,
  _ReadDJIRC__max_serialized_size
};

static rosidl_message_type_support_t _ReadDJIRC__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ReadDJIRC__callbacks,
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
get_message_type_support_handle<custom_msgs::msg::ReadDJIRC>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_ReadDJIRC__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, ReadDJIRC)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_ReadDJIRC__handle;
}

#ifdef __cplusplus
}
#endif
