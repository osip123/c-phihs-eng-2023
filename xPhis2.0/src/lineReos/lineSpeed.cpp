#include<iostream>

class LINESPEED
{
public:

	
	double calacA(float t1, float t2, float v1, float v2) {
		double a;
		a = (t2 - t1) / (v2 - v1);
		return a;
	}
	double calcS(float t1, float t2, float v1, float v2) {
		double S, a;
		S = (v2 - v1) / 2 * calacA(t1, t2, v1, v2);
		return S;
	}

private:

};
