// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from full_name_package:msg/FullName.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME_PACKAGE__MSG__DETAIL__FULL_NAME__BUILDER_HPP_
#define FULL_NAME_PACKAGE__MSG__DETAIL__FULL_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "full_name_package/msg/detail/full_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace full_name_package
{

namespace msg
{

namespace builder
{

class Init_FullName_first_name
{
public:
  explicit Init_FullName_first_name(::full_name_package::msg::FullName & msg)
  : msg_(msg)
  {}
  ::full_name_package::msg::FullName first_name(::full_name_package::msg::FullName::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::full_name_package::msg::FullName msg_;
};

class Init_FullName_name
{
public:
  explicit Init_FullName_name(::full_name_package::msg::FullName & msg)
  : msg_(msg)
  {}
  Init_FullName_first_name name(::full_name_package::msg::FullName::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_FullName_first_name(msg_);
  }

private:
  ::full_name_package::msg::FullName msg_;
};

class Init_FullName_last_name
{
public:
  Init_FullName_last_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FullName_name last_name(::full_name_package::msg::FullName::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_FullName_name(msg_);
  }

private:
  ::full_name_package::msg::FullName msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::full_name_package::msg::FullName>()
{
  return full_name_package::msg::builder::Init_FullName_last_name();
}

}  // namespace full_name_package

#endif  // FULL_NAME_PACKAGE__MSG__DETAIL__FULL_NAME__BUILDER_HPP_
