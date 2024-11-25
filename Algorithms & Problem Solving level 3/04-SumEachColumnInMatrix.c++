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

int ColumnSum(int arr[3][3], int ColumnsNumber, short Rows)
{
	int RowSum = 0;
	for (short j = 0; j <= Rows - 1; j++)
	{
		RowSum += arr[j][ColumnsNumber];
	}

	return RowSum;
}

void PrintSumEachColumns(int arr[3][3], short Rows, short columns)
{

	for (short i = 0; i < columns; i++)
	{
		cout << "Col " << i + 1 << " Sum = " << ColumnSum(arr, i, Rows) << endl;
	}
}

int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3];
	FillMatrixWithRandomNumber(arr, 3, 3);

	cout << "\nthe followingis a 3×3 random matrix: \n";
	PrintMatrix(arr, 3, 3);


	cout << "The following are the sum of each columns in the matrix:\n";
	PrintSumEachColumns(arr, 3, 3);


	return 0;
}

