#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int Random(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}


void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
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

int ArraySum(int arr[100], int arrLength)
{
	int Sum = 0;
	
	for (int i = 0; i < arrLength; i++)
	{

		Sum += arr[i];
	}
	return Sum;
}
int ArrayAverage(int arr[100], int arrLength)
{
	return float(ArraySum(arr, arrLength) / arrLength);
}





int main()
{

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray Elements: ";
	PrintArray(arr, arrLength);
	cout << "\nSum Number Array : ";
	cout << ArraySum(arr, arrLength) << endl;
	cout << "\nAverage Array :";
	cout << ArrayAverage(arr, arrLength);

	return 0;
}
