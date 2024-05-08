#ifndef DWA_UTILS_HPP_
#define DWA_UTILS_HPP_

namespace mdwa_ros2
{
    struct State
    {
        float x;
        float y;
        float rotation;
        float vel;
        float omega;

        State(float x_, float y_, float rotation_, float vel_, float omega_);
        State();
    };
    
    class DWAPlanner
    {
        public:
        DWAPlanner()
        {
            
        }

        private:
        float max_speed_, min_speed_, max_yawrate_, max_accel_, max_dyawrate_, v_reso_, yawrate_reso_, delta_time_, predict_time_;
        float to_goal_cost_gain_, speed_cost_gain_, robot_radius_;
    };
}

#endif