#include <iostream>
#include <cmath>
using namespace std;

float GetFractionPart(float Number)
{
	return Number - int(Number);
}
int MyCeil(float Number)
{
	if (abs(GetFractionPart(Number)) > 0)
	{
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	}
	else
	{
		return Number;
	}
}

float ReadNumber()
{
	float Number;
	cout << "Pleas enter a number ? " << endl;
	cin >> Number;

	return Number;
}

int main()
{
	float Number = ReadNumber();

	cout << "My Ceiling Result : " << MyCeil(Number) << endl;
	cout << "C++ Ceiling Result : " << ceil(Number) << endl;
}
