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
void InvertedPattern(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}

		cout << endl;
	}
}

int main()
{

	InvertedPattern(ReadNumberPositive("Enter Numbwer"));

	return 0;
}
