#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void FillArray(int arr[100], int &arrLength)
{
	arrLength = 5;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 10;
	arr[3] = 20;
	arr[4] = 10;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}

bool IsPalindrmeArray(int arr[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] != arr[length - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{

	int arr[100], Length = 0;
	FillArray(arr, Length);

	cout << "\nArray 1 element: \n";
	PrintArray(arr, Length);

	if (IsPalindrmeArray(arr, Length))
		cout << "\nYes array is Palendrome\n";
	else
		cout << "\nNo array is Palendrome\n";

	return 0;
}
