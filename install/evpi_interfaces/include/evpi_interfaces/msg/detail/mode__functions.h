// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from evpi_interfaces:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef EVPI_INTERFACES__MSG__DETAIL__MODE__FUNCTIONS_H_
#define EVPI_INTERFACES__MSG__DETAIL__MODE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "evpi_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "evpi_interfaces/msg/detail/mode__struct.h"

/// Initialize msg/Mode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * evpi_interfaces__msg__Mode
 * )) before or use
 * evpi_interfaces__msg__Mode__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
bool
evpi_interfaces__msg__Mode__init(evpi_interfaces__msg__Mode * msg);

/// Finalize msg/Mode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
void
evpi_interfaces__msg__Mode__fini(evpi_interfaces__msg__Mode * msg);

/// Create msg/Mode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * evpi_interfaces__msg__Mode__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
evpi_interfaces__msg__Mode *
evpi_interfaces__msg__Mode__create();

/// Destroy msg/Mode message.
/**
 * It calls
 * evpi_interfaces__msg__Mode__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
void
evpi_interfaces__msg__Mode__destroy(evpi_interfaces__msg__Mode * msg);


/// Initialize array of msg/Mode messages.
/**
 * It allocates the memory for the number of elements and calls
 * evpi_interfaces__msg__Mode__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
bool
evpi_interfaces__msg__Mode__Sequence__init(evpi_interfaces__msg__Mode__Sequence * array, size_t size);

/// Finalize array of msg/Mode messages.
/**
 * It calls
 * evpi_interfaces__msg__Mode__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
void
evpi_interfaces__msg__Mode__Sequence__fini(evpi_interfaces__msg__Mode__Sequence * array);

/// Create array of msg/Mode messages.
/**
 * It allocates the memory for the array and calls
 * evpi_interfaces__msg__Mode__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
evpi_interfaces__msg__Mode__Sequence *
evpi_interfaces__msg__Mode__Sequence__create(size_t size);

/// Destroy array of msg/Mode messages.
/**
 * It calls
 * evpi_interfaces__msg__Mode__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_evpi_interfaces
void
evpi_interfaces__msg__Mode__Sequence__destroy(evpi_interfaces__msg__Mode__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // EVPI_INTERFACES__MSG__DETAIL__MODE__FUNCTIONS_H_
