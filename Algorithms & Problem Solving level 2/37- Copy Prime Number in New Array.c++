#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int Random(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}

enum enPrime_NotPrime
{
	Prime = 1,
	NotPrime = 2
};

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

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
	cout << "\nEnter Number Of element :\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
		arr[i] = Random(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}

void AddArrayElement(int Number, int arr[100], int &arrLength)
{
	// its a new element so we need to add the length by 1
	arrLength++;

	arr[arrLength - 1] = Number;
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrime(arrSource[i]) == enPrime_NotPrime::Prime)
		{
			AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
		}
	}
}

int main()
{
	int arr[100], arr2[100], arrLength = 0, arr2Length = 0;

	FillArrayWithRandomNumbers(arr, arrLength);

	CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);

	cout << "\nArray 1 element: \n";
	PrintArray(arr, arrLength);

	cout << "\nArray 2 element Odd only: \n";
	PrintArray(arr2, arr2Length);

	return 0;
}
