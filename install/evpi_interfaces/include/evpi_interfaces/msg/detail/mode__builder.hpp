// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from evpi_interfaces:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef EVPI_INTERFACES__MSG__DETAIL__MODE__BUILDER_HPP_
#define EVPI_INTERFACES__MSG__DETAIL__MODE__BUILDER_HPP_

#include "evpi_interfaces/msg/detail/mode__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace evpi_interfaces
{

namespace msg
{

namespace builder
{

class Init_Mode_blue_value
{
public:
  explicit Init_Mode_blue_value(::evpi_interfaces::msg::Mode & msg)
  : msg_(msg)
  {}
  ::evpi_interfaces::msg::Mode blue_value(::evpi_interfaces::msg::Mode::_blue_value_type arg)
  {
    msg_.blue_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::evpi_interfaces::msg::Mode msg_;
};

class Init_Mode_green_value
{
public:
  explicit Init_Mode_green_value(::evpi_interfaces::msg::Mode & msg)
  : msg_(msg)
  {}
  Init_Mode_blue_value green_value(::evpi_interfaces::msg::Mode::_green_value_type arg)
  {
    msg_.green_value = std::move(arg);
    return Init_Mode_blue_value(msg_);
  }

private:
  ::evpi_interfaces::msg::Mode msg_;
};

class Init_Mode_red_value
{
public:
  explicit Init_Mode_red_value(::evpi_interfaces::msg::Mode & msg)
  : msg_(msg)
  {}
  Init_Mode_green_value red_value(::evpi_interfaces::msg::Mode::_red_value_type arg)
  {
    msg_.red_value = std::move(arg);
    return Init_Mode_green_value(msg_);
  }

private:
  ::evpi_interfaces::msg::Mode msg_;
};

class Init_Mode_mode
{
public:
  explicit Init_Mode_mode(::evpi_interfaces::msg::Mode & msg)
  : msg_(msg)
  {}
  Init_Mode_red_value mode(::evpi_interfaces::msg::Mode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_Mode_red_value(msg_);
  }

private:
  ::evpi_interfaces::msg::Mode msg_;
};

class Init_Mode_strip_id
{
public:
  Init_Mode_strip_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mode_mode strip_id(::evpi_interfaces::msg::Mode::_strip_id_type arg)
  {
    msg_.strip_id = std::move(arg);
    return Init_Mode_mode(msg_);
  }

private:
  ::evpi_interfaces::msg::Mode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::evpi_interfaces::msg::Mode>()
{
  return evpi_interfaces::msg::builder::Init_Mode_strip_id();
}

}  // namespace evpi_interfaces

#endif  // EVPI_INTERFACES__MSG__DETAIL__MODE__BUILDER_HPP_
