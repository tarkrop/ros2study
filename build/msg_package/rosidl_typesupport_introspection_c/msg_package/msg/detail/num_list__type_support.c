// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_package:msg/NumList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_package/msg/detail/num_list__rosidl_typesupport_introspection_c.h"
#include "msg_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_package/msg/detail/num_list__functions.h"
#include "msg_package/msg/detail/num_list__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void NumList__rosidl_typesupport_introspection_c__NumList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_package__msg__NumList__init(message_memory);
}

void NumList__rosidl_typesupport_introspection_c__NumList_fini_function(void * message_memory)
{
  msg_package__msg__NumList__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NumList__rosidl_typesupport_introspection_c__NumList_message_member_array[2] = {
  {
    "first",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_package__msg__NumList, first),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_package__msg__NumList, second),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NumList__rosidl_typesupport_introspection_c__NumList_message_members = {
  "msg_package__msg",  // message namespace
  "NumList",  // message name
  2,  // number of fields
  sizeof(msg_package__msg__NumList),
  NumList__rosidl_typesupport_introspection_c__NumList_message_member_array,  // message members
  NumList__rosidl_typesupport_introspection_c__NumList_init_function,  // function to initialize message memory (memory has to be allocated)
  NumList__rosidl_typesupport_introspection_c__NumList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NumList__rosidl_typesupport_introspection_c__NumList_message_type_support_handle = {
  0,
  &NumList__rosidl_typesupport_introspection_c__NumList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_package, msg, NumList)() {
  if (!NumList__rosidl_typesupport_introspection_c__NumList_message_type_support_handle.typesupport_identifier) {
    NumList__rosidl_typesupport_introspection_c__NumList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NumList__rosidl_typesupport_introspection_c__NumList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
