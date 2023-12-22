
#ifndef _HHT_Planner_H_
#define _HHT_Planner_H_
#include <vector>
#include <unordered_map>
#include "glog/logging.h"

// sub module 
#include "plannerFactory.h"
#include "structPlanner_t.h"

//#include "angle2Torque.h"
//#include "scenarioAnalysis.h" t.b.d

/**
 * @brief planner
 * @author kaifeng
 * @date 
*/


namespace planner { 
class Planner//client
{
    public:
    /**
     * @brief constructor
     */
    Planner()
    {
        LOG(INFO)<<"***********Planner in progress***********";
    }
    /**
     * @brief destructor
     */
    ~Planner()
    {
        LOG(INFO)<<"**************Planner Follow end****************";
    }
    /**
    * @brief read parameters fron yaml files t.b.d
    */
    void initialize(const std::string& config_path); //with the exception of controller para 
    /**
    * @brief update Planner
    * @param Trace trajectory 
    * @param locInfo locationInfo
    * @param vehicalState receive veh state
    */
    void update(const Location* locInfo,
    const VehicleState* vehicalState);
    /**
    * @brief run Planner
    */
    PlannerDataFlow run();//t.b.d 
    /**
    * @brief reset t.b.d.
    */
    void fReset();//t.b.d

    private:

    /*input of Planner***************************/ 
    const  VehicleState * p_vehicalInfo_;
    const  Location* p_locInfo_;
    // for simulation pp temp qkf 31 oct
    //const  LocInfo* p_locInfo_;
    Parameters* p_parameter_;//
    
    /*sub interface***************************/ 

    PlannerDataFlow plannerDataFlow_;


    // t.b.d

    /* sub module ****************************/
    PlannerFactory plannerFactory_; 


    /*intermediate variable in Planner (can be defined in run function)**************/
    std::unordered_map <PlannerType,std::shared_ptr<PlannerBase>> p_planners_;
    std::vector<PlannerType>  typesSet_;
    PlannerType plannerType_;
};

}

#endif