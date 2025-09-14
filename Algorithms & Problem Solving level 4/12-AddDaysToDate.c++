#include <iostream>
#include <iomanip>

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
        cout << "\tPlease Enter a month (1 to 12): ";
        cin >> m;
    } while (m < 1 || m > 12);

    return m;
}

short ReadDay()
{
    short d;
    do
    {
        cout << "\tPlease Enter a day (1 to 31): ";
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

short ReadDaysToAdd()
{
    short Days;
    cout << "\n\tHow many days to add: ";
    cin >> Days;
    return Days;
}

bool IsLeapYear(short year)
{
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ? true : false;
}

short NumberOfDaysInMonth(short Year, short Month)
{
    if (Month < 1 || Month > 12)
    {
        return 0;
    }

    short NumberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

short NumberOfDaysFromTheBeginingOfTheYear(short Year, short Month, short Day)
{
    short TotalDays = 0;

    for (short i = 1; i <= Month - 1; i++)
    {
        TotalDays += NumberOfDaysInMonth(Year, i);
    }

    TotalDays += Day;

    return TotalDays;
}

stDate DateAddDays(stDate Date, short DateOrderInYear)
{
    short RemainingDays = DateOrderInYear;

    short MonthDays = 0;

    Date.Month = 1;

    while (true)
    {
        MonthDays = NumberOfDaysInMonth(Date.Year, Date.Month);

        if (RemainingDays > MonthDays)
        {
            RemainingDays -= MonthDays;
            Date.Month++;

            if (Date.Month > 12)
            {
                Date.Month = 1;
                Date.Year++;
            }
        }
        else
        {
            Date.Day = RemainingDays;
            break;
        }
    }
    return Date;
}

void PrintResult()
{
    stDate Date = ReadFullDate();
    short Days = ReadDaysToAdd();
    short TotalOfDays = 0;

    short DaysOrderInYear = NumberOfDaysFromTheBeginingOfTheYear(Date.Year, Date.Month, Date.Day);
    TotalOfDays = DaysOrderInYear + Days;
    Date = DateAddDays(Date, TotalOfDays);
    cout << "\n\tDate after adding (" << Days << ") Days is : ";
    cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;
}

int main()
{
    system("color f0");
    PrintResult();
    system("pause>0");
    return 0;
}