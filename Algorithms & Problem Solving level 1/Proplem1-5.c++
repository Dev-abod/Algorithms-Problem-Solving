#include <iostream>
#include <string>
using namespace std;


//todo Proplem 1
/*void PrintName(string Name)
{
    cout << "\nYour Name is: " << Name << endl;
}*/


//todo Proplem 2
//!  التأكد من تشغيل البرنامج علي فيجول ستوديو
/*string ReadName()
{
    string Name;
    cout << "Please enter your Name\n";
    cin >> Name;
    return Name;
}

void PrintName(string Name)
{
    cout << "Your Name is: " << Name << endl;
}*/


//todo Proplem3
/*enum enNumberType { Odd=1 , Even=2};

int ReadNumber(){
    int Num;
    cout << "Please Enter number\n";
    cin >> Num;
    return Num;
}

enNumberType CheckNumberType (int Num)
{
    int Result = Num%2;
    if(Result==0)
    return enNumberType::Even;
    else
    return enNumberType::Odd;
}
void PrintNumberType (enNumberType NumberType)
{
    if(NumberType==enNumberType::Even)
    cout << "\n Number is Even\n";
    else
    cout << "\nNuber is Odd\n";
}*/


//todo Proplem 4
/*struct stInfo
{
    int Age;
    bool HasDriverLicense;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "Please Enter Your Age\n";
    cin >> Info.Age;
    cout << "Do You Have Driver License\n";
    cin >> Info.HasDriverLicense;
    return Info;
}

bool IsAccepted(stInfo Info)
{
    return (Info.Age>=21 && Info.HasDriverLicense);
}

void PrintResult (stInfo Info)
{
    if (IsAccepted(Info))
    cout << "\nHired\n";
    else
    cout << "Rejected\n";
}*/


//todo Proplem 5
/*struct stInfo
{
    int Age;
    bool HasDriverLicense;
    bool Reccomend;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "Please Enter Your Age\n";
    cin >> Info.Age;
    cout << "Do You Have Driver License\n";
    cin >> Info.HasDriverLicense;
    cout << "Do You Reccomend\n";
    cin >> Info.Reccomend;
    return Info;
}

bool IsAccepted(stInfo Info)
{
    if(Info.Reccomend==1)
    return true;
    else
    (Info.Age>=21 && Info.HasDriverLicense);
}

void PrintResult (stInfo Info)
{
    if (IsAccepted(Info))
    cout << "\nHired\n";
    else
    cout << "Rejected\n";
}*/





int main()
{
    //PrintName("Abdullah");
    //PrintName(ReadName());
    //PrintNumberType(CheckNumberType(ReadNumber()));
    //PrintResult(ReadInfo());






    return 0;
}