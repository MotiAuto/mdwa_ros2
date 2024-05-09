#ifndef DWA_UTILS_HPP_
#define DWA_UTILS_HPP_

namespace mdwa_ros2
{
    struct DWAParams
    {
        float max_speed_, min_speed_, max_yawrate_, max_accel_, max_dyawrate_, v_reso_, yawrate_reso_, delta_time_, predict_time_;
    };
    
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

    struct Window
    {
        float a, b, c, d;
        Window(float a_, float b_, float c_, float d_);
    };
    
    
    class DWA_Planner
    {
        public:
        DWA_Planner(
            float max_speed, float min_speed, float max_yawrate, float max_accel,
            float max_dyawrate, float v_reso, float yawrate_reso, float delta_time,
            float predict_time, float robot_radius
        );
        static DWA_Planner* create_dwa_planner();
        void set_cost_gain(float goal_cost_gain, float speed_cost_gain);
        void dwa_control();

        private:
        Window calc_dynamic_window();
        State state;
        float max_speed_, min_speed_, max_yawrate_, max_accel_, max_dyawrate_, v_reso_, yawrate_reso_, delta_time_, predict_time_;
        float to_goal_cost_gain_, speed_cost_gain_, robot_radius_;
    };
}

#endif