// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from msg_package:msg/NumList.idl
// generated code does not contain a copyright notice

#ifndef MSG_PACKAGE__MSG__DETAIL__NUM_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MSG_PACKAGE__MSG__DETAIL__NUM_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "msg_package/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "msg_package/msg/detail/num_list__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_package::msg::NumList & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_package
get_serialized_size(
  const msg_package::msg::NumList & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_package
max_serialized_size_NumList(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msg_package

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_package, msg, NumList)();

#ifdef __cplusplus
}
#endif

#endif  // MSG_PACKAGE__MSG__DETAIL__NUM_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
