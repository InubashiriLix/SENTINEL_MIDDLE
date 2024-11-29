// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hero_msgs:msg/Motion.idl
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
#include "hero_msgs/msg/detail/motion__struct.h"
#include "hero_msgs/msg/detail/motion__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hero_msgs__msg__motion__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
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
    assert(strncmp("hero_msgs.msg._motion.Motion", full_classname_dest, 28) == 0);
  }
  hero_msgs__msg__Motion * ros_message = _ros_message;
  {  // linear_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->linear_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // linear_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->linear_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angular_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angular_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hero_msgs__msg__motion__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Motion */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hero_msgs.msg._motion");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Motion");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hero_msgs__msg__Motion * ros_message = (hero_msgs__msg__Motion *)raw_ros_message;
  {  // linear_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->linear_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // linear_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->linear_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angular_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
