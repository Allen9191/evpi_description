// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from evpi_interfaces:msg/MultiRange.idl
// generated code does not contain a copyright notice

#ifndef EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__BUILDER_HPP_
#define EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__BUILDER_HPP_

#include "evpi_interfaces/msg/detail/multi_range__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace evpi_interfaces
{

namespace msg
{

namespace builder
{

class Init_MultiRange_ranges
{
public:
  explicit Init_MultiRange_ranges(::evpi_interfaces::msg::MultiRange & msg)
  : msg_(msg)
  {}
  ::evpi_interfaces::msg::MultiRange ranges(::evpi_interfaces::msg::MultiRange::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::evpi_interfaces::msg::MultiRange msg_;
};

class Init_MultiRange_id
{
public:
  explicit Init_MultiRange_id(::evpi_interfaces::msg::MultiRange & msg)
  : msg_(msg)
  {}
  Init_MultiRange_ranges id(::evpi_interfaces::msg::MultiRange::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_MultiRange_ranges(msg_);
  }

private:
  ::evpi_interfaces::msg::MultiRange msg_;
};

class Init_MultiRange_max_range
{
public:
  explicit Init_MultiRange_max_range(::evpi_interfaces::msg::MultiRange & msg)
  : msg_(msg)
  {}
  Init_MultiRange_id max_range(::evpi_interfaces::msg::MultiRange::_max_range_type arg)
  {
    msg_.max_range = std::move(arg);
    return Init_MultiRange_id(msg_);
  }

private:
  ::evpi_interfaces::msg::MultiRange msg_;
};

class Init_MultiRange_min_range
{
public:
  explicit Init_MultiRange_min_range(::evpi_interfaces::msg::MultiRange & msg)
  : msg_(msg)
  {}
  Init_MultiRange_max_range min_range(::evpi_interfaces::msg::MultiRange::_min_range_type arg)
  {
    msg_.min_range = std::move(arg);
    return Init_MultiRange_max_range(msg_);
  }

private:
  ::evpi_interfaces::msg::MultiRange msg_;
};

class Init_MultiRange_header
{
public:
  Init_MultiRange_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiRange_min_range header(::evpi_interfaces::msg::MultiRange::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MultiRange_min_range(msg_);
  }

private:
  ::evpi_interfaces::msg::MultiRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::evpi_interfaces::msg::MultiRange>()
{
  return evpi_interfaces::msg::builder::Init_MultiRange_header();
}

}  // namespace evpi_interfaces

#endif  // EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__BUILDER_HPP_
