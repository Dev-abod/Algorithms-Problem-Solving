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

int CountDigitFrequency(short DigitToCheck, int Number)
{

	int Remainder = 0;
	int Count = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (Remainder == DigitToCheck)
		{
			Count++;
		}
	}

	return Count;
}

int main()
{

	int Number = ReadNumberPositive("Please enter the main  Number");
	short DigitToCheck = ReadNumberPositive("Please enter one digit to check ");
	
	cout << "Digit " << DigitToCheck << " Frequency is "
		 << CountDigitFrequency(DigitToCheck, Number);

	return 0;
}
