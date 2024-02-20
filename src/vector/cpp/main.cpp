#include<iostream>

#include "vector3.cpp"

int main() {
	Vector3 vector;
	float x, y, z;
	x = 34.6;
	y = 45.7;
	z = 42.6;

	vector.calcVector3(x, y ,z);
	return 0;
}