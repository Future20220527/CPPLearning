#include <iostream>
using namespace std;

int main()
{
	int arrayLength = 10;
	int arrTest[arrayLength] = {1,2,3,4,5,6};
	for (int i = arrayLength-1; i>=0; i-=1)
	{
		cout << arrTest[i];
	}
	cout << endl;

	return 0;
}