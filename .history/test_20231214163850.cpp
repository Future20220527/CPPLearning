#include <iostream>
#include <string>
using namespace std;

class Human
{
	public:
		string name;
		int age;

		void IntroduceSelf()
		{
			cout << "name is " << name << "and age is " << age;
		}

};

int main()
{
	Human firstMan;
	firstMan.name = "Adam";
	firstMan.IntroduceSelf();

	return 0;
}