// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from full_name_package:srv/SummFullName.idl
// generated code does not contain a copyright notice
#include "full_name_package/srv/detail/summ_full_name__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "full_name_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "full_name_package/srv/detail/summ_full_name__struct.h"
#include "full_name_package/srv/detail/summ_full_name__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // first_name, last_name, middle_name
#include "rosidl_runtime_c/string_functions.h"  // first_name, last_name, middle_name

// forward declare type support functions


using _SummFullName_Request__ros_msg_type = full_name_package__srv__SummFullName_Request;

static bool _SummFullName_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SummFullName_Request__ros_msg_type * ros_message = static_cast<const _SummFullName_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: last_name
  {
    const rosidl_runtime_c__String * str = &ros_message->last_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: first_name
  {
    const rosidl_runtime_c__String * str = &ros_message->first_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: middle_name
  {
    const rosidl_runtime_c__String * str = &ros_message->middle_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SummFullName_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SummFullName_Request__ros_msg_type * ros_message = static_cast<_SummFullName_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: last_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->last_name.data) {
      rosidl_runtime_c__String__init(&ros_message->last_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->last_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'last_name'\n");
      return false;
    }
  }

  // Field name: first_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->first_name.data) {
      rosidl_runtime_c__String__init(&ros_message->first_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->first_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'first_name'\n");
      return false;
    }
  }

  // Field name: middle_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->middle_name.data) {
      rosidl_runtime_c__String__init(&ros_message->middle_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->middle_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'middle_name'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_full_name_package
size_t get_serialized_size_full_name_package__srv__SummFullName_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SummFullName_Request__ros_msg_type * ros_message = static_cast<const _SummFullName_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name last_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->last_name.size + 1);
  // field.name first_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->first_name.size + 1);
  // field.name middle_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->middle_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SummFullName_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_full_name_package__srv__SummFullName_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_full_name_package
size_t max_serialized_size_full_name_package__srv__SummFullName_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: last_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: first_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: middle_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = full_name_package__srv__SummFullName_Request;
    is_plain =
      (
      offsetof(DataType, middle_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SummFullName_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_full_name_package__srv__SummFullName_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SummFullName_Request = {
  "full_name_package::srv",
  "SummFullName_Request",
  _SummFullName_Request__cdr_serialize,
  _SummFullName_Request__cdr_deserialize,
  _SummFullName_Request__get_serialized_size,
  _SummFullName_Request__max_serialized_size
};

static rosidl_message_type_support_t _SummFullName_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SummFullName_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, full_name_package, srv, SummFullName_Request)() {
  return &_SummFullName_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "full_name_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "full_name_package/srv/detail/summ_full_name__struct.h"
// already included above
// #include "full_name_package/srv/detail/summ_full_name__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // full_name
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // full_name

// forward declare type support functions


using _SummFullName_Response__ros_msg_type = full_name_package__srv__SummFullName_Response;

static bool _SummFullName_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SummFullName_Response__ros_msg_type * ros_message = static_cast<const _SummFullName_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: full_name
  {
    const rosidl_runtime_c__String * str = &ros_message->full_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SummFullName_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SummFullName_Response__ros_msg_type * ros_message = static_cast<_SummFullName_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: full_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->full_name.data) {
      rosidl_runtime_c__String__init(&ros_message->full_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->full_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'full_name'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_full_name_package
size_t get_serialized_size_full_name_package__srv__SummFullName_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SummFullName_Response__ros_msg_type * ros_message = static_cast<const _SummFullName_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name full_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->full_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SummFullName_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_full_name_package__srv__SummFullName_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_full_name_package
size_t max_serialized_size_full_name_package__srv__SummFullName_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: full_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = full_name_package__srv__SummFullName_Response;
    is_plain =
      (
      offsetof(DataType, full_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SummFullName_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_full_name_package__srv__SummFullName_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SummFullName_Response = {
  "full_name_package::srv",
  "SummFullName_Response",
  _SummFullName_Response__cdr_serialize,
  _SummFullName_Response__cdr_deserialize,
  _SummFullName_Response__get_serialized_size,
  _SummFullName_Response__max_serialized_size
};

static rosidl_message_type_support_t _SummFullName_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SummFullName_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, full_name_package, srv, SummFullName_Response)() {
  return &_SummFullName_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "full_name_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "full_name_package/srv/summ_full_name.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SummFullName__callbacks = {
  "full_name_package::srv",
  "SummFullName",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, full_name_package, srv, SummFullName_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, full_name_package, srv, SummFullName_Response)(),
};

static rosidl_service_type_support_t SummFullName__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SummFullName__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, full_name_package, srv, SummFullName)() {
  return &SummFullName__handle;
}

#if defined(__cplusplus)
}
#endif
