// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from evpi_interfaces:msg/Mode.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "evpi_interfaces/msg/detail/mode__struct.h"
#include "evpi_interfaces/msg/detail/mode__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool evpi_interfaces__msg__mode__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("evpi_interfaces.msg._mode.Mode", full_classname_dest, 30) == 0);
  }
  evpi_interfaces__msg__Mode * ros_message = _ros_message;
  {  // strip_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "strip_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->strip_id = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // red_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "red_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->red_value = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // green_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "green_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->green_value = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // blue_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "blue_value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blue_value = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * evpi_interfaces__msg__mode__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Mode */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("evpi_interfaces.msg._mode");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Mode");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  evpi_interfaces__msg__Mode * ros_message = (evpi_interfaces__msg__Mode *)raw_ros_message;
  {  // strip_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->strip_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "strip_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // red_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->red_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "red_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // green_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->green_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "green_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blue_value
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->blue_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blue_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
