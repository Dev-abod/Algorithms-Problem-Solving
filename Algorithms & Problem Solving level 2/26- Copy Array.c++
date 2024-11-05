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
void ArrayCopy(int arrSource[100], int arrCopy[100], int arrLength)
{
	for (int i = 0; i <= arrLength; i++)
	{
		arrCopy[i] = arrSource[i];
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrLength;
	FillArrayWithRandomNumbers(arr, arrLength);
	int arr2[100];
	ArrayCopy(arr, arr2, arrLength);
	cout << "Source Array :";
	PrintArray(arr, arrLength);
	cout << endl;

	cout << "Copy Array :";
	PrintArray(arr2, arrLength);
	cout << endl;
	return 0;
}
