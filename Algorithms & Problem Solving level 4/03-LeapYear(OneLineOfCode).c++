#include <iostream>
#include <string>
using namespace std;

bool IsLeapYear(int Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0;
}

int ReadYear()
{
    short Year;
    cout << "\nEnter a Year to check? ";
    cin >> Year;
    return Year;
}

int main()
{
    short Year = ReadYear();

    if (IsLeapYear(Year))
    {
        cout << Year << " is Leap Year\n";
    }
    else
        cout << Year << " is NOT Leap Year\n";

    return 0;
}