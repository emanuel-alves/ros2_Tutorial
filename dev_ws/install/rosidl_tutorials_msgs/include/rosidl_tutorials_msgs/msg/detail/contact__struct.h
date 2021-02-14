// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_tutorials_msgs:msg/Contact.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__STRUCT_H_
#define ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FEMALE'.
static const bool rosidl_tutorials_msgs__msg__Contact__FEMALE = true;

/// Constant 'MALE'.
static const bool rosidl_tutorials_msgs__msg__Contact__MALE = false;

// Include directives for member types
// Member 'first_name'
// Member 'last_name'
// Member 'address'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Contact in the package rosidl_tutorials_msgs.
typedef struct rosidl_tutorials_msgs__msg__Contact
{
  rosidl_runtime_c__String first_name;
  rosidl_runtime_c__String last_name;
  bool gender;
  uint8_t age;
  rosidl_runtime_c__String address;
} rosidl_tutorials_msgs__msg__Contact;

// Struct for a sequence of rosidl_tutorials_msgs__msg__Contact.
typedef struct rosidl_tutorials_msgs__msg__Contact__Sequence
{
  rosidl_tutorials_msgs__msg__Contact * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_tutorials_msgs__msg__Contact__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__STRUCT_H_
