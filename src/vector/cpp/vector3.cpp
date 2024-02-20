#include<iostream>


class Vector3
{
public:
	bool vertPepos, gorRpos, repos;
	float speed, vertspeed, gorspeed;

	float calcVector3(float x, float y, float z) {


		if (repos)
		{
			x = calcX(x, speed);
		}
		
		else if(vertPepos)
		{
			z = calcZ(z, vertspeed);
		}

		else
		{
			y = calcY(y, gorspeed);
		}

		std::cout << x, y, z;

		return x, y, z;
	}

	
private:
	double calcX(float x, float speed) {
		double res;
		if (speed > 0)
		{
			res = x + speed;
		}
		else
		{
			res = x - speed;
		}
		return res;
	}

	double calcZ(float z, float vertspeed) {
		double res;
		if (z >= 0)
		{
			if (vertspeed > 0)
			{
				res = z + vertspeed;
			}
			else {
				res = z - vertspeed;
			}
		}

		else
		{
			res = 0;
		}

		return res;
	}

	double calcY(float y, float gorspeed) {
		double res;
		if (gorspeed > 0)
		{
			res = y + gorspeed;
		}
		else
		{
			res = y - gorspeed;
		}
		return res;
	}
};