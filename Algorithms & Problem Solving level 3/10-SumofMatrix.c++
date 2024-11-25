
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
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < columns; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], int rows, int columns)
{
	for (short rows = 0; rows < 3; rows++)
	{
		for (short columns = 0; columns < 3; columns++)
		{
			printf( "%0*d ",2, arr[rows][columns]);
		}
		cout << endl << endl;
	}
}



int printSumOfMatrix(int arr[3][3], int Rows, int Col)
{
	int Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Col; j++)
		{
			Sum += arr[i][j];
		}
	}

	return Sum;
}


int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3];
	FillMatrixWithRandomNumber(arr, 3, 3);

	cout << "\nthe followingis a 3×3 random matrix: \n";
	PrintMatrix(arr, 3, 3);

	cout << "Sum Matrix: " << printSumOfMatrix(arr, 3, 3);



	return 0;
}

