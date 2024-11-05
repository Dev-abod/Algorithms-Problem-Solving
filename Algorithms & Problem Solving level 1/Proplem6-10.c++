#include <iostream>
#include <string>
using namespace std;

//todo Proplem 6
/*struct stInfo
{
    string FirstName;
    string LastName;
};

stInfo ReadName()
{
    stInfo Info;
    cout << "Enter Your First Name\n";
    cin >> Info.FirstName;
    cout << "Enter Your Last Name\n";
    cin >> Info.LastName;
    return Info;
}

string GetFullName(stInfo Info , bool Reversed)
{
    string FullName ;
    if (Revesed)
    FullName = Info.LastName + " " + Info.FirstName;
    else
    FullName = Info.FirstName + " " + Info.LastName;
    return FullName;
}

void PrintFullName(string FullName)
{
    cout << "Your Full Name: " << FullName << endl;
}*/


//todo Proplem 7
/*int ReadNumber()
{
    int Number;
    cout << "Please Enter Number\n";
    cin >> Number;
    return Number;
}

float calculateHalfNumber(int Number)
{
    
    return (float)Number/2;
}

void PrintHalfNumber(int num)
{
    string Result = "Half Of " + to_string(num) + " is " + to_string(calculateHalfNumber(num));
    cout << endl << Result << endl;

}*/


//todo Proplem 8
/*enum enPassFail{Pass=1 , Fail=2};
int ReadMarkStudent()
{
    int Mark;
    cout << "Please enter mark\n";
    cin >> Mark;
    return Mark;
}

enPassFail CheckPassOrFail(int Mark)
{
    if(Mark>=50)
    return enPassFail::Pass;
    else
    return enPassFail::Fail;
}

void PrintMarkStudent(int Mark)
{
    if(CheckPassOrFail(Mark)==enPassFail::Pass)
    cout << "\n Pass \n " ;
    else
    cout << "\n Fail \n ";
}*/


//todo Proplem 9
/*struct stNumbers  //!My Way
{
    int Num1 , Num2 , Num3;
};

stNumbers ReadNumbers()
{
    stNumbers Number;
    cout << "Please Enter Num1\n";
    cin >> Number.Num1;
    cout << "Please Enter Num2\n";
    cin >> Number.Num2;
    cout << "Please Enter Num3\n";
    cin >> Number.Num3;
    return Number ;
}

float SumNumbers(stNumbers Numbers)
{
    return (Numbers.Num1+Numbers.Num2+Numbers.Num3);
}

void PrintNumbers(float SumNumbers)
{
    cout << " Sum Numbers is: " << SumNumbers;
}*/

/*int ReadNumberOf3(int& Num1 , int& Num2 , int& Num3) //! My Way Mohammed Hadhod
{
    cout << " Please Enter Num1\n";
    cin >> Num1;
    cout << " Please Enter Num2\n";
    cin >> Num2;
    cout << " Please Enter Num3\n";
    cin >> Num3;
}

int SumNumberOf3(int Num1 , int Num2, int Num3)
{
    return Num1 + Num2 + Num3;

}

void PrintSumNumberOf3(int Number)
{
    cout << "Sum Number is: " << Number << endl;
}*/

//todo Proplem 10
/*int ReadNumberOfMark(int& Mark1 , int& Mark2 , int& Mark3)
{
    cout << "Please Enter mark1\n";
    cin >> Mark1;
    cout << "Please Enter mark2\n";
    cin >> Mark2;
    cout << "Please Enter mark3\n";
    cin >> Mark3;
}
int SumNumberOf3(int Mark1 , int Mark2 , int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}
float AverageNumberOfMark(int Mark1 , int Mark2 , int Mark3)
{
    return (float)SumNumberOf3(Mark1 , Mark2 , Mark3) / 3;
}

void PrintNumberOfMark(float Mark)
{
    cout << "MArk Student is : " << Mark << endl;
}*/






int main()
{
    //PrintFullName(GetFullName(ReadName(),true));
    //PrintHalfNumber(ReadNumber());
    //PrintMarkStudent(ReadMarkStudent());
    //PrintNumbers(SumNumbers(ReadNumbers()));
    /*int Num1 , Num2 , Num3; //! My Way Mohammed Hadhod
    ReadNumberOf3(Num1 , Num2 , Num3);
    PrintSumNumberOf3(SumNumberOf3(Num1 , Num2 , Num3));*/
    /*int Mark1 , Mark2 , Mark3;
    ReadNumberOfMark(Mark1 , Mark2 , Mark3);
    PrintNumberOfMark(AverageNumberOfMark(Mark1 , Mark2 , Mark3));*/







    return 0;
}