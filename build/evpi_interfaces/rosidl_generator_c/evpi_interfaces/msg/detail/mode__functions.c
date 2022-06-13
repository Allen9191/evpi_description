// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from evpi_interfaces:msg/Mode.idl
// generated code does not contain a copyright notice
#include "evpi_interfaces/msg/detail/mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
evpi_interfaces__msg__Mode__init(evpi_interfaces__msg__Mode * msg)
{
  if (!msg) {
    return false;
  }
  // strip_id
  // mode
  // red_value
  // green_value
  // blue_value
  return true;
}

void
evpi_interfaces__msg__Mode__fini(evpi_interfaces__msg__Mode * msg)
{
  if (!msg) {
    return;
  }
  // strip_id
  // mode
  // red_value
  // green_value
  // blue_value
}

evpi_interfaces__msg__Mode *
evpi_interfaces__msg__Mode__create()
{
  evpi_interfaces__msg__Mode * msg = (evpi_interfaces__msg__Mode *)malloc(sizeof(evpi_interfaces__msg__Mode));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(evpi_interfaces__msg__Mode));
  bool success = evpi_interfaces__msg__Mode__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
evpi_interfaces__msg__Mode__destroy(evpi_interfaces__msg__Mode * msg)
{
  if (msg) {
    evpi_interfaces__msg__Mode__fini(msg);
  }
  free(msg);
}


bool
evpi_interfaces__msg__Mode__Sequence__init(evpi_interfaces__msg__Mode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  evpi_interfaces__msg__Mode * data = NULL;
  if (size) {
    data = (evpi_interfaces__msg__Mode *)calloc(size, sizeof(evpi_interfaces__msg__Mode));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = evpi_interfaces__msg__Mode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        evpi_interfaces__msg__Mode__fini(&data[i - 1]);
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
evpi_interfaces__msg__Mode__Sequence__fini(evpi_interfaces__msg__Mode__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      evpi_interfaces__msg__Mode__fini(&array->data[i]);
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

evpi_interfaces__msg__Mode__Sequence *
evpi_interfaces__msg__Mode__Sequence__create(size_t size)
{
  evpi_interfaces__msg__Mode__Sequence * array = (evpi_interfaces__msg__Mode__Sequence *)malloc(sizeof(evpi_interfaces__msg__Mode__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = evpi_interfaces__msg__Mode__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
evpi_interfaces__msg__Mode__Sequence__destroy(evpi_interfaces__msg__Mode__Sequence * array)
{
  if (array) {
    evpi_interfaces__msg__Mode__Sequence__fini(array);
  }
  free(array);
}
