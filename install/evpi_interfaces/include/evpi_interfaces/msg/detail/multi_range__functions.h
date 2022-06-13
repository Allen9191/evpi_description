// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from evpi_interfaces:msg/MultiRange.idl
// generated code does not contain a copyright notice

#ifndef EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__FUNCTIONS_H_
#define EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "evpi_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "evpi_interfaces/msg/detail/multi_range__struct.h"

/// Initialize msg/MultiRange message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * evpi_interfaces__msg__MultiRange
 * )) before or use
 * evpi_interfaces__msg__MultiRange__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
bool
evpi_interfaces__msg__MultiRange__init(evpi_interfaces__msg__MultiRange * msg);

/// Finalize msg/MultiRange message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
void
evpi_interfaces__msg__MultiRange__fini(evpi_interfaces__msg__MultiRange * msg);

/// Create msg/MultiRange message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * evpi_interfaces__msg__MultiRange__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
evpi_interfaces__msg__MultiRange *
evpi_interfaces__msg__MultiRange__create();

/// Destroy msg/MultiRange message.
/**
 * It calls
 * evpi_interfaces__msg__MultiRange__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
void
evpi_interfaces__msg__MultiRange__destroy(evpi_interfaces__msg__MultiRange * msg);


/// Initialize array of msg/MultiRange messages.
/**
 * It allocates the memory for the number of elements and calls
 * evpi_interfaces__msg__MultiRange__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
bool
evpi_interfaces__msg__MultiRange__Sequence__init(evpi_interfaces__msg__MultiRange__Sequence * array, size_t size);

/// Finalize array of msg/MultiRange messages.
/**
 * It calls
 * evpi_interfaces__msg__MultiRange__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
void
evpi_interfaces__msg__MultiRange__Sequence__fini(evpi_interfaces__msg__MultiRange__Sequence * array);

/// Create array of msg/MultiRange messages.
/**
 * It allocates the memory for the array and calls
 * evpi_interfaces__msg__MultiRange__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
evpi_interfaces__msg__MultiRange__Sequence *
evpi_interfaces__msg__MultiRange__Sequence__create(size_t size);

/// Destroy array of msg/MultiRange messages.
/**
 * It calls
 * evpi_interfaces__msg__MultiRange__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
void
evpi_interfaces__msg__MultiRange__Sequence__destroy(evpi_interfaces__msg__MultiRange__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__FUNCTIONS_H_
