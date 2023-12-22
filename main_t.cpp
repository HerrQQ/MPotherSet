// #include "ros/ros.h"
#include "glog/logging.h"
#include "planner.h"
// #include "rosForReplayInterface.h"

int main(int argc, char **argv)
{
    uint n=10000;
    google::InitGoogleLogging(argv[0]);
    FLAGS_v = 0;
    // ros::init(argc, argv, "simulator");
    // controller::RosReplayInterface x;
    // x.fRun();
    planner::Planner planner;
    while (n--)
    {
        planner.run();
    }
    return 0;
}