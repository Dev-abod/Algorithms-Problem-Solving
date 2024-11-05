#include <iostream>
#include <string>
using namespace std;

// todo Proplem 26
/*int ReadNumber()
{
    int Number;
    cout << "Enter Number\n";
    cin >> Number;
    return Number;
}

void PrintRangeFrom1toN_usingFor(int N)
{
    int i;
    cout << "----------------------\n";
    for(int i=1 ; i<=N ; i++)
    {
        cout << i << endl;
    }
}

void PrintRangeFrom1toN_usingWhile(int N)
{
    int Counter =0;
    cout << "Range Printed using While Stetment:\n";
    while(Counter <N){
    Counter++;
    cout << Counter << endl;
    }
}

void PrintRangeFrom1toN_usingDoWhile(int N)
{
    int Counter =0;
    cout << "Range Printed:\n";
    do
    {
        Counter++;
        cout << Counter << endl;
    } while (Counter<N);
}*/

// todo Proplem 27
/*int ReadNumber()
{
    int Number;
    cout << "Enter Number\n";
    cin >> Number;
    return Number;
}

void PrintRangeFrom1toN_usingFor(int N)
{

    cout << "----------------------\n";
    for(int i=N ; i>=1; i--)
    {
        cout << i << endl;
    }
}

void PrintRangeFrom1toN_usingWhile(int N)
{
    int Counter =N+1;
    cout << "Range Printed using While Stetment:\n";
    while(Counter >1){
    Counter--;
    cout << Counter << endl;
    }
}

void PrintRangeFrom1toN_usingDoWhile(int N)
{
    int Counter =N+1;
    cout << "Range Printed:\n";
    do
    {
        Counter--;
        cout << Counter << endl;
    } while (Counter>1);
}*/

// todo Proplem 28
/*enum enOddOrEven
{
    Odd = 1,
    Even = 2
};
enOddOrEven CheckOddOrEven(int Number)
{
    if (Number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}

int ReadNumber()
{
    int Number;
    cout << "Enter Number\n";
    cin >> Number;
    return Number;
}

int PrintRangeFrom1toN_usingFor(int N)
{
    int Sum = 0;

    for (int Counter = 1; Counter <= N; Counter++)
    {
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
    }
    return Sum;
}

void PrintRangeFrom1toN_usingWhile(int N)
{
    int Counter = N + 1;
    cout << "Range Printed using While Stetment:\n";
    while (Counter > 1)
    {
        Counter--;
        cout << Counter << endl;
    }
}

int PrintRangeFrom1toN_usingDoWhile(int N)
{
    int Counter = 0;
    int Sum=0;
    do
    {
        Counter++;
       if (CheckOddOrEven(Counter) == enOddOrEven::Even)
       {
        Sum+=Counter;
       }
    } while (Counter < N);

    return Sum;
}*/

//todo Proplem 29 
//!the same Prolem 28

//todo Proplem 30
int ReadPositiveNumber(string Massage)
{
int Number;
do
{
   cout << Massage << endl;
   cin >> Number;
} while (Number <0 );
return Number;
}

int Factorial (int N)
{
    int F=1;
    for (int Counter = N ; Counter >= 1; Counter--)
    {
        F = F * Counter;
    }
    return F;
}






int main()
{
    // int N= ReadNumber();
    // PrintRangeFrom1toN_usingFor(N);
    // PrintRangeFrom1toN_usingWhile(N);
    // PrintRangeFrom1toN_usingDoWhile(N);

    // int N= ReadNumber();
    // PrintRangeFrom1toN_usingFor(N);
    // PrintRangeFrom1toN_usingWhile(N);
    // PrintRangeFrom1toN_usingDoWhile(N);

    //int N = ReadNumber();
    //PrintRangeFrom1toN_usingFor(N);
    // PrintRangeFrom1toN_usingWhile(N);
    //PrintRangeFrom1toN_usingDoWhile(N);

    //cout << Factorial(ReadPositiveNumber("Please enter A Positive Number\n"));






    return 0;
}