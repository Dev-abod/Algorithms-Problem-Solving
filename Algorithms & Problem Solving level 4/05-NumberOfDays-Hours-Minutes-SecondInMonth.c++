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

    if (Month == 2)
        return IsLeapYear(Year) ? 29 : 28;

    short arr31Days[7] = {1, 3, 5, 7, 8, 10, 12};

    for (short i = 1; i <= 7; i++)
        if (arr31Days[i - 1] == Month)
            return 31;

    // if you reach here then its 30 days.
    return 30;
}

short NumberOfHoursInAMonth(short Year, short Month)
{
    return NumberOfDaysInAMonth(Year, Month) * 24;
}
int NumberOfMinutesInAMonth(short Year, short Month)
{
    return NumberOfHoursInAMonth(Year, Month) * 60;
}
int NumberOfSecondInAMonth(short Year, short Month)
{
    return NumberOfMinutesInAMonth(Year, Month) * 60;
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

    cout << "\nNumber Of Hours    in Year [" << Month << "] is "
         << NumberOfHoursInAMonth(Year, Month);

    cout << "\nNumber Of Days    in Year [" << Month << "] is "
         << NumberOfMinutesInAMonth(Year, Month);

    cout << "\nNumber Of Days    in Year [" << Month << "] is "
         << NumberOfSecondInAMonth(Year, Month);

    return 0;
}