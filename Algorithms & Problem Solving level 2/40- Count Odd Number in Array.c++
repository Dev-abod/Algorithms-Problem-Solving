#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int Random(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
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

int OddCount(int arr[100], int Length)
{
	int Count = 0;
	for (int i = 0; i < Length; i++)
	{
		if (arr[i] % 2 == 1)
			Count++;
	}
	return Count;
}

int main()
{

	int arr[100], arrLength = 0, arr2Length = 0;

	FillArrayWithRandomNumbers(arr, arrLength);
	int arr2[100];

	cout << "\nArray 1 element: \n";
	PrintArray(arr, arrLength);

	cout << "\nOdd Numbers count is: ";
	cout << OddCount(arr, arrLength);

	return 0;
}
