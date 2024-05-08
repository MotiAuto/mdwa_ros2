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

    DWA_Planner::DWA_Planner(float max_speed, float min_speed, float max_yawrate, float max_accel,
            float max_dyawrate, float v_reso, float yawrate_reso, float delta_time,
            float predict_time, float robot_radius):
            max_speed_(max_speed),min_speed_(min_speed),max_yawrate_(max_yawrate)
    {

    }
}