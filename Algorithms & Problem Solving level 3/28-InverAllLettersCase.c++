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

char InvertCharcterCase(char Ch1)
{
    return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);
}

string PrintLower_UpperFirstLetterOfEachWord(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] = InvertCharcterCase(S1[i]);
    }

    return S1;
}

int main()
{
    cout << "string after inverting all letters case: ";
    cout << PrintLower_UpperFirstLetterOfEachWord(ReadString());

    return 0;
}