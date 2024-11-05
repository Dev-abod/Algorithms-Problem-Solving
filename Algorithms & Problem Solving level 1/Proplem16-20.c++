#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//todo Proplem 16
/*void ReadNumber(float& A , float& Diagonal )
{
    cout << "Enter Number\n";
    cin >> A;
    cout << "Enter Diagonal\n";
    cin >> Diagonal;
}

float CalculateAreaReactangleDiagonal(int A , int Diagonal)
{
    float Area= A * sqrt(pow(Diagonal,2)-pow(A,2));
    return Area;
}

void PrintAreadiagonalRectangle(float Area)
{
    cout << "Area Rectangle diagonal : " << Area;
}*/


//todo Proplem 17
/*void ReadNumber(float& A , float& H )
{
    cout << "Enter Number\n";
    cin >> A;
    cout << "Enter Number\n";
    cin >> H;
}

float CalculateTriangleArea(int A , int H)
{
    float Area= (A/2)*H;
    return Area;
}

void PrintTriangleArea(float Area)
{
    cout << "Area Rectangle diagonal : " << Area;
}*/

//todo Proplem 18
/*void ReadNumber(float& R)
{
    cout << "Enter Number\n";
    cin >> R;
    
}

float CalculateCircleArea(int R)
{
    const float PI=3.14;
    float Area= PI*pow(R,2);
    return Area;
}

void PrintCircleeArea(float Area)
{
    cout << "Area Circle : " << Area;
}*/


//todo Proplem 19
/*float ReadNumber()
{
    float D;
    cout << "Enter Number\n";
    cin >> D;
    return D;
    
}

float CalculateCircleArea(int D)
{
    const float PI=3.14;
    float Area= PI*pow(D,2);
    Area=Area/4;
    return Area;
}

void PrintCircleeArea(float Area)
{
    cout << "Area Circle : " << Area;
}*/

//todo Proplem 20 لم يكتب الحل لمعرفة طريقته


int main()
{
    /*float A , Diagonal;
    ReadNumber(A,Diagonal);
    PrintAreadiagonalRectangle(CalculateAreaReactangleDiagonal(A,Diagonal));*/

    /*float A , H;
    ReadNumber(A,H);
    PrintTriangleArea(CalculateTriangleArea(A,H));*/

    /*float R;
    ReadNumber(R);
    PrintCircleeArea(CalculateCircleArea(R));*/

    float D;
    PrintCircleeArea(CalculateCircleArea(ReadNumber()));







    return 0;
}