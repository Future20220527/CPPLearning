#include <iostream>
#include <string>
using namespace std;

class Human
{
	public:
		string name;
		int age;

		Human(string humanname = 'test1', int humanage = 10)
		{
			name = humanname;
			age = humanage;
			cout << "name is " << name << "and age is " << age;
		}

		void IntroduceSelf()
		{
			cout << "name is " << name << "and age is " << age;
		}

};

int main()
{
	Human firstMan("test2", 22);

	return 0;
}