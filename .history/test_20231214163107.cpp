#include <iostream>
#include <string>
using namespace std;

class Human
{
	private:
		string name;
		int age;
	
	public:
		void IntroduceSelf()
		{
			cout << "name is " << name << "and age is " << cout << age;
		}

}

int main()
{
	Human firstMan;
	firstMan.name = "Adam";
	firstMan.IntroduceSelf();

	return 0;
}