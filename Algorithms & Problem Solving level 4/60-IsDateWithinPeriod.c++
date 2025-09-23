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

    return enCompare::After; // This is Faster
}

bool IsDateInPeriod(stPeriod Period1, stDate Date)
{
    return !((CompareDates(Date, Period1.StartDate) == enCompare::Before) ||
             (CompareDates(Date, Period1.EndDate) == enCompare::After));
}

void PrintCalCulatePeriodLengthInDays()
{
    cout << "\n\tEnter Period 1:" << endl;
    stPeriod Period1 = ReadPeriod();
    cout << "\n\tEnter Date to check: \n\n";
    stDate Date = ReadFullDate();
    if (IsDateInPeriod(Period1, Date))
    {
        cout << "\n\tYES, Date is within period.\n";
    }
    else
    {
        cout << "\n\tNO, Date is not within period.\n";
    }
}

int main()
{
    system("color f0");

    PrintCalCulatePeriodLengthInDays();

    system("pause>0");
    return 0;
}