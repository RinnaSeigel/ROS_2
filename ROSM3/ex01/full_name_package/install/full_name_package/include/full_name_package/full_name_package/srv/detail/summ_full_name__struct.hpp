// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from full_name_package:srv/SummFullName.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME_PACKAGE__SRV__DETAIL__SUMM_FULL_NAME__STRUCT_HPP_
#define FULL_NAME_PACKAGE__SRV__DETAIL__SUMM_FULL_NAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__full_name_package__srv__SummFullName_Request __attribute__((deprecated))
#else
# define DEPRECATED__full_name_package__srv__SummFullName_Request __declspec(deprecated)
#endif

namespace full_name_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SummFullName_Request_
{
  using Type = SummFullName_Request_<ContainerAllocator>;

  explicit SummFullName_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->last_name = "";
      this->first_name = "";
      this->middle_name = "";
    }
  }

  explicit SummFullName_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : last_name(_alloc),
    first_name(_alloc),
    middle_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->last_name = "";
      this->first_name = "";
      this->middle_name = "";
    }
  }

  // field types and members
  using _last_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _last_name_type last_name;
  using _first_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _first_name_type first_name;
  using _middle_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _middle_name_type middle_name;

  // setters for named parameter idiom
  Type & set__last_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->last_name = _arg;
    return *this;
  }
  Type & set__first_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->first_name = _arg;
    return *this;
  }
  Type & set__middle_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->middle_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    full_name_package::srv::SummFullName_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const full_name_package::srv::SummFullName_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<full_name_package::srv::SummFullName_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<full_name_package::srv::SummFullName_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      full_name_package::srv::SummFullName_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<full_name_package::srv::SummFullName_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      full_name_package::srv::SummFullName_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<full_name_package::srv::SummFullName_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<full_name_package::srv::SummFullName_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<full_name_package::srv::SummFullName_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__full_name_package__srv__SummFullName_Request
    std::shared_ptr<full_name_package::srv::SummFullName_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__full_name_package__srv__SummFullName_Request
    std::shared_ptr<full_name_package::srv::SummFullName_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SummFullName_Request_ & other) const
  {
    if (this->last_name != other.last_name) {
      return false;
    }
    if (this->first_name != other.first_name) {
      return false;
    }
    if (this->middle_name != other.middle_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SummFullName_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SummFullName_Request_

// alias to use template instance with default allocator
using SummFullName_Request =
  full_name_package::srv::SummFullName_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace full_name_package


#ifndef _WIN32
# define DEPRECATED__full_name_package__srv__SummFullName_Response __attribute__((deprecated))
#else
# define DEPRECATED__full_name_package__srv__SummFullName_Response __declspec(deprecated)
#endif

namespace full_name_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SummFullName_Response_
{
  using Type = SummFullName_Response_<ContainerAllocator>;

  explicit SummFullName_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->full_name = "";
    }
  }

  explicit SummFullName_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : full_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->full_name = "";
    }
  }

  // field types and members
  using _full_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _full_name_type full_name;

  // setters for named parameter idiom
  Type & set__full_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->full_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    full_name_package::srv::SummFullName_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const full_name_package::srv::SummFullName_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<full_name_package::srv::SummFullName_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<full_name_package::srv::SummFullName_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      full_name_package::srv::SummFullName_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<full_name_package::srv::SummFullName_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      full_name_package::srv::SummFullName_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<full_name_package::srv::SummFullName_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<full_name_package::srv::SummFullName_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<full_name_package::srv::SummFullName_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__full_name_package__srv__SummFullName_Response
    std::shared_ptr<full_name_package::srv::SummFullName_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__full_name_package__srv__SummFullName_Response
    std::shared_ptr<full_name_package::srv::SummFullName_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SummFullName_Response_ & other) const
  {
    if (this->full_name != other.full_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SummFullName_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SummFullName_Response_

// alias to use template instance with default allocator
using SummFullName_Response =
  full_name_package::srv::SummFullName_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace full_name_package

namespace full_name_package
{

namespace srv
{

struct SummFullName
{
  using Request = full_name_package::srv::SummFullName_Request;
  using Response = full_name_package::srv::SummFullName_Response;
};

}  // namespace srv

}  // namespace full_name_package

#endif  // FULL_NAME_PACKAGE__SRV__DETAIL__SUMM_FULL_NAME__STRUCT_HPP_
