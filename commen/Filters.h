#ifndef _Filters_Common_h__
#define _Filters_Common_h__

using namespace std;

#define N 10
#define LPF_80 0.8

class Filters

{
public:
	double fLPFFilter_Main(const double & value);
	double fMVAFFilter_Main(const double & value);
	double fRAFFilter_Main(const double & value);
	double fWAFFilter_Main(const double & value);
};

#endif