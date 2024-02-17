#include <iostream>
using namespace std;

const auto Pi = 3.14159;

double Volume(double radius, double height);
double Volume(double radius);

int main()
{
	auto radius = 1.0, height = 1.0;
	cout << "Volume of a sphere: " << Volume(radius) << endl;
	cout << "Volume of a cylinder: " << Volume(radius, height) << endl;

	return 0;
}

double Volume(double radius, double height)
{
	return Pi*radius*radius*height;
}

double Volume(double radius)
{
	return 4*Pi*radius*radius*radius/3;
}
