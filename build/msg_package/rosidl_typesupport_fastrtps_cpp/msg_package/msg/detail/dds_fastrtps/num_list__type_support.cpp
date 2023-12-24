// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from msg_package:msg/NumList.idl
// generated code does not contain a copyright notice
#include "msg_package/msg/detail/num_list__rosidl_typesupport_fastrtps_cpp.hpp"
#include "msg_package/msg/detail/num_list__struct.hpp"

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

namespace msg_package
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_package
cdr_serialize(
  const msg_package::msg::NumList & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: first
  cdr << ros_message.first;
  // Member: second
  cdr << ros_message.second;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_package::msg::NumList & ros_message)
{
  // Member: first
  cdr >> ros_message.first;

  // Member: second
  cdr >> ros_message.second;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_package
get_serialized_size(
  const msg_package::msg::NumList & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: first
  {
    size_t item_size = sizeof(ros_message.first);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: second
  {
    size_t item_size = sizeof(ros_message.second);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_package
max_serialized_size_NumList(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: first
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: second
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _NumList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const msg_package::msg::NumList *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NumList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_package::msg::NumList *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NumList__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_package::msg::NumList *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NumList__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NumList(full_bounded, 0);
}

static message_type_support_callbacks_t _NumList__callbacks = {
  "msg_package::msg",
  "NumList",
  _NumList__cdr_serialize,
  _NumList__cdr_deserialize,
  _NumList__get_serialized_size,
  _NumList__max_serialized_size
};

static rosidl_message_type_support_t _NumList__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NumList__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msg_package

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msg_package
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_package::msg::NumList>()
{
  return &msg_package::msg::typesupport_fastrtps_cpp::_NumList__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_package, msg, NumList)() {
  return &msg_package::msg::typesupport_fastrtps_cpp::_NumList__handle;
}

#ifdef __cplusplus
}
#endif
