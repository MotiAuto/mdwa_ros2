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
}