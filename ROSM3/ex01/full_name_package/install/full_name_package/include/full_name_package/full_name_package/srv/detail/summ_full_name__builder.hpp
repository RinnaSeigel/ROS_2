// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from full_name_package:srv/SummFullName.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME_PACKAGE__SRV__DETAIL__SUMM_FULL_NAME__BUILDER_HPP_
#define FULL_NAME_PACKAGE__SRV__DETAIL__SUMM_FULL_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "full_name_package/srv/detail/summ_full_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace full_name_package
{

namespace srv
{

namespace builder
{

class Init_SummFullName_Request_middle_name
{
public:
  explicit Init_SummFullName_Request_middle_name(::full_name_package::srv::SummFullName_Request & msg)
  : msg_(msg)
  {}
  ::full_name_package::srv::SummFullName_Request middle_name(::full_name_package::srv::SummFullName_Request::_middle_name_type arg)
  {
    msg_.middle_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::full_name_package::srv::SummFullName_Request msg_;
};

class Init_SummFullName_Request_first_name
{
public:
  explicit Init_SummFullName_Request_first_name(::full_name_package::srv::SummFullName_Request & msg)
  : msg_(msg)
  {}
  Init_SummFullName_Request_middle_name first_name(::full_name_package::srv::SummFullName_Request::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return Init_SummFullName_Request_middle_name(msg_);
  }

private:
  ::full_name_package::srv::SummFullName_Request msg_;
};

class Init_SummFullName_Request_last_name
{
public:
  Init_SummFullName_Request_last_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SummFullName_Request_first_name last_name(::full_name_package::srv::SummFullName_Request::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_SummFullName_Request_first_name(msg_);
  }

private:
  ::full_name_package::srv::SummFullName_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::full_name_package::srv::SummFullName_Request>()
{
  return full_name_package::srv::builder::Init_SummFullName_Request_last_name();
}

}  // namespace full_name_package


namespace full_name_package
{

namespace srv
{

namespace builder
{

class Init_SummFullName_Response_full_name
{
public:
  Init_SummFullName_Response_full_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::full_name_package::srv::SummFullName_Response full_name(::full_name_package::srv::SummFullName_Response::_full_name_type arg)
  {
    msg_.full_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::full_name_package::srv::SummFullName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::full_name_package::srv::SummFullName_Response>()
{
  return full_name_package::srv::builder::Init_SummFullName_Response_full_name();
}

}  // namespace full_name_package

#endif  // FULL_NAME_PACKAGE__SRV__DETAIL__SUMM_FULL_NAME__BUILDER_HPP_
