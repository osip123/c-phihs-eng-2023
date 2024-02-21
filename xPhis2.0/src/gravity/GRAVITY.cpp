#include<iostream>
#include<math.h>

class GRAVITY
{
public:

	double xGravity(float mass, float z) {
		double res, time;
		time = sqrt(2 * z / g);
		res = time * g;
		std::cout << res << std::endl;
		return res;
	}

private:
	float g = 9.81;
};
