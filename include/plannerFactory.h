#ifndef _PlannerFactory_H_
#define _PlannerFactory_H_

#include "planner_A.h"
#include "planner_B.h"
#include "planner_C.h"
#include "planner_D.h"

/**
 * @brief PlannerFactory
 * @author kaifeng
 * @date 
*/
#include <memory>
namespace planner { 
class PlannerFactory//factory 
{
public :

    PlannerFactory()=default;
    ~PlannerFactory()=default;
    /**
    * @brief creat planner
    * @param needed planner type
    */
    std::shared_ptr<PlannerBase> fCreateplanner (const PlannerType& type)
    {
        if (type == B) {
            return std::make_shared<planner_B>();
        }
        else if (type == A) {
            return std::make_shared<planner_A>();
        }
        else if (type == C) {
            return std::make_shared<planner_C>();
        }
        else if (type == D) {
            return std::make_shared<planner_D>();
        }
        else {
            return nullptr;
        }
    }

};
}

// class PlannerFactory_D :public PlannerFactory //factory son
// {
// public :

//     PlannerFactory_D()=default;
//     virtual ~PlannerFactory_D() override
//     {
//         LOG(INFO)<<"D plannerBase created"<<std::endl;
//     }
//     virtual planner::plannerBase* fCreateplanner ()override
//     {
//         return new planner::planner_D();
//     }
// };

// class PlannerFactory_A :public PlannerFactory //factory son
// {
// public :

//     PlannerFactory_A()=default;
//     virtual ~PlannerFactory_A() override
//     {
//         LOG(INFO)<<"A plannerBase created"<<std::endl;
//     }
//     virtual planner::plannerBase* fCreateplanner ()override
//     {
//         return new planner::planner_A();
//     }
// };

// class PlannerFactory_B :public PlannerFactory //factory son
// {
// public :

//     PlannerFactory_B()=default;
//     virtual ~PlannerFactory_B() override
//     {
//         LOG(INFO)<<"B plannerBase created"<<std::endl;
//     }
//     virtual planner::plannerBase* fCreateplanner ()override
//     {
//         return new planner::planner_B();
//     }
// };

// class PlannerFactory_B :public PlannerFactory //factory son
// {
// public :

//     PlannerFactory_B()=default;
//     virtual ~PlannerFactory_B() override
//     {
//         LOG(INFO)<<"B plannerBase created"<<std::endl;
//     }
//     virtual planner::plannerBase* fCreateplanner ()override
//     {
//         return new planner::planner_B();
//     }
// };

#endif