#ifndef __A_planner_h__
#define __A_planner_h__

#include "planner_base.h"
#include "glog/logging.h"
#include <vector>
#include <map>
#include <cmath>
#include <utility>



/**
 * @brief A
 * @author kaifeng
 * @date 
*/
namespace planner
{
    class planner_A:public PlannerBase{ // product son
        public:
        planner_A()
        {
            LOG(INFO)<<"A in progress"<<std::endl;
        }
        ~planner_A()
        {
            LOG(INFO)<<"A stop"<<std::endl;
        }
       
        uint8_t initialize(const std::string& config_path)override;

        void run( const Location& locInfo,
                            const VehicleState& VehicleState,
                            PlannerDataFlow& PlannerDataFlow) override;

        void noRun(const Location& locInfo,
                            const VehicleState& VehicleState) override;
    
        private:
        /**
         * @brief read configuration
        */
        void readConfig(const std::string& path);

        private:
        // cost parameters
        struct CostParameter {
            float Xxxx{0.f};
            float xXxx{0.f};
            float xxXx{0.f};
            float xxxX{0.f};
        };
        CostParameter* p_parameter_;
        // 

    
    
    
    };

}
#endif