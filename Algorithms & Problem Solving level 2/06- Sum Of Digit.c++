#include <iostream>
#include <string>
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

int SumOfDigits(int Number)
{
    int Remainder = 0, Sum = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Sum = Sum + Remainder;
    }

    return Sum;
}

int main()
{
    cout << "\nSum Of Digigts = "
         << SumOfDigits(ReadPositiveNumber("Please enter a Positive number: "))
         << "\n";

    return 0;
}
