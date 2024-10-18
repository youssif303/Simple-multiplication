#include <iostream>
using namespace std;
int muli(int num)
{
	//if (num % 2 == 0)
	//	return num * 8;
	//else
	//	return num * 9;

	return num % 2 == 0 ? num * 8 : num * 9;
}
int main()
{
	cout << "output = " << muli(3);
	return 0;
}