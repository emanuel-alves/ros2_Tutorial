// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from more_interfaces:msg/AddressBook.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "more_interfaces/msg/detail/address_book__rosidl_typesupport_introspection_c.h"
#include "more_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "more_interfaces/msg/detail/address_book__functions.h"
#include "more_interfaces/msg/detail/address_book__struct.h"


// Include directives for member types
// Member `address_book`
#include "rosidl_tutorials_msgs/msg/contact.h"
// Member `address_book`
#include "rosidl_tutorials_msgs/msg/detail/contact__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AddressBook__rosidl_typesupport_introspection_c__AddressBook_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  more_interfaces__msg__AddressBook__init(message_memory);
}

void AddressBook__rosidl_typesupport_introspection_c__AddressBook_fini_function(void * message_memory)
{
  more_interfaces__msg__AddressBook__fini(message_memory);
}

size_t AddressBook__rosidl_typesupport_introspection_c__size_function__Contact__address_book(
  const void * untyped_member)
{
  const rosidl_tutorials_msgs__msg__Contact__Sequence * member =
    (const rosidl_tutorials_msgs__msg__Contact__Sequence *)(untyped_member);
  return member->size;
}

const void * AddressBook__rosidl_typesupport_introspection_c__get_const_function__Contact__address_book(
  const void * untyped_member, size_t index)
{
  const rosidl_tutorials_msgs__msg__Contact__Sequence * member =
    (const rosidl_tutorials_msgs__msg__Contact__Sequence *)(untyped_member);
  return &member->data[index];
}

void * AddressBook__rosidl_typesupport_introspection_c__get_function__Contact__address_book(
  void * untyped_member, size_t index)
{
  rosidl_tutorials_msgs__msg__Contact__Sequence * member =
    (rosidl_tutorials_msgs__msg__Contact__Sequence *)(untyped_member);
  return &member->data[index];
}

bool AddressBook__rosidl_typesupport_introspection_c__resize_function__Contact__address_book(
  void * untyped_member, size_t size)
{
  rosidl_tutorials_msgs__msg__Contact__Sequence * member =
    (rosidl_tutorials_msgs__msg__Contact__Sequence *)(untyped_member);
  rosidl_tutorials_msgs__msg__Contact__Sequence__fini(member);
  return rosidl_tutorials_msgs__msg__Contact__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_member_array[1] = {
  {
    "address_book",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(more_interfaces__msg__AddressBook, address_book),  // bytes offset in struct
    NULL,  // default value
    AddressBook__rosidl_typesupport_introspection_c__size_function__Contact__address_book,  // size() function pointer
    AddressBook__rosidl_typesupport_introspection_c__get_const_function__Contact__address_book,  // get_const(index) function pointer
    AddressBook__rosidl_typesupport_introspection_c__get_function__Contact__address_book,  // get(index) function pointer
    AddressBook__rosidl_typesupport_introspection_c__resize_function__Contact__address_book  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_members = {
  "more_interfaces__msg",  // message namespace
  "AddressBook",  // message name
  1,  // number of fields
  sizeof(more_interfaces__msg__AddressBook),
  AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_member_array,  // message members
  AddressBook__rosidl_typesupport_introspection_c__AddressBook_init_function,  // function to initialize message memory (memory has to be allocated)
  AddressBook__rosidl_typesupport_introspection_c__AddressBook_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_type_support_handle = {
  0,
  &AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_more_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, more_interfaces, msg, AddressBook)() {
  AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosidl_tutorials_msgs, msg, Contact)();
  if (!AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_type_support_handle.typesupport_identifier) {
    AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddressBook__rosidl_typesupport_introspection_c__AddressBook_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
