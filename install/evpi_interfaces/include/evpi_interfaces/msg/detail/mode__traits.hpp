// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from evpi_interfaces:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef EVPI_INTERFACES__MSG__DETAIL__MODE__TRAITS_HPP_
#define EVPI_INTERFACES__MSG__DETAIL__MODE__TRAITS_HPP_

#include "evpi_interfaces/msg/detail/mode__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<evpi_interfaces::msg::Mode>()
{
  return "evpi_interfaces::msg::Mode";
}

template<>
inline const char * name<evpi_interfaces::msg::Mode>()
{
  return "evpi_interfaces/msg/Mode";
}

template<>
struct has_fixed_size<evpi_interfaces::msg::Mode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<evpi_interfaces::msg::Mode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<evpi_interfaces::msg::Mode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EVPI_INTERFACES__MSG__DETAIL__MODE__TRAITS_HPP_
