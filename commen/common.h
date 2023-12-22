#ifndef _planner_Common_h__
#define _planner_Common_h__
#include "glog/logging.h"
#include <vector>
#include <map>
#include <cmath>
#include <utility>
#include "Filters.h"

#define M_PI_ 3.14159265358979323846	/* pi */

double   fNormalizeAngle(const double angle);
double   fLinear_interpolation_angle(const double a0, const double t0, const double a1, const double t1, const double t);
double   fLinear_interpolation(const double &x0, const double t0, const double &x1, const double t1, const double t);




#endif