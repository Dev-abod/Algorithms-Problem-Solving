#include <iostream>
#include <string>
using namespace std;

bool IsLeapYear(int Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0;
}

short NumberOfDaysInAYear(short Year)
{
    return IsLeapYear(Year) ? 366 : 365;
}
short NumberOfHoursInAYear(short Year)
{
    return NumberOfDaysInAYear(Year) * 24;
}
int NumberOfMinutesInAYear(short Year)
{
    return NumberOfHoursInAYear(Year) * 60;
}
int NumberOfSecondInAYear(short Year)
{
    return NumberOfMinutesInAYear(Year) * 60;
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
    cout << "\nNumber Of Days    in Year [" << Year << "] is "
         << NumberOfDaysInAYear(Year);

    cout << "\nNumber Of Hours    in Year [" << Year << "] is "
         << NumberOfHoursInAYear(Year);

    cout << "\nNumber Of Minutes    in Year [" << Year << "] is "
         << NumberOfMinutesInAYear(Year);

    cout << "\nNumber Of Second    in Year [" << Year << "] is "
         << NumberOfSecondInAYear(Year);

    return 0;
}