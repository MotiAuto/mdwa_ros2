#ifndef MDWA_ROS2_NODE_HPP_
#define MDWA_ROS2_NODE_HPP_

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>

namespace mdwa_ros2
{
    class MDWANode : public rclcpp::Node
    {
        public:
        explicit MDWANode(const rclcpp::NodeOptions& options=rclcpp::NodeOptions());

        private:
        

        rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr sub_current_pose_;
        rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr sub_goal_pose_;
        
    };
}

#endif