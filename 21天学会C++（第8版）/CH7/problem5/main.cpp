#include <iostream>
using namespace std;

const auto Pi = 3.14159;

void Calculator(double radius);

int main()
{
	auto radius = 1.0;
	Calculator(radius);

	return 0;
}

void Calculator(double radius)
{
	cout << "Area and circumference are: " << Pi*radius*radius \
	<< " and " << 2*Pi*radius << endl;
}