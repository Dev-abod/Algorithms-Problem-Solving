#pragma warning(disable : 4996)

#include <iostream>

using namespace std;

struct stDate
{
    short Year;
    short Month;
    short Day;
};

struct stPeriod
{
    stDate StartDate;
    stDate EndDate;
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

stPeriod ReadPeriod()
{
    stPeriod Period;
    cout << "\n\tEnter Start Date: \n\n";
    Period.StartDate = ReadFullDate();

    cout << "\n\tEnter End Date  :\n\n";
    Period.EndDate = ReadFullDate();

    return Period;
}

bool IsLeapYear(short year)
{
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ? true : false;
}

short NumberDaysInMonth(short year, short month)
{
    if (month < 1 || month > 12)
        return 0;

    short ArrMon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : ArrMon[month - 1];
}

bool IsDat1BeforDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsLastDayInMonth(stDate Date)
{
    return Date.Day == NumberDaysInMonth(Date.Year, Date.Month);
}

bool IsLastMonthInYear(short month)
{
    return (month == 12);
}

stDate IncreaseDateByOneDay(stDate Date)
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
        Date1 = IncreaseDateByOneDay(Date1);
    }
    return includeEndDay ? ++days : days;
}
int CalCulatePeriodLengthInDays(stPeriod Period1, bool includeEndDay = false)
{
    return GetDifferenceInDays(Period1.StartDate, Period1.EndDate,
                               includeEndDay);
}
void PrintCalCulatePeriodLengthInDays()
{
    cout << "\n\tEnter Period 1:" << endl;
    stPeriod Period1 = ReadPeriod();
    cout << "\n\tPeriod Length is: " << CalCulatePeriodLengthInDays(Period1)
         << endl;
    cout << "\n\tPeriod Length (Including End Date) is: " << CalCulatePeriodLengthInDays(Period1, true) << endl;
}
int main()
{
    system("color f0");
    PrintCalCulatePeriodLengthInDays();
    system("pause>0");
    return 0;
}