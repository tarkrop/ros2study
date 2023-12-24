// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_package:msg/NumList.idl
// generated code does not contain a copyright notice

#ifndef MSG_PACKAGE__MSG__DETAIL__NUM_LIST__BUILDER_HPP_
#define MSG_PACKAGE__MSG__DETAIL__NUM_LIST__BUILDER_HPP_

#include "msg_package/msg/detail/num_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_package
{

namespace msg
{

namespace builder
{

class Init_NumList_second
{
public:
  explicit Init_NumList_second(::msg_package::msg::NumList & msg)
  : msg_(msg)
  {}
  ::msg_package::msg::NumList second(::msg_package::msg::NumList::_second_type arg)
  {
    msg_.second = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_package::msg::NumList msg_;
};

class Init_NumList_first
{
public:
  Init_NumList_first()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NumList_second first(::msg_package::msg::NumList::_first_type arg)
  {
    msg_.first = std::move(arg);
    return Init_NumList_second(msg_);
  }

private:
  ::msg_package::msg::NumList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_package::msg::NumList>()
{
  return msg_package::msg::builder::Init_NumList_first();
}

}  // namespace msg_package

#endif  // MSG_PACKAGE__MSG__DETAIL__NUM_LIST__BUILDER_HPP_
