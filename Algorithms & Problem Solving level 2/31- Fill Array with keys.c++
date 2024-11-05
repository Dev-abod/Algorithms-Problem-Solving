#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int ReadNumberPositive()
{
	int number = 0;
	do
	{
		cout << "enter numbers\n";
		cin >> number;
	} while (number <= 0);
	return number;
}

int Random(int From, int To)
{
	// Function to generate a random number
	int Random = rand() % (To - From + 1) + From;
	return Random;
}

enum enCharType
{
	SmallLetter = 1,
	CapitalLetter = 2,
	SpecialLetter = 3,
	Digit = 4
};

char GetRandomCharcter(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::SmallLetter:
	{
		return char(Random(97, 122));
		break;
	}
	case enCharType::CapitalLetter:
	{
		return char(Random(65, 90));
		break;
	}
	case enCharType::SpecialLetter:
	{
		return char(Random(33, 47));
		break;
	}
	case enCharType::Digit:
	{
		return char(Random(48, 57));
		break;
	}
	}
}

string GenerateWord(enCharType CharType, short Length)
{
	string word = "";
	for (int i = 1; i <= Length; i++)
	{
		word = word + GetRandomCharcter(CharType);
	}
	return word;
}

string GenerateKey()
{
	string Key = "";
	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

	return Key;
}

void FillArrayWithKeys(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = GenerateKey();
}

void PrintStringArray(string arr[100], int arrLength)
{
	cout << "Araay Elements:\n\n";
	for (int i = 0; i < arrLength; i++)
	{
		cout << "arr[" << i << "] : " << arr[i] << endl;
		;
	}
	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	string arr[100];
	int arrLength = 0;
	arrLength = ReadNumberPositive();

	FillArrayWithKeys(arr, arrLength);
	PrintStringArray(arr, arrLength);

	return 0;
}
