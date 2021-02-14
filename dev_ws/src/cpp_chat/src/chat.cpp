// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <functional>
#include <memory>
#include <chrono>
#include <string>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#define chat 0
#define pub 1
#define sub 2

using std::placeholders::_1;

class MinimalChat : public rclcpp::Node
{
public:
  MinimalChat()
      : Node("minimal_chat")
  {
    subscription_ = this->create_subscription<std_msgs::msg::String>(
          "topic", 10, std::bind(&MinimalChat::topic_callback, this, _1));
    publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
    timer_ = this->create_wall_timer(
        std::chrono::microseconds(500), std::bind(&MinimalChat::timer_callback, this));
  }

private:
  void timer_callback()
  {
    RCLCPP_INFO(this->get_logger(), "");
    std::cout << " >> ";
    std::getline(std::cin, strMsg.data);

    if (strMsg.data.empty())
    {
      std::cout << "\n,.,.\n";
    }
    else
    {
      strMsg.data.insert(strMsg.data.begin(), pub);
      publisher_->publish(strMsg);
    }
  }
  void topic_callback(const std_msgs::msg::String::SharedPtr msg) const
  {
    std::cout << "<< " << msg->data << std::endl;
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;

  std_msgs::msg::String strMsg;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalChat>());
  rclcpp::shutdown();
  return 0;
}
