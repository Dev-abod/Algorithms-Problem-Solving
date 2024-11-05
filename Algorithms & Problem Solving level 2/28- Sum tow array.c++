#include <iostream>
#include <string>
#include <cstdlib>
#include <Math.h>
using namespace std;

int ReadPositveNumber()
{
	int number = 0;
	do
	{
		cout << "How numbers element Array\n";
		cin >> number;
	} while (number <= 0);
	return number;
}

int Random(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = Random(1, 100);
}

void Sumof2Arrays(int arr[100], int arr2[100], int arrSum[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arrSum[i] = arr[i] + arr2[i];
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << "\t";

	cout << "\n";
}

int main()
{

	int arr[100], arr2[100], arrSum[100], arrLength;

	arrLength = ReadPositveNumber();
	FillArrayWithRandomNumbers(arr, arrLength);
	FillArrayWithRandomNumbers(arr2, arrLength);

	Sumof2Arrays(arr, arr2, arrSum, arrLength);

	cout << "elemnt Array 1 : ";
	PrintArray(arr, arrLength);

	cout << "elemnt Array 2 : ";
	PrintArray(arr2, arrLength);

	cout << "Sum of Array1 and array2 elements : ";
	PrintArray(arrSum, arrLength);
}
