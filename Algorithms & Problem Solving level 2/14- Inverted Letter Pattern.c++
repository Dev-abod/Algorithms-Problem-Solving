#include <iostream>
#include <string>

using namespace std;

int ReadNumberPositive(string Massage)
{
	int Number = 0;
	do
	{
		cout << Massage << ": ";
		cin >> Number;

	} while (Number <= 0);
	return Number;
}
void InvertedLetterPattern(int Number)
{
	for (int i = 65 + Number - 1; i >= 65; i--)
	{
		for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
		{
			cout << char(i);
		}

		cout << endl;
	}
}

int main()
{

	InvertedLetterPattern(ReadNumberPositive("Enter Numbwer"));

	return 0;
}
