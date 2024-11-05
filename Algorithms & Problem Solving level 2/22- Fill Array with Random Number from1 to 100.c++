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




int main()
{
	srand((unsigned)time(NULL));

	int arr[100], Length;
	
	FillArrayWithRandomNumbers(arr, Length);

	cout << "\nArray Elements: ";
	PrintArray(arr, Length);

	return 0;
}
