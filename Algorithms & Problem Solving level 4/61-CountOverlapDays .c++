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
    cout << "\tEnter Start Date : \n\n";
    Period.StartDate = ReadFullDate();
    cout << "\n\tEnter End Date :\n\n";
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

enum enCompare
{
    Before = -1,
    Equal = 0,
    After = 1
};

bool IsDat1BeforDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

bool IsDat1EqualToDate2(stDate Date1, stDate Date2)
{
    return ((Date1.Year == Date2.Year) && (Date1.Month == Date2.Month) &&
                    (Date1.Day == Date2.Day)
                ? true
                : false);
}

bool Date1AfterDate2(stDate Date1, stDate Date2)
{
    return (!IsDat1BeforDate2(Date1, Date2)) && (!IsDat1EqualToDate2(Date1,
                                                                     Date2))
               ? true
               : false;
}

enCompare CompareDates(stDate Date1, stDate Date2)
{
    if (IsDat1BeforDate2(Date1, Date2))
        return enCompare::Before;

    else if (IsDat1EqualToDate2(Date1, Date2))
        return enCompare::Equal;

    /*else if (Date1AfterDate2(Date1, Date2))
     return enCompare::After;*/

    // This is Faster
    return enCompare::After;
}

bool IsOverLapPeriod(stPeriod Period1, stPeriod Period2)
{
    if ((CompareDates(Period2.EndDate, Period1.StartDate) == enCompare::Before) || (CompareDates(Period2.StartDate, Period1.EndDate) == enCompare::After))
    {
        return false;
    }
    else
        return true;
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

int PeriodLengthInDays(stPeriod Period1, bool includeEndDay = false)
{
    return GetDifferenceInDays(Period1.StartDate, Period1.EndDate, includeEndDay);
}

bool IsDateInPeriod(stPeriod Period1, stDate Date)
{
    return !((CompareDates(Date, Period1.StartDate) == enCompare::Before) ||
             (CompareDates(Date, Period1.EndDate) == enCompare::After));
}

int CountOverlapDays(stPeriod Period1, stPeriod Period2)
{
    int Period1Length = PeriodLengthInDays(Period1, true);
    int Period2Length = PeriodLengthInDays(Period2, true);
    int OverlapDays = 0;
    if (!IsOverLapPeriod(Period1, Period2))
        return 0;
    if (Period1Length < Period2Length)
    {
        while (IsDat1BeforDate2(Period1.StartDate, Period1.EndDate))
        {
            if (IsDateInPeriod(Period2, Period1.StartDate))
                OverlapDays++;

            Period1.StartDate = IncreaseDateByOneDay(Period1.StartDate);
        }
    }
    else
    {
        while (IsDat1BeforDate2(Period2.StartDate, Period2.EndDate))
        {
            if (IsDateInPeriod(Period1, Period2.StartDate))
                OverlapDays++;
            Period2.StartDate = IncreaseDateByOneDay(Period2.StartDate);
        }
    }
    return OverlapDays;
}

void PrintIsOverLapPeriodResult()
{
    cout << "\n\tEnter Period 1:" << endl;
    stPeriod Period1 = ReadPeriod();
    cout << "\n\tEnter Period 2:" << endl;
    stPeriod Period2 = ReadPeriod();
    cout << "\n\tOverlap days count is: " << CountOverlapDays(Period1, Period2) << endl;
}

int main()
{
    PrintIsOverLapPeriodResult();
    system("pause>0");
    return 0;
}