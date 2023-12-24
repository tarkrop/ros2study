// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_package:msg/NumList.idl
// generated code does not contain a copyright notice

#ifndef MSG_PACKAGE__MSG__DETAIL__NUM_LIST__STRUCT_H_
#define MSG_PACKAGE__MSG__DETAIL__NUM_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/NumList in the package msg_package.
typedef struct msg_package__msg__NumList
{
  int32_t first;
  int32_t second;
} msg_package__msg__NumList;

// Struct for a sequence of msg_package__msg__NumList.
typedef struct msg_package__msg__NumList__Sequence
{
  msg_package__msg__NumList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_package__msg__NumList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_PACKAGE__MSG__DETAIL__NUM_LIST__STRUCT_H_
