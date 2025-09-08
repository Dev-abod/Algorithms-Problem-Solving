#include <iostream>

using namespace std;

// long long int ReadNumber()
int ReadNumber()
{
    // long long int Num;
    int Num;
    cout << "\n\tEnter a Number : ";
    cin >> Num;
    return Num;
}

// string NumberToText(long long int Num)
string NumberToText(int Num)
{
    string Arr1To19[] = {"", "One", "Two", "Three", "Four", "Five", "Six",
                         "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen",
                         "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen",
                         "Nineteen"};

    string Arr20To99[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
                          "Sixty", "Seventy", "Eighty", "Ninety"};

    if (Num == 0)
    {
        return "";
    }

    if (Num >= 1 && Num <= 19)
    {
        return Arr1To19[Num];
    }

    if (Num >= 20 && Num <= 99)
    {
        return Arr20To99[Num / 10] + "-" + NumberToText(Num % 10);
    }

    if (Num >= 100 && Num <= 999)
    {
        return NumberToText(Num / 100) + " Hundred " + NumberToText(Num % 100);
    }

    if (Num >= 1000 && Num <= 999999)
    {
        return NumberToText(Num / 1000) + " Thousand, " + NumberToText(Num % 1000);
    }

    if (Num >= 1000000 && Num <= 999999999)
    {
        return NumberToText(Num / 1000000) + " Million, " + NumberToText(Num % 1000000);
    }

    /*if (Num >= 1000000000 && Num <= 999999999999)
    {
     return NumberToText(Num / 1000000000) + " Billion, " + NumberToText(Num % 1000000000);
    }

    else
    {
     return NumberToText(Num / 1000000000000) + " Trillion, " + NumberToText(Num % 1000000000000);
    }*/
}

int main()
{
    system("color f0");

    // long long int Num = ReadNumber();

    int Num = ReadNumber();
    cout << "\n\t" << NumberToText(Num) << endl;

    system("pause>0");
}