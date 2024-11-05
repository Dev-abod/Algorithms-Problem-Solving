#include <iostream>
#include <string>
#include <math.h>
using namespace std;

float GetFractionPart(float Number)
{
	return Number - int(Number);
}

float ReadNumber()
{
	int Number;
	cout << "Enter Number\n";
	cin >> Number;
	return Number;
}

int MyRound(float Number)
{
	int InPart;
	InPart = int(Number);

	float FractionPart = GetFractionPart(Number);
	if (abs(FractionPart) >= .5)
	{
		if (Number > 0)
			return ++InPart;
		else
			return --InPart;
	}

	else
	{
		return InPart;
	}
}

int main()
{
	float Number = ReadNumber();
	cout << "My Round Result : " << MyRound(Number) << endl;
	return 0;
}
