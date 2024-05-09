#include "dwa_utils.hpp"

namespace mdwa_ros2
{
    State::State(float x_, float y_, float rotation_, float vel_, float omega_):
    x(x_),y(y_),rotation(rotation_),vel(vel_),omega(omega_)
    {

    }

    State::State():x(0.0),y(0.0),rotation(0.0),vel(0.0),omega(0.0)
    {
        
    }

    Window::Window(float a_, float b_, float c_, float d_):a(a_),b(b_),c(c_),d(d_)
    {

    }

    DWA_Planner::DWA_Planner(
        float max_speed, float min_speed, float max_yawrate, float max_accel,
        float max_dyawrate, float v_reso, float yawrate_reso, float delta_time,
        float predict_time, float robot_radius
    ):
    max_speed_(max_speed),min_speed_(min_speed),max_yawrate_(max_yawrate),max_accel_(max_accel),
    max_dyawrate_(max_dyawrate),v_reso_(v_reso),yawrate_reso_(yawrate_reso),delta_time_(delta_time),
    predict_time_(predict_time),robot_radius_(robot_radius)
    {

    }

    DWA_Planner *DWA_Planner::create_dwa_planner(DWAParams params)
    {
        return (DWA_Planner *)(new DWA_Planner(
            params.max_speed_, params.min_speed_, params.max_yawrate_, params.max_accel_,
            params.max_dyawrate_, params.v_reso_, params.yawrate_reso_, 
            params.delta_time_, params.predict_time_, params.robot_radius_
        ));
    }

    void DWA_Planner::set_cost_gain(float goal_cost_gain, float speed_cost_gain)
    {
        to_goal_cost_gain_ = goal_cost_gain;
        speed_cost_gain_ = speed_cost_gain;
    }
}