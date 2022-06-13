#ifndef FOLLOWING_NODE_HPP_
#define FOLLOWING_NODE_HPP_

#include <math.h>
#include <iostream>
#include <algorithm>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "ackermann_msgs/msg/ackermann_drive.hpp"
#include "evpi_interfaces/msg/multi_range.hpp"

using namespace std;

int tag_id_;
double min_range_,max_range_;

// Anchor1 and anchor2 need to be on the same horizontal level (z)
// Anchor3 and anchor4 need to be on the same vertiacal axis (y)
double x1_,y1_,z1_;
double x2_,y2_,z2_;
double x3_,y3_,z3_;
double x4_,y4_,z4_;

double base_xy_,base_yz_;
/////////////////////////////////////////////////////////////////////////////////////

class FollowingNode : public rclcpp::Node
{
public:
  FollowingNode();
  virtual ~FollowingNode();
  
private:
  void get_parameters();
  void topic_callback(evpi_interfaces::msg::MultiRange::SharedPtr msg);
  void base_calculation();
  double cosine_rule(double distance_a, double distance_b, double distance_c);
  geometry_msgs::msg::PoseStamped pose_3d_est(double r1, double r2, double r3, double r4);
  geometry_msgs::msg::PoseStamped pose_2d_est(double r1, double r2);

  rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr tag_pub_;
  rclcpp::Subscription<evpi_interfaces::msg::MultiRange>::SharedPtr anchor_sub_;

};


#endif  // FOLLOWING_NODE_HPP_