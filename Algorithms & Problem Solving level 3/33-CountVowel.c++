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

short CountVowel(string S1)
{
    short counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if ((IsVowel(S1[i])))
            counter++;
    }

    return counter;

}

int main()
{
    string S1 = ReadString();

    cout << "Number of vowel is: " << CountVowel(S1) << endl;


    return 0;
}