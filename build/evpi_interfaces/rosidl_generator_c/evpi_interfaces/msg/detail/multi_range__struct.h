// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from evpi_interfaces:msg/MultiRange.idl
// generated code does not contain a copyright notice

#ifndef EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__STRUCT_H_
#define EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ranges'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/MultiRange in the package evpi_interfaces.
typedef struct evpi_interfaces__msg__MultiRange
{
  std_msgs__msg__Header header;
  float min_range;
  float max_range;
  int32_t id;
  rosidl_runtime_c__float__Sequence ranges;
} evpi_interfaces__msg__MultiRange;

// Struct for a sequence of evpi_interfaces__msg__MultiRange.
typedef struct evpi_interfaces__msg__MultiRange__Sequence
{
  evpi_interfaces__msg__MultiRange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} evpi_interfaces__msg__MultiRange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__STRUCT_H_
