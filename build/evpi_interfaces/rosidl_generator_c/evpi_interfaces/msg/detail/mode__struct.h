// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from evpi_interfaces:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef EVPI_INTERFACES__MSG__DETAIL__MODE__STRUCT_H_
#define EVPI_INTERFACES__MSG__DETAIL__MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Mode in the package evpi_interfaces.
typedef struct evpi_interfaces__msg__Mode
{
  int8_t strip_id;
  int64_t mode;
  int8_t red_value;
  int8_t green_value;
  int8_t blue_value;
} evpi_interfaces__msg__Mode;

// Struct for a sequence of evpi_interfaces__msg__Mode.
typedef struct evpi_interfaces__msg__Mode__Sequence
{
  evpi_interfaces__msg__Mode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} evpi_interfaces__msg__Mode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EVPI_INTERFACES__MSG__DETAIL__MODE__STRUCT_H_
