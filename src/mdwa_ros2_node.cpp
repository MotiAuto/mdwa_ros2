#include "mdwa_ros2_node.hpp"

namespace mdwa_ros2
{
    MDWANode::MDWANode(const rclcpp::NodeOptions& options):
    Node("mdwa_ros2", options)
    {
        this->declare_parameter("max_speed", 1.0);
        this->declare_parameter("min_speed", 1.0);
        this->declare_parameter("max_accel", 1.0);
        this->declare_parameter("max_speed", 1.0);
        this->declare_parameter("max_speed", 1.0);
        this->declare_parameter("max_speed", 1.0);
    }
}