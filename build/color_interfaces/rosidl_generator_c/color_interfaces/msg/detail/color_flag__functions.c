// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from color_interfaces:msg/ColorFlag.idl
// generated code does not contain a copyright notice
#include "color_interfaces/msg/detail/color_flag__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
color_interfaces__msg__ColorFlag__init(color_interfaces__msg__ColorFlag * msg)
{
  if (!msg) {
    return false;
  }
  // greenflag
  // yellowflag
  // redflag
  return true;
}

void
color_interfaces__msg__ColorFlag__fini(color_interfaces__msg__ColorFlag * msg)
{
  if (!msg) {
    return;
  }
  // greenflag
  // yellowflag
  // redflag
}

color_interfaces__msg__ColorFlag *
color_interfaces__msg__ColorFlag__create()
{
  color_interfaces__msg__ColorFlag * msg = (color_interfaces__msg__ColorFlag *)malloc(sizeof(color_interfaces__msg__ColorFlag));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(color_interfaces__msg__ColorFlag));
  bool success = color_interfaces__msg__ColorFlag__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
color_interfaces__msg__ColorFlag__destroy(color_interfaces__msg__ColorFlag * msg)
{
  if (msg) {
    color_interfaces__msg__ColorFlag__fini(msg);
  }
  free(msg);
}


bool
color_interfaces__msg__ColorFlag__Sequence__init(color_interfaces__msg__ColorFlag__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  color_interfaces__msg__ColorFlag * data = NULL;
  if (size) {
    data = (color_interfaces__msg__ColorFlag *)calloc(size, sizeof(color_interfaces__msg__ColorFlag));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = color_interfaces__msg__ColorFlag__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        color_interfaces__msg__ColorFlag__fini(&data[i - 1]);
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
color_interfaces__msg__ColorFlag__Sequence__fini(color_interfaces__msg__ColorFlag__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      color_interfaces__msg__ColorFlag__fini(&array->data[i]);
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

color_interfaces__msg__ColorFlag__Sequence *
color_interfaces__msg__ColorFlag__Sequence__create(size_t size)
{
  color_interfaces__msg__ColorFlag__Sequence * array = (color_interfaces__msg__ColorFlag__Sequence *)malloc(sizeof(color_interfaces__msg__ColorFlag__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = color_interfaces__msg__ColorFlag__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
color_interfaces__msg__ColorFlag__Sequence__destroy(color_interfaces__msg__ColorFlag__Sequence * array)
{
  if (array) {
    color_interfaces__msg__ColorFlag__Sequence__fini(array);
  }
  free(array);
}
