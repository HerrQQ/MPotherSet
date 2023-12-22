#include <iostream>
#include <algorithm>
#include "Filters.h"

using namespace std;



double Filters::fLPFFilter_Main(const double & value)
{
	double a_new=0.f;
	static double s_a_old = 0.f;

	 a_new = value;
	a_new = s_a_old * LPF_80 + (1.0 - LPF_80) * a_new ;
	s_a_old = a_new;
	return a_new;
}
