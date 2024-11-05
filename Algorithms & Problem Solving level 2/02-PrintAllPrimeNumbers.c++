#include <string>
#include <iostream>
#include <math.h>
using namespace std;


enum enPrime_NotPrime { Prime = 1, NotPrime = 2 };

int ReadNumberPositive()
{
	int Number = 0;
	do
	{
		cout << "Enter Number Positive\n";
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

enPrime_NotPrime CheckPrime(int Number)
{
	int M = Number / 2;
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
		{
			return enPrime_NotPrime::NotPrime;
		}
	}
	return enPrime_NotPrime::Prime;
}

void PrintPrimeNumber(int Number)
{
	cout << "\n";
	cout << "Prime number From " << 1 << " To " << Number;
	cout << " are : " << endl;
	for (int i = 1; i <= Number; i++)
	{
		if (CheckPrime(i) == enPrime_NotPrime::Prime)
		{
			cout << i << endl;
		}
	}
}

int main()
{
	PrintPrimeNumber(ReadNumberPositive());

    system("pause>0");
}
