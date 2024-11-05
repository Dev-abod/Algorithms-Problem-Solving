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

	} while (Number <= 0);
	return Number;
}

int CountDigitFrequency(short Digit, int Number)
{
	int Remainder = 0;
	int Count = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (Digit == Remainder)
		{
			Count++;
		}
	}
	return Count;
}

void PrintAllDigitFrequency(int Num)
{
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		short DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(i, Num);

		if (DigitFrequency > 0)
		{
			cout << "Digit " << i << " Frequency is "
				 << DigitFrequency << " Time(s) : " << endl;
		}
	}
}

int main()
{

	int number = ReadNumberPositive("enter Number");
	PrintAllDigitFrequency(number);

	return 0;
}
