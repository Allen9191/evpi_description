// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from evpi_interfaces:msg/MultiRange.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "evpi_interfaces/msg/detail/multi_range__rosidl_typesupport_introspection_c.h"
#include "evpi_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "evpi_interfaces/msg/detail/multi_range__functions.h"
#include "evpi_interfaces/msg/detail/multi_range__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ranges`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MultiRange__rosidl_typesupport_introspection_c__MultiRange_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  evpi_interfaces__msg__MultiRange__init(message_memory);
}

void MultiRange__rosidl_typesupport_introspection_c__MultiRange_fini_function(void * message_memory)
{
  evpi_interfaces__msg__MultiRange__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MultiRange__rosidl_typesupport_introspection_c__MultiRange_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(evpi_interfaces__msg__MultiRange, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(evpi_interfaces__msg__MultiRange, min_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(evpi_interfaces__msg__MultiRange, max_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(evpi_interfaces__msg__MultiRange, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(evpi_interfaces__msg__MultiRange, ranges),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MultiRange__rosidl_typesupport_introspection_c__MultiRange_message_members = {
  "evpi_interfaces__msg",  // message namespace
  "MultiRange",  // message name
  5,  // number of fields
  sizeof(evpi_interfaces__msg__MultiRange),
  MultiRange__rosidl_typesupport_introspection_c__MultiRange_message_member_array,  // message members
  MultiRange__rosidl_typesupport_introspection_c__MultiRange_init_function,  // function to initialize message memory (memory has to be allocated)
  MultiRange__rosidl_typesupport_introspection_c__MultiRange_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MultiRange__rosidl_typesupport_introspection_c__MultiRange_message_type_support_handle = {
  0,
  &MultiRange__rosidl_typesupport_introspection_c__MultiRange_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_evpi_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, evpi_interfaces, msg, MultiRange)() {
  MultiRange__rosidl_typesupport_introspection_c__MultiRange_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!MultiRange__rosidl_typesupport_introspection_c__MultiRange_message_type_support_handle.typesupport_identifier) {
    MultiRange__rosidl_typesupport_introspection_c__MultiRange_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MultiRange__rosidl_typesupport_introspection_c__MultiRange_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
