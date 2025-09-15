#include <iostream>
using namespace std;
struct stDate
{
    short Year;
    short Month;
    short Day;
};
short EnterDays()
{
    short Days;
    cout << "\tEnter how many days you want to add: ";
    cin >> Days;
    return Days;
}
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

stDate DecreaseDateByOneDay(stDate Date)
{
    if (Date.Day == 1)
    {
        if (Date.Month == 1)
        {
            Date.Day = 31;
            Date.Month = 12;
            Date.Year--;
        }
        else
        {
            Date.Month--;
            Date.Day = NumberDaysInMonth(Date.Year, Date.Month);
        }
    }
    else
    {
        Date.Day--;
    }
    return Date;
}

stDate DecreaseDateByXDays(stDate Date, short Days)
{
    for (short i = 1; i <= Days; i++)
    {
        Date = DecreaseDateByOneDay(Date);
    }
    return Date;
}

stDate DecreaseDateByOneWeek(stDate Date)
{
    for (short i = 1; i <= 7; i++)
    {
        Date = DecreaseDateByOneDay(Date);
    }
    return Date;
}

stDate DecreaseDateByXWeek(stDate Date, short Weeks)
{
    for (short i = 1; i <= Weeks; i++)
    {
        Date = DecreaseDateByOneWeek(Date);
    }
    return Date;
}

stDate DecreaseDateByOneMonth(stDate Date)
{
    if (Date.Month == 1)
    {
        Date.Month = 12;
        Date.Year--;
    }
    else
    {
        Date.Month--;
    }
    /* Last check day in date should not exceed max days in the current month
        example if date is 31/3/2024 decreasing one month
        should not be 31/2/2024, it should be 28/2/2024 */
    short NumberOfDaysInCurrentMonth = NumberDaysInMonth(Date.Year, Date.Month);
    if (Date.Day > NumberOfDaysInCurrentMonth)
    {
        Date.Day = NumberOfDaysInCurrentMonth;
    }
    return Date;
}

stDate DecreaseDateByXMonth(stDate Date, short M)
{
    for (short i = 1; i <= M; i++)
    {
        Date = DecreaseDateByOneMonth(Date);
    }
    return Date;
}

stDate DecreaseDateByOneYear(stDate Date)
{
    Date.Year--;
    return Date;
}

stDate DecreaseDateByXYear(stDate Date, short Y)
{
    for (short i = 1; i <= Y; i++)
    {
        Date = DecreaseDateByOneYear(Date);
    }
    return Date;
}

stDate DecreaseDateByXYearFaster(stDate Date, short Y) // Optimise
{
    Date.Year -= Y;
    return Date;
}

stDate DecreaseDateByOneDecade(stDate Date)
{
    // Period of 10 years
    Date.Year -= 10;
    return Date;
}

stDate DecreaseDateByXDecades(stDate Date, short Decade)
{
    for (short i = 1; i <= Decade * 10; i++)
    {
        Date = DecreaseDateByOneYear(Date);
    }
    return Date;
}

stDate DecreaseDateByXDecadesFaster(stDate Date, short Decade) // Optimise
{
    Date.Year -= Decade * 10;
    return Date;
}

stDate DecreaseDateByOneCentury(stDate Date)
{
    // Period of 100 years
    Date.Year -= 100;
    return Date;
}

stDate DecreaseDateByOneMillennium(stDate Date)
{
    // Period of 1000 years
    Date.Year -= 1000;

    return Date;
}

void PrintResult()
{
    stDate Date = ReadFullDate();
    cout << "\n\tDate After: \n";
    cout << "\t------------------------------------";
    Date = DecreaseDateByOneDay(Date);
    cout << "\n\t01-Subtracting One Day is  : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = DecreaseDateByXDays(Date, 10);
    cout << "\t02-Subtracting 10 Days is  : " << Date.Day << "/" << Date.Month
         << "/" << Date.Year << endl;

    Date = DecreaseDateByOneWeek(Date);
    cout << "\t03-Subtracting One Week is : " << Date.Day << "/" << Date.Month
         << "/" << Date.Year << endl;

    Date = DecreaseDateByXWeek(Date, 10);
    cout << "\t04-Subtracting 10 Weeks is : " << Date.Day << "/" << Date.Month
         << "/" << Date.Year << endl;

    Date = DecreaseDateByOneMonth(Date);
    cout << "\t05-Subtracting One Month is: " << Date.Day << "/" << Date.Month
         << "/" << Date.Year << endl;

    Date = DecreaseDateByXMonth(Date, 5);
    cout << "\t06-Subtracting 5 Months is : " << Date.Day << "/" << Date.Month
         << "/" << Date.Year << endl;

    Date = DecreaseDateByOneYear(Date);
    cout << "\t07-Subtracting One Year is : " << Date.Day << "/" << Date.Month
         << "/" << Date.Year << endl;

    Date = DecreaseDateByXYear(Date, 10);
    cout << "\t08-Subtracting 10 Year is  : " << Date.Day << "/" << Date.Month
         << "/" << Date.Year << endl;

    Date = DecreaseDateByXYearFaster(Date, 10);
    cout << "\t09-Subtracting 10 Year (Faster) is   : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = DecreaseDateByOneDecade(Date);
    cout << "\t10-Subtracting One Decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = DecreaseDateByXDecades(Date, 10);
    cout << "\t11-Subtracting 10 Decades is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = DecreaseDateByXDecadesFaster(Date, 10);
    cout << "\t12-Subtracting 10 Decades (Faster) is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = DecreaseDateByOneCentury(Date);
    cout << "\t13-Subtracting One Century is   : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = DecreaseDateByOneMillennium(Date);
    cout << "\t14-Subtracting One Millennium is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
}
int main()
{
    system("color f0");
    PrintResult();
    system("pause>0");
    return 0;
}