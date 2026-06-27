// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/ReadDJIRC.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/read_djirc__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/read_djirc__struct.h"
#include "custom_msgs/msg/detail/read_djirc__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_custom_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ReadDJIRC__ros_msg_type = custom_msgs__msg__ReadDJIRC;

static bool _ReadDJIRC__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ReadDJIRC__ros_msg_type * ros_message = static_cast<const _ReadDJIRC__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: online
  {
    cdr << ros_message->online;
  }

  // Field name: left_x
  {
    cdr << ros_message->left_x;
  }

  // Field name: left_y
  {
    cdr << ros_message->left_y;
  }

  // Field name: right_x
  {
    cdr << ros_message->right_x;
  }

  // Field name: right_y
  {
    cdr << ros_message->right_y;
  }

  // Field name: dial
  {
    cdr << ros_message->dial;
  }

  // Field name: left_switch
  {
    cdr << ros_message->left_switch;
  }

  // Field name: right_switch
  {
    cdr << ros_message->right_switch;
  }

  // Field name: w
  {
    cdr << ros_message->w;
  }

  // Field name: s
  {
    cdr << ros_message->s;
  }

  // Field name: a
  {
    cdr << ros_message->a;
  }

  // Field name: d
  {
    cdr << ros_message->d;
  }

  // Field name: q
  {
    cdr << ros_message->q;
  }

  // Field name: e
  {
    cdr << ros_message->e;
  }

  // Field name: r
  {
    cdr << ros_message->r;
  }

  // Field name: f
  {
    cdr << ros_message->f;
  }

  // Field name: g
  {
    cdr << ros_message->g;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: c
  {
    cdr << ros_message->c;
  }

  // Field name: v
  {
    cdr << ros_message->v;
  }

  // Field name: b
  {
    cdr << ros_message->b;
  }

  // Field name: shift
  {
    cdr << ros_message->shift;
  }

  // Field name: ctrl
  {
    cdr << ros_message->ctrl;
  }

  // Field name: mouse_x
  {
    cdr << ros_message->mouse_x;
  }

  // Field name: mouse_y
  {
    cdr << ros_message->mouse_y;
  }

  // Field name: mouse_left_clicked
  {
    cdr << ros_message->mouse_left_clicked;
  }

  // Field name: mouse_right_clicked
  {
    cdr << ros_message->mouse_right_clicked;
  }

  return true;
}

static bool _ReadDJIRC__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ReadDJIRC__ros_msg_type * ros_message = static_cast<_ReadDJIRC__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: online
  {
    cdr >> ros_message->online;
  }

  // Field name: left_x
  {
    cdr >> ros_message->left_x;
  }

  // Field name: left_y
  {
    cdr >> ros_message->left_y;
  }

  // Field name: right_x
  {
    cdr >> ros_message->right_x;
  }

  // Field name: right_y
  {
    cdr >> ros_message->right_y;
  }

  // Field name: dial
  {
    cdr >> ros_message->dial;
  }

  // Field name: left_switch
  {
    cdr >> ros_message->left_switch;
  }

  // Field name: right_switch
  {
    cdr >> ros_message->right_switch;
  }

  // Field name: w
  {
    cdr >> ros_message->w;
  }

  // Field name: s
  {
    cdr >> ros_message->s;
  }

  // Field name: a
  {
    cdr >> ros_message->a;
  }

  // Field name: d
  {
    cdr >> ros_message->d;
  }

  // Field name: q
  {
    cdr >> ros_message->q;
  }

  // Field name: e
  {
    cdr >> ros_message->e;
  }

  // Field name: r
  {
    cdr >> ros_message->r;
  }

  // Field name: f
  {
    cdr >> ros_message->f;
  }

  // Field name: g
  {
    cdr >> ros_message->g;
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: c
  {
    cdr >> ros_message->c;
  }

  // Field name: v
  {
    cdr >> ros_message->v;
  }

  // Field name: b
  {
    cdr >> ros_message->b;
  }

  // Field name: shift
  {
    cdr >> ros_message->shift;
  }

  // Field name: ctrl
  {
    cdr >> ros_message->ctrl;
  }

  // Field name: mouse_x
  {
    cdr >> ros_message->mouse_x;
  }

  // Field name: mouse_y
  {
    cdr >> ros_message->mouse_y;
  }

  // Field name: mouse_left_clicked
  {
    cdr >> ros_message->mouse_left_clicked;
  }

  // Field name: mouse_right_clicked
  {
    cdr >> ros_message->mouse_right_clicked;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__ReadDJIRC(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ReadDJIRC__ros_msg_type * ros_message = static_cast<const _ReadDJIRC__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name online
  {
    size_t item_size = sizeof(ros_message->online);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_x
  {
    size_t item_size = sizeof(ros_message->left_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_y
  {
    size_t item_size = sizeof(ros_message->left_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_x
  {
    size_t item_size = sizeof(ros_message->right_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_y
  {
    size_t item_size = sizeof(ros_message->right_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dial
  {
    size_t item_size = sizeof(ros_message->dial);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_switch
  {
    size_t item_size = sizeof(ros_message->left_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_switch
  {
    size_t item_size = sizeof(ros_message->right_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name w
  {
    size_t item_size = sizeof(ros_message->w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name s
  {
    size_t item_size = sizeof(ros_message->s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a
  {
    size_t item_size = sizeof(ros_message->a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d
  {
    size_t item_size = sizeof(ros_message->d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name q
  {
    size_t item_size = sizeof(ros_message->q);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name e
  {
    size_t item_size = sizeof(ros_message->e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r
  {
    size_t item_size = sizeof(ros_message->r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name f
  {
    size_t item_size = sizeof(ros_message->f);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name g
  {
    size_t item_size = sizeof(ros_message->g);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name c
  {
    size_t item_size = sizeof(ros_message->c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v
  {
    size_t item_size = sizeof(ros_message->v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b
  {
    size_t item_size = sizeof(ros_message->b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shift
  {
    size_t item_size = sizeof(ros_message->shift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ctrl
  {
    size_t item_size = sizeof(ros_message->ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mouse_x
  {
    size_t item_size = sizeof(ros_message->mouse_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mouse_y
  {
    size_t item_size = sizeof(ros_message->mouse_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mouse_left_clicked
  {
    size_t item_size = sizeof(ros_message->mouse_left_clicked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mouse_right_clicked
  {
    size_t item_size = sizeof(ros_message->mouse_right_clicked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ReadDJIRC__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__ReadDJIRC(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__ReadDJIRC(
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

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: online
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dial
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_switch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_switch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: w
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: s
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: q
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: e
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: r
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: f
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: g
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: c
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: v
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: shift
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ctrl
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mouse_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mouse_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mouse_left_clicked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mouse_right_clicked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ReadDJIRC__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_msgs__msg__ReadDJIRC(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ReadDJIRC = {
  "custom_msgs::msg",
  "ReadDJIRC",
  _ReadDJIRC__cdr_serialize,
  _ReadDJIRC__cdr_deserialize,
  _ReadDJIRC__get_serialized_size,
  _ReadDJIRC__max_serialized_size
};

static rosidl_message_type_support_t _ReadDJIRC__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ReadDJIRC,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, ReadDJIRC)() {
  return &_ReadDJIRC__type_support;
}

#if defined(__cplusplus)
}
#endif
