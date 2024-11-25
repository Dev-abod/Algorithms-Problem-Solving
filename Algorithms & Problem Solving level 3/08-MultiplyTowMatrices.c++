
#include <vector>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
	int Rand;
	Rand = rand() % (To - From + 1) + From;
	return Rand;
}

void FillMatrixWithRandomNumber(int arr[3][3], int rows, int columns)
{
	
	for (short rows = 0; rows < 3; rows++)
	{
		for (short columns = 0; columns < 3; columns++)
		{
			arr[rows][columns] = RandomNumber(1,10);
		}
	}
}

string Space(short i)
{
	if (i < 10)
		return " ";
	else
		"  ";
}

void PrintMatrix(int arr[3][3], int rows, int columns)
{

	for (short rows = 0; rows < 3; rows++)
	{
		for (short columns = 0; columns < 3; columns++)
		{
			cout << setw(3)  <<  arr[rows][columns] << "   ";
		}
		cout << endl << endl;
	}
}

void MultiplyMatrix(int arr1[3][3], int arr2[3][3] , int arrMulti[3][3], int rows, int columns)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < columns; j++)
		{
			arrMulti[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
}
int main()
{

	srand((unsigned)time(NULL));

	int arr1[3][3] , arr2[3][3] , arrMulti[3][3];
	FillMatrixWithRandomNumber(arr1, 3, 3);
	FillMatrixWithRandomNumber(arr2, 3, 3);

	cout << "\nmatrix one: \n";
	PrintMatrix(arr1, 3, 3);

	cout << "\nmatrix tow: \n";
	PrintMatrix(arr2, 3, 3);

	MultiplyMatrix(arr1, arr2, arrMulti, 3, 3);

	cout << "\nResult: \n";
	PrintMatrix(arrMulti, 3, 3);



	system("pause>0");
}

