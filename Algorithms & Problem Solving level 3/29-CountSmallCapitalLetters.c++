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

int CountCapitalLetter(string S1)
{
    short counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (isupper(S1[i]))
            counter++;
    }

    return counter;
}

int CountSmallLetter(string S1)
{
    short counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (islower(S1[i]))
            counter++;
    }

    return counter;
}

int main()
{
    string S1 = ReadString();

    cout << "String Length = " << S1.length() << endl;
    cout << "Capital Letters count = " << CountCapitalLetter(S1) << endl;
    cout << "Small Letters count = " << CountSmallLetter(S1) << endl;

    return 0;
}