
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

void PrintMiddleRowOfMatrix(int arr[3][3], int Rows, int Col)
{
	short MiddleRow = Rows / 2;

	
		for (short j = 0; j < Col; j++)
		{
		 printf( "%0*d  " , 2,  arr[MiddleRow][j]);
		}

		cout << "\n";
}

void PrintMiddleColOfMatrix(int arr[3][3], int Rows, int Col)
{
	short MiddleCol = Col / 2;

	for (short j = 0; j < 3; j++)
	{
		printf("%0*d  ", 2, arr[MiddleCol][j]);

	}
	cout << "\n";
	
}


int main()
{

	srand((unsigned)time(NULL));

	int arr[3][3];
	FillMatrixWithRandomNumber(arr, 3, 3);

	cout << "\nthe followingis is random matrix: \n";
	PrintMatrix(arr, 3, 3);


	cout << "\nMiddle Row of Matrix1 is: \n";
	PrintMiddleRowOfMatrix(arr, 3, 3);

	cout << "\nMiddle Col of Matrix1 is: \n";
	PrintMiddleColOfMatrix(arr, 3, 3);



	return 0;
}

