#ifndef CAN_MANAGER_HPP_
#define CAN_MANAGER_HPP_

#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "evpi_interfaces/msg/mode.hpp"     
#include "can_msgs/msg/frame.hpp"
#include "std_msgs/msg/float32.hpp"
#include <cmath>

using std::placeholders::_1;
auto sensor_can_msgs = can_msgs::msg::Frame();

int strip_mode;
int strip_red;


struct can_t {
    int can_id;
    int mode;
    int pixels;
    int red_value;
    int green_value;
    int blue_value;
    int time_interval;
    int dlc;
    bool is_rtr;
    bool is_extended;
    bool is_error;
};

struct can_t eyes_strip; 
struct can_t front_strip; 
struct can_t back_strip; 
struct can_t steering_angle; 

/////////////////////////////////////////////////////////////////////////////////////

class CanManager : public rclcpp::Node
{
public:
  CanManager();
  virtual ~CanManager();
  
private:
  void get_params();
  void strip_callback(const evpi_interfaces::msg::Mode::SharedPtr msg);
  void can_callback(const can_msgs::msg::Frame::SharedPtr msg);

  rclcpp::Subscription<evpi_interfaces::msg::Mode>::SharedPtr strip_subscription_; 
  rclcpp::Subscription<can_msgs::msg::Frame>::SharedPtr can_subscription_; 

  rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr steering_angle_publisher_;
  rclcpp::Publisher<can_msgs::msg::Frame>::SharedPtr can_publisher_;
};

#endif  // CAN_MANAGER_HPP_