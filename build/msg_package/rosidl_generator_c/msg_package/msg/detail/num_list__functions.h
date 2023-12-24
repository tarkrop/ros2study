// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msg_package:msg/NumList.idl
// generated code does not contain a copyright notice

#ifndef MSG_PACKAGE__MSG__DETAIL__NUM_LIST__FUNCTIONS_H_
#define MSG_PACKAGE__MSG__DETAIL__NUM_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msg_package/msg/rosidl_generator_c__visibility_control.h"

#include "msg_package/msg/detail/num_list__struct.h"

/// Initialize msg/NumList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_package__msg__NumList
 * )) before or use
 * msg_package__msg__NumList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_package
bool
msg_package__msg__NumList__init(msg_package__msg__NumList * msg);

/// Finalize msg/NumList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_package
void
msg_package__msg__NumList__fini(msg_package__msg__NumList * msg);

/// Create msg/NumList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_package__msg__NumList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_package
msg_package__msg__NumList *
msg_package__msg__NumList__create();

/// Destroy msg/NumList message.
/**
 * It calls
 * msg_package__msg__NumList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_package
void
msg_package__msg__NumList__destroy(msg_package__msg__NumList * msg);

/// Check for msg/NumList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_package
bool
msg_package__msg__NumList__are_equal(const msg_package__msg__NumList * lhs, const msg_package__msg__NumList * rhs);

/// Copy a msg/NumList message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_package
bool
msg_package__msg__NumList__copy(
  const msg_package__msg__NumList * input,
  msg_package__msg__NumList * output);

/// Initialize array of msg/NumList messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_package__msg__NumList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_package
bool
msg_package__msg__NumList__Sequence__init(msg_package__msg__NumList__Sequence * array, size_t size);

/// Finalize array of msg/NumList messages.
/**
 * It calls
 * msg_package__msg__NumList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_package
void
msg_package__msg__NumList__Sequence__fini(msg_package__msg__NumList__Sequence * array);

/// Create array of msg/NumList messages.
/**
 * It allocates the memory for the array and calls
 * msg_package__msg__NumList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_package
msg_package__msg__NumList__Sequence *
msg_package__msg__NumList__Sequence__create(size_t size);

/// Destroy array of msg/NumList messages.
/**
 * It calls
 * msg_package__msg__NumList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_package
void
msg_package__msg__NumList__Sequence__destroy(msg_package__msg__NumList__Sequence * array);

/// Check for msg/NumList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_package
bool
msg_package__msg__NumList__Sequence__are_equal(const msg_package__msg__NumList__Sequence * lhs, const msg_package__msg__NumList__Sequence * rhs);

/// Copy an array of msg/NumList messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_package
bool
msg_package__msg__NumList__Sequence__copy(
  const msg_package__msg__NumList__Sequence * input,
  msg_package__msg__NumList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MSG_PACKAGE__MSG__DETAIL__NUM_LIST__FUNCTIONS_H_
