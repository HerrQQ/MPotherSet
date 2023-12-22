#ifndef _planner_PURE_PUESUIT_H_
#define _planner_PURE_PUESUIT_H_


#include "planner_base.h"
#include "glog/logging.h"
#include <vector>
#include <map>
#include <cmath>
#include <utility>

/**
 * @brief D
 * @author kaifeng
 * @date 
*/

namespace planner
{

    class planner_D:public planner::PlannerBase{
        public:
        planner_D()
        {
            LOG(INFO)<<"D in progress"<<std::endl;
        }
        ~planner_D()
        {
            LOG(INFO)<<"D stop"<<std::endl;
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