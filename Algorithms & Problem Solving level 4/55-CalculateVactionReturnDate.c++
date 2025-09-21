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

short DayOfWeekOrder(short Year, short Month, short Day)
{
    short a, y, m;
    a = ((14 - Month) / 12);
    y = Year - a;
    m = Month + (12 * a) - 2;
    // Greforian:
    // The value of d is 0 for a Sunday, 1 for a Monday, 2 for a Tuesday etc..
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

short DayOfWeekOrder(stDate Date)
{
    return DayOfWeekOrder(Date.Year, Date.Month, Date.Day);
}

string DayShortName(short DayOfWeekOrder)
{
    string arrDayName[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    return arrDayName[DayOfWeekOrder];
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

bool IsEndOfWeek(stDate Date)
{
    return DayOfWeekOrder(Date) == 6;
}

bool IsWeekEnd(stDate Date)
{
    return (DayOfWeekOrder(Date) == 5 || DayOfWeekOrder(Date) == 6);
}

bool IsBusinessDay(stDate Date)
{
    return !IsWeekEnd(Date);
}

short CalculatelVacationDays(stDate DateFrom, short DaysVactions)
{
    short DaysCount = 0;

   
        if (IsBusinessDay(DateFrom))
            DaysCount++;

        DateFrom = IncreaseDateByOneDay(DateFrom);
    
    return DaysCount;
}

void PrintResult()
{
    cout << "\tVacation Starts:" << endl;
    stDate DateFrom = ReadFullDate();

    short DaysVaction =0;
    cout << "\n\tPlease Enter Vaction days ? ";
    cin >> DaysVaction;

    

    cout << "\tVacation To   : ";
    cout << DayShortName(DayOfWeekOrder(DateFrom)) << " , ";
    cout << DateFrom.Day << "/" << DateFrom.Month << "/" << DateFrom.Year << endl;

    cout << "\n\tActucal Vacation Days is: " << CalculatelVacationDays(DateFrom, DaysVaction) << endl;
}

int main()
{
    PrintResult();
    system("pause>0");
    return 0;
}