#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
	int number = 0;
	do
	{
		cout << "enter numbers Array\n";
		cin >> number;
	} while (number <= 0);
	return number;
}

void Swap(int &A, int &B)
{
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
}

int RandomNumber(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}

void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
		arr[i] = i + 1;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

void ShuffleArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
	}
}

int main()
{

	int str[100];
	int arrLength = ReadNumber();

	FillArrayWithRandomNumbers(str, arrLength);

	cout << "\n Array elements Befor Shuffle:\n";
	PrintArray(str, arrLength);

	ShuffleArray(str, arrLength);

	cout << "\n Array elements After Shuffle:\n";
	PrintArray(str, arrLength);

	return 0;
}
