#include <iostream>
#include <string>
using namespace std;

bool IsLeapYear(int Year)
{
    if (Year % 400 == 0)
        return true;

    else if (Year % 100 == 0)
        return false;

    else if (Year % 4 == 0)
        return true;

    else
        return false;
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