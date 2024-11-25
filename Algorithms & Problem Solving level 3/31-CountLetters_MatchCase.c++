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

char ReadChar()
{
    char Ch1 = ' ';
    cout << "Please enter a charcter: ";
    cin >> Ch1;

    return Ch1;
}
char InvertCharcterCase(char Ch1)
{
    return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);
}

short CountLetter(string S1, char Letter, bool MatchCase = true)
{
    short counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (MatchCase)
        {
            if (S1[i] == Letter)
                counter++;
        }
        else
        {
            if (towlower(S1[i]) == towlower(Letter))
                counter++;
        }
    }

    return counter;
}

int main()
{
    string S1 = ReadString();
    char Ch1 = ReadChar();

    cout << "Letter '" << Ch1 << "' Count = " << CountLetter(S1, Ch1) << endl;

    cout << "Letter '" << Ch1 << " Or " << InvertCharcterCase(Ch1) << "' Count = " << CountLetter(S1, Ch1, false);

    return 0;
}