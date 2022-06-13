// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from evpi_interfaces:msg/Mode.idl
// generated code does not contain a copyright notice
#include "evpi_interfaces/msg/detail/mode__rosidl_typesupport_fastrtps_cpp.hpp"
#include "evpi_interfaces/msg/detail/mode__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace evpi_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_evpi_interfaces
cdr_serialize(
  const evpi_interfaces::msg::Mode & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: strip_id
  cdr << ros_message.strip_id;
  // Member: mode
  cdr << ros_message.mode;
  // Member: red_value
  cdr << ros_message.red_value;
  // Member: green_value
  cdr << ros_message.green_value;
  // Member: blue_value
  cdr << ros_message.blue_value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_evpi_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  evpi_interfaces::msg::Mode & ros_message)
{
  // Member: strip_id
  cdr >> ros_message.strip_id;

  // Member: mode
  cdr >> ros_message.mode;

  // Member: red_value
  cdr >> ros_message.red_value;

  // Member: green_value
  cdr >> ros_message.green_value;

  // Member: blue_value
  cdr >> ros_message.blue_value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_evpi_interfaces
get_serialized_size(
  const evpi_interfaces::msg::Mode & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: strip_id
  {
    size_t item_size = sizeof(ros_message.strip_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red_value
  {
    size_t item_size = sizeof(ros_message.red_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: green_value
  {
    size_t item_size = sizeof(ros_message.green_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue_value
  {
    size_t item_size = sizeof(ros_message.blue_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_evpi_interfaces
max_serialized_size_Mode(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: strip_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: red_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: green_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: blue_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Mode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const evpi_interfaces::msg::Mode *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Mode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<evpi_interfaces::msg::Mode *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Mode__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const evpi_interfaces::msg::Mode *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Mode__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Mode(full_bounded, 0);
}

static message_type_support_callbacks_t _Mode__callbacks = {
  "evpi_interfaces::msg",
  "Mode",
  _Mode__cdr_serialize,
  _Mode__cdr_deserialize,
  _Mode__get_serialized_size,
  _Mode__max_serialized_size
};

static rosidl_message_type_support_t _Mode__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Mode__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace evpi_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_evpi_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<evpi_interfaces::msg::Mode>()
{
  return &evpi_interfaces::msg::typesupport_fastrtps_cpp::_Mode__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, evpi_interfaces, msg, Mode)() {
  return &evpi_interfaces::msg::typesupport_fastrtps_cpp::_Mode__handle;
}

#ifdef __cplusplus
}
#endif
