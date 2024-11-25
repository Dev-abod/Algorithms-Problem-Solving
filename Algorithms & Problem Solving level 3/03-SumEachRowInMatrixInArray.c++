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
			arr[rows][columns] = RandomNumber(1, 50);
		}
	}
}

void PrintMatrix(int arr[3][3], int rows, int columns)
{
	for (short rows = 0; rows < 3; rows++)
	{
		for (short columns = 0; columns < 3; columns++)
		{
			cout << setw(3) << arr[rows][columns] << "   ";
		}
		cout << endl << endl;
	}
}

int RowSum(int arr[3][3],int RowNumber, short Columns)
{
	int Sum =0;
	for (short j = 0; j < Columns; j++)
	{
		Sum += arr[RowNumber][j];
	}
	return Sum;
	
}

void SumMatrixRowsInArray(int arr[3][3], int arrSum[3] ,  int rows, int columns)
{

	for (short i = 0; i < 3; i++)
	{
		arrSum[i]= RowSum(arr, i, columns) ;
	}
}

void printRowsSumArray(int arrSum[3] , short Rows)
{
	cout << "The following are the sum of each row in the matrix:\n";

	for (short i = 0; i < Rows; i++)
	{
		cout << "Row " << i + 1 << " Sum = " << arrSum[i] << endl;
	}
}

int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3] , arrSum[3];

	FillMatrixWithRandomNumber(arr, 3, 3);
	cout << "\nthe followingis a 3×3 random matrix: \n";
	PrintMatrix(arr, 3, 3);


	SumMatrixRowsInArray(arr,arrSum, 3, 3);
	printRowsSumArray(arrSum , 3);

	return 0;
}

