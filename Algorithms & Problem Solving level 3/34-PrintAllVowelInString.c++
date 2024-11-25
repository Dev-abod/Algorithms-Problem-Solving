#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{
    string S1 = " ";
    cout << "Please enter string: ";
    getline(cin, S1);

    return S1;
}

bool IsVowel(char Ch1)
{
    Ch1 = towlower(Ch1);

    return (Ch1 == 'a') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'e') || (Ch1 == 'u');
}

void PrintAllLetterVowelInString(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        if ((IsVowel(S1[i])))
            cout << S1[i] << "   ";
    }
}

int main()
{
    string S1 = ReadString();

    cout << "Vowel in String are: ";
    PrintAllLetterVowelInString(S1);

    return 0;
}