#include <iostream>
#include <string>
using namespace std;

class Human
{
	public:
		string name;
		int age;

		Human(string humanname = "test.1", int humanage = 10)
		{
			name = humanname;
			age = humanage;
			cout << "name is " << name << "and age is " << age;
		}

		Human(string humanname = "test.2")
		{
			name = humanname;
			age = 18;
			cout << "name is " << name << "and age is " << age;
		}

		void IntroduceSelf()
		{
			cout << "name is " << name << "and age is " << age;
		}

};

int main()
{
	Human firstMan("test.3");

	return 0;
}