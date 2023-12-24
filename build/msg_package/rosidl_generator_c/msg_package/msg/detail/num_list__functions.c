// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_package:msg/NumList.idl
// generated code does not contain a copyright notice
#include "msg_package/msg/detail/num_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
msg_package__msg__NumList__init(msg_package__msg__NumList * msg)
{
  if (!msg) {
    return false;
  }
  // first
  // second
  return true;
}

void
msg_package__msg__NumList__fini(msg_package__msg__NumList * msg)
{
  if (!msg) {
    return;
  }
  // first
  // second
}

bool
msg_package__msg__NumList__are_equal(const msg_package__msg__NumList * lhs, const msg_package__msg__NumList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // first
  if (lhs->first != rhs->first) {
    return false;
  }
  // second
  if (lhs->second != rhs->second) {
    return false;
  }
  return true;
}

bool
msg_package__msg__NumList__copy(
  const msg_package__msg__NumList * input,
  msg_package__msg__NumList * output)
{
  if (!input || !output) {
    return false;
  }
  // first
  output->first = input->first;
  // second
  output->second = input->second;
  return true;
}

msg_package__msg__NumList *
msg_package__msg__NumList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_package__msg__NumList * msg = (msg_package__msg__NumList *)allocator.allocate(sizeof(msg_package__msg__NumList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_package__msg__NumList));
  bool success = msg_package__msg__NumList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_package__msg__NumList__destroy(msg_package__msg__NumList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_package__msg__NumList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_package__msg__NumList__Sequence__init(msg_package__msg__NumList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_package__msg__NumList * data = NULL;

  if (size) {
    data = (msg_package__msg__NumList *)allocator.zero_allocate(size, sizeof(msg_package__msg__NumList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_package__msg__NumList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_package__msg__NumList__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_package__msg__NumList__Sequence__fini(msg_package__msg__NumList__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_package__msg__NumList__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_package__msg__NumList__Sequence *
msg_package__msg__NumList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_package__msg__NumList__Sequence * array = (msg_package__msg__NumList__Sequence *)allocator.allocate(sizeof(msg_package__msg__NumList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_package__msg__NumList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_package__msg__NumList__Sequence__destroy(msg_package__msg__NumList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_package__msg__NumList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_package__msg__NumList__Sequence__are_equal(const msg_package__msg__NumList__Sequence * lhs, const msg_package__msg__NumList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_package__msg__NumList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_package__msg__NumList__Sequence__copy(
  const msg_package__msg__NumList__Sequence * input,
  msg_package__msg__NumList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_package__msg__NumList);
    msg_package__msg__NumList * data =
      (msg_package__msg__NumList *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_package__msg__NumList__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          msg_package__msg__NumList__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_package__msg__NumList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
