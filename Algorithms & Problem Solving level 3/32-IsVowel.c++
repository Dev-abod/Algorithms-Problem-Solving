#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char ReadChar()
{
    char Ch1 = ' ';
    cout << "Please enter a charcter: ";
    cin >> Ch1;

    return Ch1;
}

bool IsVowel(char Ch1)
{
    Ch1 = towlower(Ch1);

    return (Ch1 == 'a') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'e') || (Ch1 == 'u');
}

int main()
{
    char Ch1 = ReadChar();

    if (IsVowel(Ch1))
        cout << "YES letter \'" << Ch1 << "\' is Vowel\n";
    else
        cout << "NO letter \'" << Ch1 << "\' is NOT Vowel\n";

    return 0;
}