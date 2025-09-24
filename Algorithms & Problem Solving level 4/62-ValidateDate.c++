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
    cout << "\tPlease Enter a month: ";
    cin >> m;
    return m;
}
short ReadDay()
{
    short d;
    cout << "\tPlease Enter a day : ";
    cin >> d;
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
bool IsValideDate(stDate Date)
{
    if (Date.Day < 1 || Date.Day > 31)
        return false;
    if (Date.Month < 1 || Date.Month > 12)
        return false;
    if (Date.Month == 2)
    {
        if (IsLeapYear(Date.Year))
        {
            if (Date.Month > 29)
                return false;
        }
        else
        {
            if (Date.Month > 28)
                return false;
        }
    }
    short DaysInMonth = (NumberDaysInMonth(Date.Year, Date.Month));
    if (Date.Day > DaysInMonth)
        return false;
    return true;
}
void PrintIsValideDate()
{
    cout << "\n\tEnter Date: \n\n";
    stDate Date = ReadFullDate();
    if (IsValideDate(Date))
        cout << "\n\tYES, Date is a valide date.\n";
    else
        cout << "\n\tNO, Date is a NOT valide date.\n";
}
int main()
{
    PrintIsValideDate();
    system("pause>0");
    return 0;
}