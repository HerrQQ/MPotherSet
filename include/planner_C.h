#ifndef __C_planner_h__
#define __C_planner_h__

#include "planner_base.h"
#include "glog/logging.h"
#include <vector>
#include <map>
#include <cmath>
#include <utility>


/**
 * @brief C
 * @author kaifeng
 * @date 
*/

namespace planner
{
    using namespace planner;
    class planner_C:public PlannerBase{ // product son
        public:
        planner_C()
        {
            LOG(INFO)<<"C in progress"<<std::endl;
        }
        ~planner_C()
        {
            LOG(INFO)<<"C stop"<<std::endl;
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