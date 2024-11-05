#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// todo Proplem 41
/*int readNumberOfHours()
{
    int Hours;
    cout << "Enter Number Of Hours\n";
    cin >> Hours;
    return Hours;
}

float NumberOfDay(float Hourse)
{
    return (Hourse/24);
}*/

// todo Proplem 42

/*int ReadOfDay(string Massage)  //! My Way
{
    int Day = 0;
    cout << Massage << endl;
    cin >> Day;
    Day = Day*24*60*60;
    return Day;
}
int ReadOfHours(string Massage)
{
    int Hours = 0;
    cout << Massage << endl;
    cin >> Hours;
    Hours = Hours*60*60;
    return Hours;
}
int ReadOfMinutes(string Massage)
{
    int Minutes = 0;
    cout << Massage << endl;
    cin >> Minutes;
    Minutes = Minutes*60;
    return Minutes;
}
int ReadOfSecond(string Massage)
{
    int Second = 0;
    cout << Massage << endl;
    cin >> Second;
    return Second;
}*/

/*struct stTaskDuration  //! My Way Mohammed Hadhod
{
    int NumberOfDay , NumberOdHour , NumberOfMinutes , NumberOfSecond;
};
int ReadPositiveNumber(string Massage)
{
    int Number;
    do
    {
        cout << Massage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
stTaskDuration ReadTaskDuracion()
{
    stTaskDuration TaskDuracion;
    TaskDuracion.NumberOfDay = ReadPositiveNumber("enter Number Of Day");
    TaskDuracion.NumberOdHour = ReadPositiveNumber("enter Number Of Hours");
    TaskDuracion.NumberOfMinutes = ReadPositiveNumber("enter Number Of Minutes");
    TaskDuracion.NumberOfSecond = ReadPositiveNumber("enter Number Of Second");
    return TaskDuracion;
}
int stTaskDurationInSecond(stTaskDuration TaskDuration)
{
    int DuracionInSecond = 0;
    DuracionInSecond = TaskDuration.NumberOfDay * 24 * 60 *60 ;
    DuracionInSecond += TaskDuration.NumberOdHour * 60 * 60;
    DuracionInSecond += TaskDuration.NumberOfMinutes * 60;
    DuracionInSecond += TaskDuration.NumberOfSecond;
    return DuracionInSecond;
}*/

// todo Proplem 43
/*struct stTaskDuration
{
    int NumberOfSecond, NomberOfDay, NumberOfHours, NumberOfMinutes;
};
int ReadPositiveNumber(string Massage)
{
    int Number;
    do
    {
        cout << Massage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
stTaskDuration ReadTaskDuracion(int TotalSecond)
{
    stTaskDuration TaskDuration;
    const int SecondOfDay = 24 * 60 * 60;
    const int SecondOfHours = 60 * 60;
    const int SecondOfMinutes = 60;

    int Remainder = 0;
    TaskDuration.NomberOfDay = floor(TotalSecond / SecondOfDay);
    Remainder = TotalSecond % SecondOfDay;
    TaskDuration.NumberOfHours = floor(Remainder / SecondOfHours);
    Remainder = Remainder % SecondOfHours;
    TaskDuration.NumberOfMinutes = floor(Remainder / SecondOfMinutes);
    TaskDuration.NumberOfSecond = Remainder % SecondOfMinutes;

    return TaskDuration;
}
void PrintTaskDuration(stTaskDuration TaskDuration)
{
    cout << TaskDuration.NomberOfDay << ":" << TaskDuration.NumberOfHours << ":" << TaskDuration.NumberOfMinutes << ":" << TaskDuration.NumberOfSecond;

}*/

// todo Proplem 44
/*enum enDayOfWeek
{
    Sat = 1,
    Sun = 2,
    Mon = 3,
    Tue = 4,
    Wed = 5,
    Thu = 6,
    Fri = 7
};

int ReadNumberInRange(string Massage , int From , int To)
{
    int Number;
    do
    {
        cout << Massage << endl;
        cin >> Number;
    } while (Number < From || Number > To);
    return Number;
}

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek) ReadNumberInRange("Please enter Day number" ,1,7);
}

string GetDayOfWeek (enDayOfWeek Day)
{
    switch(Day)
    {
        case enDayOfWeek::Sat:
        return "Saturday";
        case enDayOfWeek::Sun:
        return "Sunday";
        case enDayOfWeek::Mon:
        return "Monday";
        case enDayOfWeek::Tue:
        return "Tuesday";
        case enDayOfWeek::Wed:
        return "Wednesday";
        case enDayOfWeek::Thu:
        return "Tuesday";
        case enDayOfWeek::Fri:
        return "Friday";
        default: "Not a valid ";
    }
}*/

// todo Proplem 45
/*enum enMonthOfYear
{
    Jan = 1,
    Feb = 2,
    Mar = 3,
    Apr = 4,
    May = 5,
    Jun = 6,
    Jul = 7,
    Aug = 8,
    Sep = 9,
    Oct = 10,
    Nov = 11,
    Dec = 12,

};

int ReadNumberInRange(string Massage, int From, int To)
{
    int Number;
    do
    {
        cout << Massage << endl;
        cin >> Number;
    } while (Number < From || Number > To);
    return Number;
}

enMonthOfYear ReadDayOfWeek()
{
    return (enMonthOfYear)ReadNumberInRange("Please enter Month number", 1, 12);
}

string GetDayOfWeek(enMonthOfYear Day)
{
    switch (Day)
    {
    case enMonthOfYear::Jan:
        return "January";
    case enMonthOfYear::Feb:
        return "February";
    case enMonthOfYear::Mar:
        return "March";
    case enMonthOfYear::Apr:
        return "Aoril";
    case enMonthOfYear::May:
        return "May";
    case enMonthOfYear::Jun:
        return "June";
    case enMonthOfYear::Jul:
        return "July";
    case enMonthOfYear::Aug:
        return "August";
    case enMonthOfYear::Sep:
        return "September";
    case enMonthOfYear::Oct:
        return "October";
    case enMonthOfYear::Dec:
        return "December";
    default:
        "Not a valid ";
    }
}*/

int main()
{
    /*float Day =  NumberOfDay(readNumberOfHours());
    cout << "Day = " << Day << endl;
    cout << "Week = " << Day/7 << endl;*/

    /*int Day , Hours , Minutes , Second;
    Day = ReadOfDay("Enter Days");
    Hours =  ReadOfHours("Enter Hours");
    Minutes = ReadOfMinutes("Enter Minutes");
    Second = ReadOfSecond("Enter Second");
    cout << "Time Now : " << Day + Hours +Minutes + Second ;*/

    // cout << "Time :" << stTaskDurationInSecond (ReadTaskDuracion());

    /*int TotalSecond = ReadPositiveNumber("Enter Second");
    PrintTaskDuration(ReadTaskDuracion(TotalSecond));*/

    //cout << GetDayOfWeek(ReadDayOfWeek());

    return 0;
}