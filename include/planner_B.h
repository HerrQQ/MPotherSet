#ifndef __B_planner_h__
#define __B_planner_h__

#include "planner_base.h"
#include "glog/logging.h"
#include <vector>
#include <map>
#include <cmath>
#include <utility>

/**
 * @brief B
 * @author kaifeng
 * @date 
*/
namespace planner
{
    using namespace planner;
    class planner_B:public PlannerBase{ // product son
        public:
        planner_B()
        {
            LOG(INFO)<<"B in progress"<<std::endl;
        }
        ~planner_B()
        {
            LOG(INFO)<<"B stop"<<std::endl;
        }
       
        uint8_t initialize(const std::string& config_path)override;

        void run( const Location& locInfo,
                            const VehicleState& VehicleState,
                            PlannerDataFlow& PlannerDataFlow) override;

        void noRun(const Location& locInfo,
                            const VehicleState& VehicleState) override;
    };
}

#endif