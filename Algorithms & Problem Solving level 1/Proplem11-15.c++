#include <iostream>
#include <string>
using namespace std;
// todo Proplem 11
/*enum enPassFail { Pass=1 , Fail=2 };

int ReadNumbers( int& Mark1 , int& Mark2 , int& Mark3)
{
    cout << "Please Enter Mark1\n";
    cin >> Mark1;
    cout << "Please Enter Mark2\n";
    cin >> Mark2;
    cout << "Please Enter Mark3\n";
    cin >> Mark3;
    return Mark1 , Mark2 , Mark3;
}

int SumMark3(int Mark1 , int Mark2 , int Mark3)
{
    return Mark1+Mark2+Mark3;
}

float CalculateAvergeMark(int Mark1 , int Mark2 , int Mark3)
{
    return (float)SumMark3(Mark1,Mark2,Mark3)/3;
}

enPassFail CheckAverage(float Average)
{
    if(Average>=50)
    return enPassFail::Pass;
    else
    return enPassFail::Fail;
}

void PrintAerage(float Average)
{
    if(CheckAverage(Average) == enPassFail::Pass)
    cout << "Pass\n";
    else
    cout << "Fail\n";
}*/

// todo Proplem 12
/*void ReadNumbers(int& Num1 , int& Num2)
{
    cout << "Please Enter Number Num1\n";
    cin >> Num1;
    cout << "Please Enter Number Num2\n";
    cin >> Num2;
}

int CheckMaxNumber (int Num1 , int Num2)
{
    if(Num1>Num2)
    return Num1;
    else
    return Num2;
}

void PrintMaxNumber(int NumberMax)
{
    cout << "Max Nmber is : " << NumberMax << endl;

}*/

// todo Proplem 13
/*void ReadNumbers(int &Num1, int &Num2, int &Num3)
{
    cout << "Please Enter Number Num1\n";
    cin >> Num1;
    cout << "Please Enter Number Num2\n";
    cin >> Num2;
    cout << "Please Enter Number Num3\n";
    cin >> Num3;
}

int CheckMaxNumber(int Num1, int Num2, int Num3)
{
    if (Num1 > Num2)
        if (Num1 > Num3)
            return Num1;
        else
            return Num3;

    else if (Num2 > Num3)
        return Num2;
    else
        return Num3;
}

void PrintMaxNumber(int NumberMax)
{
    cout << "Max Nmber is : " << NumberMax << endl;
}*/

// todo Proplem 14
/*void ReadSwapNumber2(int &Num1, int &Num2)
{
    cout << "Please Enter Number Num1\n";
    cin >> Num1;
    cout << "Please Enter Number Num2\n";
    cin >> Num2;
}

int CheckSwapNumber(int &A, int &B)
{
    int Temp;

    Temp = A;
    A = B;
    B = Temp;
}

void PrintSwapNumber(int Num1, int Num2)
{
    cout << "------------------------------------\n";
    cout << "Befor Swap Num1\n"
         << Num1 << endl;
    cout << "Befor Swap Num2\n"
         << Num2 << endl;
}*/

// Todo Proplem 15
/*void ReadNumber(float& A , float& B)
{
    cout << "Enter High Rectangle\n";
    cin >> A;
    cout << "Enter legth Rectangle\n";
    cin >> B;
}

float ClaculateRectangle(float A , float B)
{
    return A*B;
}

void PrintRectangle(float AreaRectangle)
{
    cout << "Area Rectangle = " << AreaRectangle << endl;
}*/



int main()
{
    /*int Mark1 , Mark2 , Mark3;
    ReadNumbers(Mark1 , Mark2 , Mark3);
    PrintAerage(CalculateAvergeMark(Mark1,Mark2,Mark3));*/

    /*int Num1,Num2;
    ReadNumbers(Num1,Num2);
    PrintMaxNumber(CheckMaxNumber(Num1,Num2));*/

    /*int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintMaxNumber(CheckMaxNumber(Num1, Num2, Num3));*/

    /*int Num1,Num2;
    ReadSwapNumber2(Num1,Num2);
    PrintSwapNumber(Num1,Num2);
    CheckSwapNumber(Num1,Num2);
    PrintSwapNumber(Num1,Num2);*/

    float A,B;
    ReadNumber(A,B);
    PrintRectangle(ClaculateRectangle(A,B));



    return 0;
}