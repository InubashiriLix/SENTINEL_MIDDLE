// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from vision_msgs:msg/Armor.idl
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
#include "vision_msgs/msg/detail/armor__struct.h"
#include "vision_msgs/msg/detail/armor__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "vision_msgs/msg/detail/point__functions.h"
// end nested array functions include
bool vision_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * vision_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool vision_msgs__msg__armor__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("vision_msgs.msg._armor.Armor", full_classname_dest, 28) == 0);
  }
  vision_msgs__msg__Armor * ros_message = _ros_message;
  {  // color
    PyObject * field = PyObject_GetAttrString(_pymsg, "color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->color = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dis
    PyObject * field = PyObject_GetAttrString(_pymsg, "dis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dis = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // armor_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "armor_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->armor_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // points
    PyObject * field = PyObject_GetAttrString(_pymsg, "points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'points'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!vision_msgs__msg__Point__Sequence__init(&(ros_message->points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create vision_msgs__msg__Point__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    vision_msgs__msg__Point * dest = ros_message->points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!vision_msgs__msg__point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * vision_msgs__msg__armor__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Armor */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("vision_msgs.msg._armor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Armor");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  vision_msgs__msg__Armor * ros_message = (vision_msgs__msg__Armor *)raw_ros_message;
  {  // color
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // armor_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->armor_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "armor_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // points
    PyObject * field = NULL;
    size_t size = ros_message->points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    vision_msgs__msg__Point * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->points.data[i]);
      PyObject * pyitem = vision_msgs__msg__point__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
