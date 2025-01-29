#include <iostream>
#include <string>
using namespace std;

bool isLeapYear(short Year)
{
    // if year is divisible by 4 AND not divisible by 100
    // OR if year is divisible by 400
    // then it is a leap year
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}


short DayOfWeekOrder(short Day, short Month, short Year)
{
    short a, y, m;
    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    // Gregorian:
    // 0:sun, 1:Mon, 2:Tue...etc
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

short NumberOfDayFromTheBeginingOfTheYear(int Day, int Month, int Year)
{
    short TotalDays =0;

    for(int i=1 ; i<=Month -1 ; i++)
    {
        TotalDays += NumberOfDaysInAMonth(i,Year);
    }

    TotalDays += Day;

    return TotalDays;
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
    cout << "\nEnter a Month to check? ";
    cin >> Month;
    return Month;
}

short ReadDay()
{
    short Day;
    cout << "\nEnter a Day to check? ";
    cin >> Day;
    return Day;
}

int main()
{

    short Year = ReadYear();
    short Month = ReadMonth();
    short Day = ReadDay();

    cout << "\nNumber Of Day From The Begining Of The Year is : "
         << NumberOfDayFromTheBeginingOfTheYear(Day, Month, Year);

    return 0;
}