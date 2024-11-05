#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// todo Proplem 36
/*enum enOperationType
{
    Add = '+',
    subtact = '-',
    Multiply = '*',
    Divide = '/'
};

float ReadNumber(string Massage)
{
    float Number = 0;
    cout << Massage << endl;
    cin >> Number;
    return Number;
}

enOperationType ReadOpType()
{
    char OT = '+';
    cout << "Enter Operation ( = , -  , * , / )" << endl;
    cin >> OT;
    return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OPType)
{
    switch (OPType)
    {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::subtact:
        return Number1 - Number2;
    case enOperationType::Multiply:
        return Number1 * Number2;
    case enOperationType::Divide:
        return Number1 / Number2;
    default:
        return Number1 + Number2;
    }
}*/

// todo Proplem 37
/*float ReadNumber(string Massage)
{
    float Number;
    cout << Massage << endl;
    cin >> Number;
    return Number;
}

string SumNubmer()
{
    int Sum = 0, Number = 0, Counter = 1;
    do
    {
        Number = ReadNumber("Enter Number" + to_string(Counter));
        if (Number == -99)
        {
            break;
        }
        Sum += Number;
        Counter++;
    } while (Number != -99);
    return "Abdullah" + to_string (Sum);
}*/

// todo Proplem 38
/*enum enPrimeNotPrime { Prime = 1 , NotPrime = 2};`
float ReadPositiveNumber(string Massage)
{
    float Number;
    do
    {
        cout << Massage << endl;
        cin >> Number;
    } while (Number<=0);
    return Number;
}

enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number/2);
    for (int Counter=2 ; Counter<=M ; Counter)
    {
        if(Counter%M==0)
        return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}

void PrintPrimeNotPrime(int Number)
{
    switch(CheckPrime(Number))
    {
        case enPrimeNotPrime::Prime:
        cout << "The Number is Prime\n";
        break;
        case enPrimeNotPrime::NotPrime:
        cout << "The Number is Not Prime\n";
        break;
    }
}*/

// todo Proplem 39
/*int ReadBillAndCashPaid(string Massage)
{
    float Money;
    do
    {
    cout << Massage << endl;
    cin >> Money;
    } while (Money<=0);

    return Money;
}

float Calculate(float TotalBill , float CashPaid)
{
    return TotalBill - CashPaid;
}*/

// todo Proplem 40
/*float BillValue(string Massage)
{
    int Bill;
    do
    {
        cout << Massage << endl;
    cin >> Bill;
    } while (Bill<=0);
    
    return Bill;
}

float ServicesFeeAndSalesTax(float TotalBill)
{
    TotalBill = TotalBill * 1.10;
    TotalBill = TotalBill * 1.16;
    return TotalBill;
}*/





int main()
{
    /*float Number1 = ReadPositiveNumber("Enter first Number");
     float Number2 = ReadPositiveNumber("Enter Second Number");
     enOperationType OPType = ReadOpType();
     cout << endl
          << "Result = " << Calculate(Number1, Number2, OPType);*/

    // cout << endl << "Result = " << SumNubmer(); 

    //PrintPrimeNotPrime(ReadPositiveNumber("enter Number Positive"));


    /*float CashPaid = ReadBillAndCashPaid("Enter Cash Paid");
    float TotalBill = ReadBillAndCashPaid("Enter Total Bill");
    cout << "Result =" << Calculate(CashPaid,TotalBill);*/


    //cout << ServicesFeeAndSalesTax(BillValue("enter Bill"));


    











    return 0;
}