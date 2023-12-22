#ifndef _planner_struct_H_
#define _planner_struct_H_

typedef struct Location_tag
{
    // it is a temporary dummy 
}Location;

typedef struct VehicleState_tag
{
    // it is a temporary dummy 
}VehicleState;

typedef struct PlannerDataFlow_tag
{
    // it is a temporary dummy 
}PlannerDataFlow;


typedef struct Parameters_tag
{
    float Xxxx{0.f};
    float xXxx{0.f};
    float xxXx{0.f};
    float xxxX{0.f};
}Parameters;


enum PlannerType {

    A=0,
    B,
    C,
    D

};





#endif