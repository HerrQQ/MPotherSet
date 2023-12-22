#include "common.h"




double   fNormalizeAngle(const double angle)
{
  double a = std::fmod(angle + M_PI_, 2.0 * M_PI_);
  if (a < 0.0) {a += (2.0 * M_PI_);}
  return a - M_PI_;
}
double   fLinear_interpolation_angle(const double a0, const double t0, const double a1, const double t1, const double t) 
{
  
  if (fabs(t1 - t0) <= 0.01) 
  {
    // printf ("input time difference is too small! \n");
    return fNormalizeAngle(a0);
  }
  const double a0_n = fNormalizeAngle(a0);
  const double a1_n = fNormalizeAngle(a1);
  double d = a1_n - a0_n;
  if (d >M_PI_ ) {d = d - 2 * M_PI_;} 
  else if (d < -M_PI_) { d = d + 2 * M_PI_;}

  const double r = (t - t0) / (t1 - t0);
  const double a = a0_n + d * r;
  return fNormalizeAngle(a);
}


 double   fLinear_interpolation(const double &x0, const double t0,
 const double &x1, const double t1, const double t)
{
  if (fabs(t1 - t0) <= 1.0e-6 ||(t - t0)>(t1 - t0)) {
    return x0;
  }
  const double r = (t - t0) / (t1 - t0);
  const double x = x0 + r * (x1 - x0);
  return x;
}
