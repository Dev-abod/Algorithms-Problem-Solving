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
    cout << "\tPLease enter a year: ";
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

bool IsDat1EqualToDate2(stDate Date1, stDate Date2)
{
    return (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}

void PrintResult()
{
    stDate Date1, Date2;

    cout << "\tEnter a Date 1 : " << endl;
    Date1 = ReadFullDate();

    cout << "\n\tEnter a Date 2 : " << endl;
    Date2 = ReadFullDate();

    if (IsDat1EqualToDate2(Date1, Date2))
    {
        cout << "\n\tYes, Date1 is Equal To Date2." << endl;
    }
    else
        cout << "\n\tNo, Date1 is not Equal To Date2." << endl;
}

int main()
{

    PrintResult();
    system("pause>0");
    return 0;
}