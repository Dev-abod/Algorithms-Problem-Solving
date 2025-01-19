#include <iostream>
#include <string>
using namespace std;

bool IsLeapYear(int Year)
{
    return (Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0;
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

string DayShortName(short DayOfWeekOrder)
{
    string arrDayNames[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    return arrDayNames[DayOfWeekOrder];
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

    cout << "\nDate        : " << Day << "/" << Month << "/" << Year;
    cout << "\nDay Order   : " << DayOfWeekOrder(Day, Month, Year);
    cout << "\nDay Name    : " << DayShortName(DayOfWeekOrder(Day, Month, Year));

    return 0;
}