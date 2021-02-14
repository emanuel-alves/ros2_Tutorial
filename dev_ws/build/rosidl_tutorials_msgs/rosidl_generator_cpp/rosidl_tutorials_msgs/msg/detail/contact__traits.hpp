// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_tutorials_msgs:msg/Contact.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__TRAITS_HPP_
#define ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__TRAITS_HPP_

#include "rosidl_tutorials_msgs/msg/detail/contact__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_tutorials_msgs::msg::Contact>()
{
  return "rosidl_tutorials_msgs::msg::Contact";
}

template<>
inline const char * name<rosidl_tutorials_msgs::msg::Contact>()
{
  return "rosidl_tutorials_msgs/msg/Contact";
}

template<>
struct has_fixed_size<rosidl_tutorials_msgs::msg::Contact>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosidl_tutorials_msgs::msg::Contact>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosidl_tutorials_msgs::msg::Contact>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__TRAITS_HPP_
