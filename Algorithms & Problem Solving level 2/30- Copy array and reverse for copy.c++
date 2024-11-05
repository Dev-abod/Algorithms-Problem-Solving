#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
	cout << "\nEnter Number Of element :\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}

void CopyArrayinReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
	for (int i = arrLength; i >= 0; i--)
	{
		arrDestination[i] = arrSource[arrLength - 1 - i];
	}
}

int main()
{

	int arr[100], arrLength;
	FillArrayWithRandomNumbers(arr, arrLength);
	int arr2[100];
	CopyArrayinReverseOrder(arr, arr2, arrLength);
	cout << "Source Array :";
	PrintArray(arr, arrLength);
	cout << endl;

	cout << "Copy Array :";
	PrintArray(arr2, arrLength);
	cout << endl;
	return 0;
}
