#pragma warning(disable : 4996)
#include <iostream>
using namespace std;
struct stDate
{
    short Year;
    short Month;
    short Day;
};
short ReadYear()
{
    short y;
    cout << "\tPLease enter a year : ";
    cin >> y;
    return y;
}
short ReadMonth()
{
    short m;
    do
    {
        cout << "\tPlease Enter a month: ";
        cin >> m;
    } while (m < 1 || m > 12);
    return m;
}

short ReadDay()
{
    short d;
    do
    {
        cout << "\tPlease Enter a day  : ";
        cin >> d;
    } while (d < 1 || d > 31);

    return d;
}

stDate ReadFullDate()
{
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}

bool IsLeapYear(short year)
{
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ? true : false;
}

bool IsDat1BeforDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

short NumberOfDaysInMonth(short year, short month)
{
    if (month < 1 || month > 12)
        return 0;

    short ArrMon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : ArrMon[month - 1];
}

bool IsLastDayInMonth(stDate Date)
{
    return Date.Day == NumberOfDaysInMonth(Date.Year, Date.Month);
}

bool IsLastMonthInYear(short month)
{
    return (month == 12);
}

stDate DecreaseDateByOneDay(stDate Date)
{
    if (IsLastDayInMonth(Date))
    {
        if (IsLastMonthInYear(Date.Month))
        {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else
    {
        Date.Day++;
    }
    return Date;
}

int GetDifferenceInDays(stDate Date1, stDate Date2, bool includeEndDay = false)
{
    short days = 0;

    while (IsDat1BeforDate2(Date1, Date2))
    {
        days++;
        Date1 = DecreaseDateByOneDay(Date1);
    }
    return includeEndDay ? ++days : days;
}

stDate GetSystemDate()
{
    stDate Date;
    time_t t = time(0);
    tm *now = localtime(&t);
    Date.Year = now->tm_year + 1900;
    Date.Month = now->tm_mon + 1;
    Date.Day = now->tm_mday;

    return Date;
}

void PrintResult()
{
    cout << "\tEnter Your Date Of Birth : " << endl;
    cout << "\t--------------------------\n";
    stDate Date1 = ReadFullDate();
    stDate Date2 = GetSystemDate();
    cout << "\t--------------------------\n";
    cout << "\n\tYour Age is : " << GetDifferenceInDays(Date1, Date2, true)
         << " Day(s)." << endl;
}
int main()
{
    system("color f0");
    PrintResult();
    system("pause>0");
    return 0;
}