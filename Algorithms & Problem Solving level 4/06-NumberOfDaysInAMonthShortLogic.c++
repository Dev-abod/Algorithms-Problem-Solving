#include <iostream>
#include <string>
using namespace std;

bool IsLeapYear(int Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0;
}

short NumberOfDaysInAMonth(short Year, short Month)
{
    if (Month < 1 || Month > 12)
        return 0;

    int NumberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

short ReadYear()
{
    short Year;
    cout << "\nEnter a Year to check? ";
    cin >> Year;
    return Year;
}

short ReadMonth()
{
    short Month;
    cout << "\nEEnter a Month to check? ";
    cin >> Month;
    return Month;
}

int main()
{

    short Year = ReadYear();
    short Month = ReadMonth();

    cout << "\nNumber Of Days    in Year [" << Month << "] is "
         << NumberOfDaysInAMonth(Year, Month);

    return 0;
}