#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int ReadNumber()
{
	int Number = 0;
	do
	{
		cout << "enter Number\n";
		cin >> Number;

	} while (Number <= 0);
	return Number;
}

int Random(int From, int To)
{
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

char GetLetterCharacter(enCharType CharType)
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
		return char(Random(48, 54));
		break;
	}
	}
}

string GenerateWord(enCharType CharType, short Length)
{
	string word = "";
	for (int i = 1; i <= Length; i++)
	{
		word = word + GetLetterCharacter(CharType);
	}
	return word;
}

string GenerateKey()
{
	string Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

	return Key;
}

void PrintKeys(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		cout << "Key [" << i << "] :" << GenerateKey() << endl;
	}
}

int main()
{
	PrintKeys(ReadNumber());
	return 0;
}
