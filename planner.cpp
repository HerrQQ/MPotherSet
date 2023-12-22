#include "planner.h"
namespace planner { 
void Planner::update(const Location* locInfo,
    const VehicleState* vehicalState)
    {


    }

   void Planner:: initialize(const std::string& config_path)
   {
        YAML::Node config = YAML::LoadFile(config_path);
        for (auto value : config["XXX"])
        {
            p_parameter_->Xxxx=value["A"].as<double>();
            p_parameter_->xXxx=value["B"].as<double>();
            p_parameter_->xxXx=value["C"].as<double>();
            p_parameter_->xxxX=value["D"].as<double>();
        }
   }
PlannerDataFlow Planner::run()
{
    /*******************temp beging **********************/

    std::string yamlPath_t="src/config_Planner.yaml";// t.b.d use type and case structure

        //temp for test
    typesSet_.emplace_back(PlannerType::A);
    
    /*******************temp end **********************/


    // 2-1 Create Planner
    /***** only a example now wait to discuss*****/
    for (const auto& type : typesSet_)
    {
        //add
        if (p_planners_.find(type)==p_planners_.end())
        {
            std::shared_ptr<PlannerBase> p_planner_=plannerFactory_.fCreateplanner(type);
            p_planner_->initialize(yamlPath_t);// path to be defined
            p_planners_[type]=p_planner_;
        }
        //delete
        std::vector<PlannerType> todel;
        for ( auto& iterator :p_planners_)
        {
            bool flag =false; 
            auto type_t1=iterator.first;
            for (auto type_t2: typesSet_)
            {
                if (type_t1==type_t2)
                {
                    flag=true;
                }
            }
            if (flag==false)
            {
                todel.emplace_back(type_t1);
            }
            //std::vector <PlannerType>::iterator  x=std::find(types_.begin(),types_.end(),type_t);
        }
        for (const auto & todel_t : todel)
        {
            p_planners_.erase(todel_t);
        }
    }

    //2-2 Planner Run 
    /***** only a example now wait to discuss*****/

        for (auto& Planner:p_planners_)
        {
            std::shared_ptr<PlannerBase> p_Planner_t= Planner.second;
            p_Planner_t->run(*p_locInfo_,*p_vehicalInfo_,plannerDataFlow_);
            LOG(ERROR) << "Planner :"<<Planner.first<<"is running";
        }




    return plannerDataFlow_;


}
}