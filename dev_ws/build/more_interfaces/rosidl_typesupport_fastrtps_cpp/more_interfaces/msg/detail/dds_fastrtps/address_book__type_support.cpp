// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from more_interfaces:msg/AddressBook.idl
// generated code does not contain a copyright notice
#include "more_interfaces/msg/detail/address_book__rosidl_typesupport_fastrtps_cpp.hpp"
#include "more_interfaces/msg/detail/address_book__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace rosidl_tutorials_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const rosidl_tutorials_msgs::msg::Contact &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  rosidl_tutorials_msgs::msg::Contact &);
size_t get_serialized_size(
  const rosidl_tutorials_msgs::msg::Contact &,
  size_t current_alignment);
size_t
max_serialized_size_Contact(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace rosidl_tutorials_msgs


namespace more_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
cdr_serialize(
  const more_interfaces::msg::AddressBook & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: address_book
  {
    size_t size = ros_message.address_book.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      rosidl_tutorials_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.address_book[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  more_interfaces::msg::AddressBook & ros_message)
{
  // Member: address_book
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.address_book.resize(size);
    for (size_t i = 0; i < size; i++) {
      rosidl_tutorials_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.address_book[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
get_serialized_size(
  const more_interfaces::msg::AddressBook & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: address_book
  {
    size_t array_size = ros_message.address_book.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rosidl_tutorials_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.address_book[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_more_interfaces
max_serialized_size_AddressBook(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: address_book
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        rosidl_tutorials_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Contact(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _AddressBook__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const more_interfaces::msg::AddressBook *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddressBook__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<more_interfaces::msg::AddressBook *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddressBook__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const more_interfaces::msg::AddressBook *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddressBook__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AddressBook(full_bounded, 0);
}

static message_type_support_callbacks_t _AddressBook__callbacks = {
  "more_interfaces::msg",
  "AddressBook",
  _AddressBook__cdr_serialize,
  _AddressBook__cdr_deserialize,
  _AddressBook__get_serialized_size,
  _AddressBook__max_serialized_size
};

static rosidl_message_type_support_t _AddressBook__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddressBook__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace more_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_more_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<more_interfaces::msg::AddressBook>()
{
  return &more_interfaces::msg::typesupport_fastrtps_cpp::_AddressBook__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, more_interfaces, msg, AddressBook)() {
  return &more_interfaces::msg::typesupport_fastrtps_cpp::_AddressBook__handle;
}

#ifdef __cplusplus
}
#endif