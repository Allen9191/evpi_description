#ifndef MOTOR_CONTROLL_HPP_
#define MOTOR_CONTROLL_HPP_

#include <math.h>

#include "rclcpp/rclcpp.hpp"
#include "ackermann_msgs/msg/ackermann_drive.hpp"
#include "can_msgs/msg/frame.hpp"

float rear_wheel_radius;
float speed_ratio;
int max_rpm;
int min_rpm;

double convert_constant;
auto middr_can_msgs = can_msgs::msg::Frame();
auto brake_can_msgs = can_msgs::msg::Frame();
auto steer_can_msgs = can_msgs::msg::Frame();
/////////////////////////////////////////////////////////////////////////////////////

class MotorControll : public rclcpp::Node
{
public:
  MotorControll();
  virtual ~MotorControll();
  
private:
  void get_params();
  void ackermann_callback(ackermann_msgs::msg::AckermannDrive::SharedPtr msg);
  void param_update_timer(const std::chrono::milliseconds timeout);

  rclcpp::Subscription<ackermann_msgs::msg::AckermannDrive>::SharedPtr ackermann_subscriber_;
  rclcpp::Publisher<can_msgs::msg::Frame>::SharedPtr ctl_publisher_;

  rclcpp::TimerBase::SharedPtr param_update_timer_;
};

#endif  // MOTOR_CONTROLL_HPP_