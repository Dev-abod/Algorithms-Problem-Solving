
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
			printf("%0*d ", 2, arr[rows][columns]);
		}
		cout << endl
			 << endl;
	}
}

bool IsNumberIntersected(int Matrix2[3][3], int Number, int Rows, int Cols)
{
	int c = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix2[i][j] == Number)
			{
				return true;
			}
		}
	}
	return false;
}

void PrintIntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols)
{
	int Number = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Number = Matrix1[i][j];

			if (IsNumberIntersected(Matrix2, Number, 3, 3))
			{
				cout << "  " << Number << " ";
			}
		}
	}
}

int main()
{

	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3], MatrixEqual[3];
	FillMatrixWithRandomNumber(Matrix1, 3, 3);
	cout << "\nMatrix 1: \n";
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithRandomNumber(Matrix2, 3, 3);
	cout << "\nMatrix 2: \n";
	PrintMatrix(Matrix2, 3, 3);

	cout << "Intersected Number are: ";
	PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);

	system("pause>0");
}
