
#include <vector>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

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

bool AreIdentityMatrices(int Matrix1[3][3], int Rows, int Cols)
{
	// Check  Diagonal element are 1 and rest element are 0
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			// check for diagonal element
			if (i == j && Matrix1[i][j] != 1)
			{
				return false;
			}
			// check for rest element
			else if (i != j && Matrix1[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{

	srand((unsigned)time(NULL));

	int Matrix1[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
	// int Matrix1[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };

	cout << "\nMatrix 1: \n";
	PrintMatrix(Matrix1, 3, 3);

	if (AreIdentityMatrices(Matrix1, 3, 3))
	{
		cout << "YES: matrix is identity.\n";
	}
	else
		cout << "YES: matrix is NOT identity.\n";

	system("pause>0");
}
