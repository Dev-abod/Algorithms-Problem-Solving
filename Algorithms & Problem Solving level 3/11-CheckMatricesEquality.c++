
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
			printf("%0*d ", 2, arr[rows][columns]);
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

bool AreEqualMatrices(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols)
{
	return printSumOfMatrix(Matrix1, Rows, Cols) == printSumOfMatrix(Matrix2, Rows, Cols);
}


int main()
{

	srand((unsigned)time(NULL));

	int Matrix1[3][3] , Matrix2[3][3];
	FillMatrixWithRandomNumber(Matrix1, 3, 3);
	cout << "\nMatrix 1: \n";
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithRandomNumber(Matrix2, 3, 3);
	cout << "\nMatrix 2: \n";
	PrintMatrix(Matrix2, 3, 3);


	if (AreEqualMatrices(Matrix1,Matrix2,3,3))
	{
		cout << "YES: both matrices are equal.\n"; 
	}
	else
		cout << "No: matrices are not equal\n";



	system("pause>0");
}

