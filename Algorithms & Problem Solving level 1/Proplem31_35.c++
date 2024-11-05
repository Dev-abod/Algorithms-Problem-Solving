#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//todo Proplem 31
/*int ReadNumber()
{
    int number;
    cout << "Enter number\n";
    cin >> number;

    return number;
}

void PowerOf2(int Number)
{
    int A,B,C;
    A= pow(Number,2);
    B= pow(Number,3);
    C= pow(Number,4);
    cout << A << endl << B << endl << C << endl;
}*/

//todo Proplem 32
/*int ReadNumnber()
{
int Number;
cout << "Enter Number\n";
cin >> Number;
return Number;
}
int PowerNumber()
{
int Number;
cout << "Enter Power\n";
cin >> Number;
return Number;
}

int PowerOf2(int number , int Power)
{
    if(Power==0)
    {
        return 1;
    }
    int P = 1;
    for (int i = 1; i <= Power; i++)
    {
        P = P * number;
    }
    return P;
}*/


//todo Proplem 33
/*int ReadNumberInRange(int From , int To)
{
    int Grade;
    do
    {
        cout << "Enter Grade Between 0 and 100\n";
        cin >> Grade;
    } while (Grade <From || Grade >To);
    return Grade;
}

char GetGradeLetter(int Grade)
{
    if(Grade>=90)
    return 'A';
    else if (Grade>=80 )
    return 'B';
    else if (Grade>=70 )
    return 'C';
    else if (Grade>=60 )
    return 'D';
    else if (Grade>=50 )
    return 'E';
    else
    return 'F';
}*/

//todo Proplem 34
/*int ReadTotalSales()
{
    int TotalSales;
    cout << "Please Enter a Total Sales\n";
    cin >> TotalSales;
    return TotalSales;
}

float GetComissionPercentage(float TotalSales)
{
    if(TotalSales>=1000000)
    return 0.01;
    else if (TotalSales>=500000)
    return 0.02;
    else if(TotalSales>=100000)
    return 0.03;
    else if(TotalSales>=50000)
    return 0.05;
    else
    return 0.00;
}

float CalculateTotalComission(float TotalSales)
{
    return GetComissionPercentage(TotalSales) * TotalSales;
}*/
    
//todo Proplem 35
/*struct stPiggyBankContent 
{
    int Penny , Nickel , Dime , Quarter , Dollar;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent Piggy;

    cout << "Enter Penny\n";
    cin >> Piggy.Penny;
    cout << "Enter Nickel\n";
    cin >> Piggy.Nickel;
    cout << "Enter Dime\n";
    cin >> Piggy.Dime;
    cout << "Enter Quarter\n";
    cin >> Piggy.Quarter;
    cout << "Enter Dollar\n";
    cin >> Piggy.Dollar;

    return Piggy;
}

float CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
    float TotalPenny = PiggyBankContent.Penny * 1 + PiggyBankContent.Nickel * 5 + PiggyBankContent.Dime * 10 + 
    PiggyBankContent.Quarter*25 + PiggyBankContent.Dollar*100;

    return TotalPenny;
}*/


int main ()
{
    
    //cout <<  PowerOf2(ReadNumnber(),PowerNumber());
    //cout << GetGradeLetter(ReadNumberInRange(0,100));


    /*int TotalSales = ReadTotalSales();
    cout << endl << "Comission Percentage = " << GetComissionPercentage(TotalSales) << endl;
    cout << endl << "Total Comission = " << CalculateTotalComission(TotalSales);*/


    /*float TotalPenny = CalculateTotalPennies(ReadPiggyBankContent());
    cout << "Total Penny = " << TotalPenny <<  endl;
    cout << "Total Dollar" << (float)TotalPenny/100 << endl;*/
















    return 0;
}