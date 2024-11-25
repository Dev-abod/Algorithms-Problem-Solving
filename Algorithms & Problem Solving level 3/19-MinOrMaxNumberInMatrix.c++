
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

int IsNumberMaxMatrix(int Matrix1[3][3], int Rows, int Cols)
{
	int NumberMin = Matrix1[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] > NumberMin)
			{
				NumberMin = Matrix1[i][j];
			}
		}
	}
	return NumberMin;
}

int IsNumberMinMatrix(int Matrix1[3][3], int Rows, int Cols)
{
	int NumberMax = Matrix1[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] < NumberMax)
			{
				NumberMax = Matrix1[i][j];
			}
		}
	}
	return NumberMax;
}

void PrintMaxAndMinNumbers(int NumberMax, int NumberMin)
{
	cout << "Max Number: " << NumberMax << endl;
	cout << "Min Number: " << NumberMin << endl;
}

int main()
{

	srand((unsigned)time(NULL));

	int Matrix1[3][3];

	FillMatrixWithRandomNumber(Matrix1, 3, 3);
	cout << "\nMatrix 1: \n";
	PrintMatrix(Matrix1, 3, 3);

	int NumberMax = IsNumberMaxMatrix(Matrix1, 3, 3);
	int NumberMin = IsNumberMinMatrix(Matrix1, 3, 3);

	PrintMaxAndMinNumbers(NumberMax, NumberMin);

	system("pause>0");
}
