// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosidl_tutorials_msgs:msg/Contact.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__BUILDER_HPP_
#define ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__BUILDER_HPP_

#include "rosidl_tutorials_msgs/msg/detail/contact__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosidl_tutorials_msgs
{

namespace msg
{

namespace builder
{

class Init_Contact_address
{
public:
  explicit Init_Contact_address(::rosidl_tutorials_msgs::msg::Contact & msg)
  : msg_(msg)
  {}
  ::rosidl_tutorials_msgs::msg::Contact address(::rosidl_tutorials_msgs::msg::Contact::_address_type arg)
  {
    msg_.address = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosidl_tutorials_msgs::msg::Contact msg_;
};

class Init_Contact_age
{
public:
  explicit Init_Contact_age(::rosidl_tutorials_msgs::msg::Contact & msg)
  : msg_(msg)
  {}
  Init_Contact_address age(::rosidl_tutorials_msgs::msg::Contact::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_Contact_address(msg_);
  }

private:
  ::rosidl_tutorials_msgs::msg::Contact msg_;
};

class Init_Contact_gender
{
public:
  explicit Init_Contact_gender(::rosidl_tutorials_msgs::msg::Contact & msg)
  : msg_(msg)
  {}
  Init_Contact_age gender(::rosidl_tutorials_msgs::msg::Contact::_gender_type arg)
  {
    msg_.gender = std::move(arg);
    return Init_Contact_age(msg_);
  }

private:
  ::rosidl_tutorials_msgs::msg::Contact msg_;
};

class Init_Contact_last_name
{
public:
  explicit Init_Contact_last_name(::rosidl_tutorials_msgs::msg::Contact & msg)
  : msg_(msg)
  {}
  Init_Contact_gender last_name(::rosidl_tutorials_msgs::msg::Contact::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_Contact_gender(msg_);
  }

private:
  ::rosidl_tutorials_msgs::msg::Contact msg_;
};

class Init_Contact_first_name
{
public:
  Init_Contact_first_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Contact_last_name first_name(::rosidl_tutorials_msgs::msg::Contact::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return Init_Contact_last_name(msg_);
  }

private:
  ::rosidl_tutorials_msgs::msg::Contact msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosidl_tutorials_msgs::msg::Contact>()
{
  return rosidl_tutorials_msgs::msg::builder::Init_Contact_first_name();
}

}  // namespace rosidl_tutorials_msgs

#endif  // ROSIDL_TUTORIALS_MSGS__MSG__DETAIL__CONTACT__BUILDER_HPP_
