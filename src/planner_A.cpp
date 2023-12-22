#include "planner_A.h"

using namespace planner;

uint8_t planner_A::initialize(const std::string& config_path)
{
  return 0;
}

void planner_A::readConfig(const std::string& config_path ) {
        YAML::Node config = YAML::LoadFile(config_path);
        for (auto value : config["XXX"])
        {
            p_parameter_->Xxxx=value["A"].as<double>();
            p_parameter_->xXxx=value["B"].as<double>();
            p_parameter_->xxXx=value["C"].as<double>();
            p_parameter_->xxxX=value["D"].as<double>();
        }
}

void planner_A:: run( const Location& locInfo,
                    const VehicleState& VehicleState,
                    PlannerDataFlow& PlannerDataFlow) 
                    {

                    }

void planner_A:: noRun(const Location& locInfo,
                    const VehicleState& VehicleState) 
                    {

                    }