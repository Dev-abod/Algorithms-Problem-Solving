#include <iostream>
using namespace std;

int ReadPositiveNumber(string Massage)
{
    int Number = 0;
    do
    {
        cout << Massage << endl;
        cin >> Number;

    } while (Number < 0);

    return Number;
}

int ReverseNumber(int Number)
{
    int Remainder = 0, Number2 = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }

    return Number2;
}

int main()
{
    cout << "\nReverse is: "
         << ReverseNumber(ReadPositiveNumber("Please enter a Positive number: "))
         << "\n";

    return 0;
}
