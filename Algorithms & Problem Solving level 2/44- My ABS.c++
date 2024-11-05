#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

float ReadNumber()
{
	int Number;
	cout << "Enter Number\n";
	cin >> Number;
	return Number;
}

float MyABS(float Number)
{
	if (Number >= 0)
		return Number;
	else
		return Number * -1;
}

int main()
{
	int Number = ReadNumber();
	cout << "Number = " << Number << endl;
	cout << "Number ABS = " << MyABS(Number) << endl;

	return 0;
}
