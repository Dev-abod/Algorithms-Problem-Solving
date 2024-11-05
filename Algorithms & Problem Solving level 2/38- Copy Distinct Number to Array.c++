#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void FillArray(int arr[100], int &arrLength)
{
	arrLength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}

short FindPositionInArray(int Number, int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
		{
			return i;
		}
	}
	return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrlength)
{
	return FindPositionInArray(Number, arr, arrlength) != -1;
}

void AddArrayElement(int Number, int arr[100], int &arrLength)
{
	// its a new element so we need to add the length by 1
	arrLength++;
	arr[arrLength - 1] = Number;
}

void CopyDestinationNumberToArray(int arrSource[100], int arrDestination[100], int SourceLength, int &DestinationLength)
{
	for (int i = 0; i < SourceLength; i++)
	{

		if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
		{
			AddArrayElement(arrSource[i], arrDestination, DestinationLength);
		}
	}
}

int main()
{

	int arrsource[100], SourceLength = 0, arrDetination[100], DestinationLength = 0;

	FillArray(arrsource, SourceLength);

	cout << "\nArray 1 element: \n";
	PrintArray(arrsource, SourceLength);

	CopyDestinationNumberToArray(arrsource, arrDetination, SourceLength, DestinationLength);

	cout << "\nArray 2  distince element : \n";
	PrintArray(arrDetination, DestinationLength);

	return 0;
}
