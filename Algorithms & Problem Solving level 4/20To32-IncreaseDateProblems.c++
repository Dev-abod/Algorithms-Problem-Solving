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

bool IsLastDayInMonth(stDate Date)
{
    return Date.Day == NumberDaysInMonth(Date.Year, Date.Month);
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

stDate IncreaseDateByXDays(stDate Date, short Days)
{
    for (short i = 1; i <= Days; i++)
    {
        Date = DecreaseDateByOneDay(Date);
    }
    return Date;
}

stDate IncreaseDateByOneWeek(stDate Date)
{
    short Week = 7;
    for (short i = 1; i <= Week; i++)
    {
        Date = DecreaseDateByOneDay(Date);
    }
    return Date;
}

stDate IncreaseDateByXWeek(stDate Date, short Weeks)
{
    for (short i = 1; i <= Weeks; i++)
    {
        Date = IncreaseDateByOneWeek(Date);
    }
    return Date;
}

stDate IncreaseDateByOneMonth(stDate Date)
{
    if (Date.Month == 12)
    {
        Date.Month = 1;
        Date.Year++;
    }
    else
    {
        Date.Month++;
    }
    /* Last check day in date should not exceed max days in the current month
       example if date is 31/1/2024 increasing one month
       should not be 31/2/2024, it should be 28/2/2024 */
    short NumberOfDaysInCurrentMonth = NumberDaysInMonth(Date.Year,
                                                         Date.Month);
    if (Date.Day > NumberOfDaysInCurrentMonth)
    {
        Date.Day = NumberOfDaysInCurrentMonth;
    }
    return Date;
}

stDate IncreaseDateByXMonth(stDate Date, short M)
{
    for (short i = 1; i <= M; i++)
    {
        Date = IncreaseDateByOneMonth(Date);
    }
    return Date;
}

stDate IncreaseDateByOneYear(stDate Date)
{
    Date.Year++;
    return Date;
}

stDate IncreaseDateByXYear(stDate Date, short Y)
{
    for (short i = 1; i <= Y; i++)
    {
        Date = IncreaseDateByOneYear(Date);
    }
    return Date;
}

stDate IncreaseDateByXYearFaster(stDate Date, short Y) // Optimise
{
    Date.Year += Y;

    return Date;
}

stDate IncreaseDateByOneDecade(stDate Date)
{
    // Period of 10 years
    Date.Year += 10;

    return Date;
}

stDate IncreaseDateByXDecades(stDate Date, short Decade)
{
    for (short i = 1; i <= Decade * 10; i++)
    {
        Date = IncreaseDateByOneYear(Date);
    }
    return Date;
}

stDate IncreaseDateByXDecadesFaster(stDate Date, short Decade) // Optimise
{
    Date.Year += Decade * 10;

    return Date;
}

stDate IncreaseDateByOneCentury(stDate Date)
{
    // Period of 100 years
    Date.Year += 100;

    return Date;
}

stDate IncreaseDateByOneMillennium(stDate Date)
{
    // Period of 1000 years
    Date.Year += 1000;
    return Date;
}

void PrintResult()
{
    stDate Date = ReadFullDate();
    cout << "\n\tDate After: \n";
    cout << "\t------------------------------------";
    Date = DecreaseDateByOneDay(Date);
    cout << "\n\t01-Adding One Day is  : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
    Date = IncreaseDateByXDays(Date, 10);
    cout << "\t02-Adding 10 Days is  : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByOneWeek(Date);
    cout << "\t03-Adding One Week is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByXWeek(Date, 10);
    cout << "\t04-Adding 10 Weeks is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByOneMonth(Date);
    cout << "\t05-Adding One Month is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByXMonth(Date, 5);
    cout << "\t06-Adding 5 Months is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByOneYear(Date);
    cout << "\t07-Adding One Year is : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByXYear(Date, 10);
    cout << "\t08-Adding 10 Year is  : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByXYearFaster(Date, 10);
    cout << "\t09-Adding 10 Year (Faster) is   : " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByOneDecade(Date);
    cout << "\t10-Adding One Decade is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByXDecades(Date, 10);
    cout << "\t11-Adding 10 Decades is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByXDecadesFaster(Date, 10);
    cout << "\t12-Adding 10 Decades (Faster) is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;

    Date = IncreaseDateByOneCentury(Date);
    cout << "\t13-Adding One Century is   : " << Date.Day << "/" << Date.Month
         << "/" << Date.Year << endl;

    Date = IncreaseDateByOneMillennium(Date);
    cout << "\t14-Adding One Millennium is: " << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
}

int main()
{
    system("color f0");

    PrintResult();
    system("pause>0");
    return 0;
}