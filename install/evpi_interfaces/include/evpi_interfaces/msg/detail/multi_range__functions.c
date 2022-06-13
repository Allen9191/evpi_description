// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from evpi_interfaces:msg/MultiRange.idl
// generated code does not contain a copyright notice
#include "evpi_interfaces/msg/detail/multi_range__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ranges`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
evpi_interfaces__msg__MultiRange__init(evpi_interfaces__msg__MultiRange * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    evpi_interfaces__msg__MultiRange__fini(msg);
    return false;
  }
  // min_range
  // max_range
  // id
  // ranges
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ranges, 0)) {
    evpi_interfaces__msg__MultiRange__fini(msg);
    return false;
  }
  return true;
}

void
evpi_interfaces__msg__MultiRange__fini(evpi_interfaces__msg__MultiRange * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // min_range
  // max_range
  // id
  // ranges
  rosidl_runtime_c__float__Sequence__fini(&msg->ranges);
}

evpi_interfaces__msg__MultiRange *
evpi_interfaces__msg__MultiRange__create()
{
  evpi_interfaces__msg__MultiRange * msg = (evpi_interfaces__msg__MultiRange *)malloc(sizeof(evpi_interfaces__msg__MultiRange));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(evpi_interfaces__msg__MultiRange));
  bool success = evpi_interfaces__msg__MultiRange__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
evpi_interfaces__msg__MultiRange__destroy(evpi_interfaces__msg__MultiRange * msg)
{
  if (msg) {
    evpi_interfaces__msg__MultiRange__fini(msg);
  }
  free(msg);
}


bool
evpi_interfaces__msg__MultiRange__Sequence__init(evpi_interfaces__msg__MultiRange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  evpi_interfaces__msg__MultiRange * data = NULL;
  if (size) {
    data = (evpi_interfaces__msg__MultiRange *)calloc(size, sizeof(evpi_interfaces__msg__MultiRange));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = evpi_interfaces__msg__MultiRange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        evpi_interfaces__msg__MultiRange__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
evpi_interfaces__msg__MultiRange__Sequence__fini(evpi_interfaces__msg__MultiRange__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      evpi_interfaces__msg__MultiRange__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

evpi_interfaces__msg__MultiRange__Sequence *
evpi_interfaces__msg__MultiRange__Sequence__create(size_t size)
{
  evpi_interfaces__msg__MultiRange__Sequence * array = (evpi_interfaces__msg__MultiRange__Sequence *)malloc(sizeof(evpi_interfaces__msg__MultiRange__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = evpi_interfaces__msg__MultiRange__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
evpi_interfaces__msg__MultiRange__Sequence__destroy(evpi_interfaces__msg__MultiRange__Sequence * array)
{
  if (array) {
    evpi_interfaces__msg__MultiRange__Sequence__fini(array);
  }
  free(array);
}
