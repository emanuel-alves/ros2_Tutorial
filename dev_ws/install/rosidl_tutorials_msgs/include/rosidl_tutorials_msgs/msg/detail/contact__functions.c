// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_tutorials_msgs:msg/Contact.idl
// generated code does not contain a copyright notice
#include "rosidl_tutorials_msgs/msg/detail/contact__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `first_name`
// Member `last_name`
// Member `address`
#include "rosidl_runtime_c/string_functions.h"

bool
rosidl_tutorials_msgs__msg__Contact__init(rosidl_tutorials_msgs__msg__Contact * msg)
{
  if (!msg) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__init(&msg->first_name)) {
    rosidl_tutorials_msgs__msg__Contact__fini(msg);
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__init(&msg->last_name)) {
    rosidl_tutorials_msgs__msg__Contact__fini(msg);
    return false;
  }
  // gender
  // age
  // address
  if (!rosidl_runtime_c__String__init(&msg->address)) {
    rosidl_tutorials_msgs__msg__Contact__fini(msg);
    return false;
  }
  return true;
}

void
rosidl_tutorials_msgs__msg__Contact__fini(rosidl_tutorials_msgs__msg__Contact * msg)
{
  if (!msg) {
    return;
  }
  // first_name
  rosidl_runtime_c__String__fini(&msg->first_name);
  // last_name
  rosidl_runtime_c__String__fini(&msg->last_name);
  // gender
  // age
  // address
  rosidl_runtime_c__String__fini(&msg->address);
}

rosidl_tutorials_msgs__msg__Contact *
rosidl_tutorials_msgs__msg__Contact__create()
{
  rosidl_tutorials_msgs__msg__Contact * msg = (rosidl_tutorials_msgs__msg__Contact *)malloc(sizeof(rosidl_tutorials_msgs__msg__Contact));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_tutorials_msgs__msg__Contact));
  bool success = rosidl_tutorials_msgs__msg__Contact__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_tutorials_msgs__msg__Contact__destroy(rosidl_tutorials_msgs__msg__Contact * msg)
{
  if (msg) {
    rosidl_tutorials_msgs__msg__Contact__fini(msg);
  }
  free(msg);
}


bool
rosidl_tutorials_msgs__msg__Contact__Sequence__init(rosidl_tutorials_msgs__msg__Contact__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_tutorials_msgs__msg__Contact * data = NULL;
  if (size) {
    data = (rosidl_tutorials_msgs__msg__Contact *)calloc(size, sizeof(rosidl_tutorials_msgs__msg__Contact));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_tutorials_msgs__msg__Contact__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_tutorials_msgs__msg__Contact__fini(&data[i - 1]);
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
rosidl_tutorials_msgs__msg__Contact__Sequence__fini(rosidl_tutorials_msgs__msg__Contact__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_tutorials_msgs__msg__Contact__fini(&array->data[i]);
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

rosidl_tutorials_msgs__msg__Contact__Sequence *
rosidl_tutorials_msgs__msg__Contact__Sequence__create(size_t size)
{
  rosidl_tutorials_msgs__msg__Contact__Sequence * array = (rosidl_tutorials_msgs__msg__Contact__Sequence *)malloc(sizeof(rosidl_tutorials_msgs__msg__Contact__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_tutorials_msgs__msg__Contact__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_tutorials_msgs__msg__Contact__Sequence__destroy(rosidl_tutorials_msgs__msg__Contact__Sequence * array)
{
  if (array) {
    rosidl_tutorials_msgs__msg__Contact__Sequence__fini(array);
  }
  free(array);
}
