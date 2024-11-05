#include <iostream>
#include <string>

using namespace std;

int ReadNumberPositive(string Massage)
{
	int Number = 0;
	do
	{
		cout << Massage << endl;
		cin >> Number;

	} while (Number < 0);
	return Number;
}

void PrintDigits(int Number)
{
	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
	}
}

int main()
{
	PrintDigits(ReadNumberPositive("Please enter number Positive: "));

	return 0;
}
