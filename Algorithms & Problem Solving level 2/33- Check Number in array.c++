#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int ReadNumberPositive(string Massage)
{
	int number = 0;
	do
	{
		cout << Massage;
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

void FillArrayWithKeys(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = Random(1, arrLength);
	}
}

short FindPositionInArray(int arr[100], int arrLength, int Search)
{
	int Counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Search)
		{

			return i;

		}

	}
	return -1;
}

bool InNumberInArray(int Search, int arr[100], int arrLength)
{
	return FindPositionInArray(arr, arrLength, Search) != -1;
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

	int arr[100];
	int arrLength = 0;
	arrLength = ReadNumberPositive("enter numbers Array elemnts\n");

	FillArrayWithKeys(arr, arrLength);
	cout << "Array 1 elements :" << endl << endl;;
	PrintArray(arr, arrLength);

	int Search = ReadNumberPositive("Please enter a Number to search for?\n");
	cout << "Number you are looking for is : " << Search << endl;

	if (!InNumberInArray(Search , arr ,arrLength))
		cout << "No ,The Number is  found :-)\n";
	else
		cout << "Yes ,The Number is not found :-(\n";
	return 0;
}
