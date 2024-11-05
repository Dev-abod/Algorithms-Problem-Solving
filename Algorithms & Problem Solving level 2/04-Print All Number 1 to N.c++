#include <string>
#include <iostream>
#include <math.h>
using namespace std;

int ReadNumberPositive(string Massage)
{
    int Number;
    do
    {
        cout << Massage << endl;
        cin >> Number;

    } while (Number <= 0);
    return Number;
}

bool IsPerfectNumber(int Number)
{
    int Sum = 0;

    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
        {
            Sum += i;
        }
    }
    return Sum == Number;
}

void PrintResult(int Number)
{
    for (int i = 01; i <= Number; i++)
    {
        if (IsPerfectNumber(i))
            cout << i << endl;
    }
}

int main()
{
    PrintResult(ReadNumberPositive("enter number Positive"));
}
