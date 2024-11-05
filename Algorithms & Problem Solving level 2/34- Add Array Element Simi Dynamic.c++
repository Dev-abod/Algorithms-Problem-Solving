#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int ReadNumberPositive(string Massage)
{
	int number = 0;
	cout << Massage;
	cin >> number;

	return number;
}

void AddArrayElement(int Number, int arr[100], int &arrLength)
{
	// its a new element so we need to add the length by 1
	arrLength++;
	arr[arrLength - 1] = Number;
}

void InputUserNumberInArray(int arr[100], int &arrLength)
{
	bool AddMore = true;
	do
	{
		AddArrayElement(ReadNumberPositive("Please Enter Number :\n"), arr, arrLength);
		cout << "\nDo you want too add more numbers? [0]:No,[1]:Yes?";
		cin >> AddMore;
	} while (AddMore);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}

int main()
{

	int arr[100], arrLength = 0;
	InputUserNumberInArray(arr, arrLength);

	cout << "\nArray Length: " << arrLength << endl;
	cout << "Array elements: ";
	PrintArray(arr, arrLength);

	return 0;
}
