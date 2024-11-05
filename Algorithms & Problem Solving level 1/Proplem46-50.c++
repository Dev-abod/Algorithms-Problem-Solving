#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// todo Proplem 46
/*void PrintLettersAtoZ()
{
    for (int i =65 ; i<=90 ; i++)
    {
        cout << char(i) << endl;
    }
}*/

// todo Proplem 47
/*float ReadPositiveNumber(string Massage)
{
    int Number;

    do
    {
        cout << Massage << endl;
        cin >> Number;
    } while (Number<=0);

    return Number;
}

float totalMonths(float LoanAmount , float MonthlyInstallment)
{
    return (float)LoanAmount/MonthlyInstallment;
}*/

// todo Proplem 48
/*float ReadPositiveNumber(string Massage)
{
    int Number;

    do
    {
        cout << Massage << endl;
        cin >> Number;
    } while (Number<=0);

    return Number;
}

float MonthlyInstallment(float LoanAmount , float HowMonthlyInstallment)
{
    return (float)LoanAmount/HowMonthlyInstallment;
}*/

// todo Proplem 49
/*string ReadPinCode()
{
    string PinCode;
    cout << "Please enter PIN code\n";
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    string PinCode;
    do
    {
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        return 1;

        else
        {
            cout << "\nWorng Pin\n";
            system("color 4F");
        }
    } while (PinCode != "1234)");

    return 0;

}*/

// todo Proplem 50
string ReadPinCode()
{
    string PinCode;
    cout << "Please enter PIN code\n";
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    string PinCode;
    int Counter = 3;
    do
    {
        Counter--;
        PinCode = ReadPinCode();

        if (PinCode == "1234")
            return 1;

        else
        {
            cout << "\nWorng Pin , You have" << Counter << "More True";
            system("color 4F");
        }
    } while (Counter >= 1 && PinCode != "1234)");

    return 0;
}

int main()
{
    /*PrintLettersAtoZ();
    cout << char(66);*/

    /*float LoanAmount =  ReadPositiveNumber("Please Enter Loan Amount");
    float MonthlyInstallment =  ReadPositiveNumber("Please Enter Monthly Installment");
    cout << " Total Months To Pay = " << totalMonths(LoanAmount,MonthlyInstallment);*/

    /*float LoanAmount =  ReadPositiveNumber("Please Enter Loan Amount");
    float HowMonthlyInstallment =  ReadPositiveNumber("How many Months");
    cout << " Total Months = " << MonthlyInstallment(LoanAmount,HowMonthlyInstallment);*/

    if (Login())
    {
        system("color 2F");
        cout << "\nYour Account Blance is " << 7500 << "\n";
    }
    else
    {
        cout << "\nYour Card Blocked call Bank";
    }

    return 0;
}