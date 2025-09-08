#include <iostream>
#include <string>
using namespace std;

struct stDate
{
    short Year = 0;
    short Month = 0;
    short Day = 0;
};

bool isLeapYear(short Year)
{
    // if year is divisible by 4 AND not divisible by 100
    // OR if year is divisible by 400
    // then it is a leap year
    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : days[Month - 1];
}

short NumberOfDayFromTheBeginingOfTheYear(int Day, int Month, int Year)
{
    short TotalDays = 0;

    for (int i = 1; i <= Month - 1; i++)
    {
        TotalDays += NumberOfDaysInAMonth(i, Year);
    }

    TotalDays += Day;

    return TotalDays;
}

stDate GetDateFromDaysOrderInYear(short AddDaysInDate,short Day, short Month, short Year)
{
    stDate Date;

    short Remainder = AddDaysInDate;
    short MonthDay = 0;

    Date.Year = Year;
    Date.Month = 1;

    while (true)
    {
        MonthDay = NumberOfDaysInAMonth(Date.Month, Year);
        if (Remainder > MonthDay)
        {
            Remainder -= MonthDay;
            Date.Month++;
        }
        else
        {
            Date.Day = Remainder;
            break;
        }
    }

    return Date;
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
short ReadHowAddDays()
{
 short AddDay;
    cout << "\nenter How Add Days? ";
    cin >> AddDay;
    return AddDay;
}

int main()
{

    short Year = ReadYear();
    short Month = ReadMonth();
    short Day = ReadDay();
    short AddDaysInDate = ReadHowAddDays();



    stDate Date;
    Date = GetDateFromDaysOrderInYear(AddDaysInDate,Day,Month, Year);
    cout << "\n\nDate after adding [" << AddDaysInDate << "] days is: ";
    cout << Date.Day << "/" << Date.Month << "/" << Date.Year;

    return 0;
}