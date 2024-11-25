
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
			arr[rows][columns] = RandomNumber(1, 10);
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

int CountNumber()
{
	int Num = 0;
	cout << "Enter the number to count in matric? ";
	cin >> Num;

	return Num;
}

int CountNumberMatrices(int Matrix1[3][3], int Rows, int Cols, int NumberCount)
{
	short count = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			// check for diagonal element
			if (Matrix1[i][j] == NumberCount)
			{
				count++;
			}
		}
	}
	return count;
}

bool IsSparseMatrix(int Matrix[3][3], short Rows, short Cols)
{
	short MatrixSize = Rows * Cols;
	return CountNumberMatrices(Matrix, 3, 3, 0) >= (MatrixSize / 2);
}

int main()
{

	srand((unsigned)time(NULL));

	int Matrix1[3][3]{{0, 0, 0}, {1, 2, 0}, {1, 0, 0}};
	// FillMatrixWithRandomNumber(Matrix1, 3, 3);
	cout << "\nMatrix 1: \n";
	PrintMatrix(Matrix1, 3, 3);

	if (IsSparseMatrix(Matrix1, 3, 3))
		cout << "Yes: It is Spase Mtrix\n";
	else
		cout << "NO: It is NOT Spase Mtrix\n";

	system("pause>0");
}
