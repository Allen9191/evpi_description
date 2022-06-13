// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from evpi_interfaces:msg/MultiRange.idl
// generated code does not contain a copyright notice

#ifndef EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__TRAITS_HPP_
#define EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__TRAITS_HPP_

#include "evpi_interfaces/msg/detail/multi_range__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<evpi_interfaces::msg::MultiRange>()
{
  return "evpi_interfaces::msg::MultiRange";
}

template<>
inline const char * name<evpi_interfaces::msg::MultiRange>()
{
  return "evpi_interfaces/msg/MultiRange";
}

template<>
struct has_fixed_size<evpi_interfaces::msg::MultiRange>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<evpi_interfaces::msg::MultiRange>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<evpi_interfaces::msg::MultiRange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__TRAITS_HPP_
