#ifndef _PLANNER_H_
#define _PLANNER_H_
#include "structPlanner_t.h"
#include <Eigen/Dense>
#include <vector>
#include <map>
#include <unordered_map>
#include "glog/logging.h"
#include <yaml-cpp/yaml.h>


/**
 * @brief Planner_base
 * @author kaifeng
 * @date 
*/




namespace planner { 

/**
 * @brief base class for all planners.
 */
class PlannerBase//client
{
    public:
  /**
   * @brief constructor
   */
  PlannerBase() = default;

  /**
   * @brief destructor
   */
  virtual ~PlannerBase() = default;

  /**
   * @brief initialize PlannerBase
   * @param config_path path of config file, yaml  
   * @return Status initialization status
   */
  virtual uint8_t initialize(const std::string& config_path) = 0;

  
  /**
   * @brief compute planner command
   * @param PlannerDataFlow saving relativ infos of planning
   * @param locInfo reference of LocInfo instance
   * @param VehicleState reference of VehicleState instance
   * @return reference of Command instance, which is private member
   */
  virtual void run( const Location& locInfo,
                    const VehicleState& VehicleState,
                    PlannerDataFlow& PlannerDataFlow) = 0;

  virtual void noRun(const Location& locInfo,
                    const VehicleState& VehicleState) = 0;

  /**
   * @brief stop planner
   */
  // virtual void stop();

protected:
    double cmd_; 
  //Command cmd_;
  //Debug debug_ptr_;
};

}

#endif