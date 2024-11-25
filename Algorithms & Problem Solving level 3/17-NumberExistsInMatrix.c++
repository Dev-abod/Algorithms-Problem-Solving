
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

int CountNumberInMatrix(int Matrix1[3][3], int Rows, int Cols, int NumberCount)
{
	short count = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == NumberCount)
			{
				count++;
			}
		}
	}
	return count;
}

bool IsNumberInMatrix(int Matrix1[3][3], int Rows, int Cols, int NumberCount)
{
	short count = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == NumberCount)
			{
				return true;
			}
		}
	}
	return false;
}

int ReadNumber()
{
	int Num = 0;
	cout << "Please Enter the Number to look for in matrix? ";
	cin >> Num;

	return Num;
}

int main()
{

	srand((unsigned)time(NULL));

	int Matrix1[3][3];
	// int Matrix1[3][3]{ {0,0,0} , { 1,2,0} , {1,0,0} };
	FillMatrixWithRandomNumber(Matrix1, 3, 3);
	cout << "\nMatrix 1: \n";
	PrintMatrix(Matrix1, 3, 3);

	// using count is slower  method
	if (CountNumberInMatrix(Matrix1, 3, 3, ReadNumber() > 0))
		cout << "Yes: It is there\n";
	else
		cout << "NO: It is there\n";

	// if (IsNumberInMatrix(Matrix1, 3, 3 , ReadNumber()))
	//	cout << "Yes: It is there\n";
	// else
	//	cout << "NO: It is there\n";

	system("pause>0");
}
