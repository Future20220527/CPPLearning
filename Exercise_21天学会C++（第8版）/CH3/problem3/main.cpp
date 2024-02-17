#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double pi = M_PI;
	
	cout << "Please input the radius of circle:" << endl;
	float circleRadius = 0.0;
	cin >> circleRadius;
	cout << "The area and perimeter are " << pi*circleRadius*circleRadius << " and " << 2*pi*circleRadius <<endl;

	return 0;
}