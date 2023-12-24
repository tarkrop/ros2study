// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_package:msg/NumList.idl
// generated code does not contain a copyright notice

#ifndef MSG_PACKAGE__MSG__DETAIL__NUM_LIST__STRUCT_HPP_
#define MSG_PACKAGE__MSG__DETAIL__NUM_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__msg_package__msg__NumList __attribute__((deprecated))
#else
# define DEPRECATED__msg_package__msg__NumList __declspec(deprecated)
#endif

namespace msg_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NumList_
{
  using Type = NumList_<ContainerAllocator>;

  explicit NumList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first = 0l;
      this->second = 0l;
    }
  }

  explicit NumList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->first = 0l;
      this->second = 0l;
    }
  }

  // field types and members
  using _first_type =
    int32_t;
  _first_type first;
  using _second_type =
    int32_t;
  _second_type second;

  // setters for named parameter idiom
  Type & set__first(
    const int32_t & _arg)
  {
    this->first = _arg;
    return *this;
  }
  Type & set__second(
    const int32_t & _arg)
  {
    this->second = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_package::msg::NumList_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_package::msg::NumList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_package::msg::NumList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_package::msg::NumList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_package::msg::NumList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_package::msg::NumList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_package::msg::NumList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_package::msg::NumList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_package::msg::NumList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_package::msg::NumList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_package__msg__NumList
    std::shared_ptr<msg_package::msg::NumList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_package__msg__NumList
    std::shared_ptr<msg_package::msg::NumList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NumList_ & other) const
  {
    if (this->first != other.first) {
      return false;
    }
    if (this->second != other.second) {
      return false;
    }
    return true;
  }
  bool operator!=(const NumList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NumList_

// alias to use template instance with default allocator
using NumList =
  msg_package::msg::NumList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg_package

#endif  // MSG_PACKAGE__MSG__DETAIL__NUM_LIST__STRUCT_HPP_
