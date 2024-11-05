#include <iostream>
#include <string>
#include <math.h>
using namespace std;

float ReadNumber()
{
	int Number;
	cout << "Enter Number\n";
	cin >> Number;
	return Number;
}

int MyFloor(float Number)
{

	if (Number > 0)
		return int(Number);
	else
		return int(Number) - 1;
}

int main()
{
	float Number = ReadNumber();
	cout << "My Floor Result : " << MyFloor(Number) << endl;
	cout << "C++ Floor Result : " << floor(Number) << endl;

	return 0;
}
