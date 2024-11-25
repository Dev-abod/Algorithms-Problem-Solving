#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{
    string S1 = "";
    cout << "Please Enter your String: ";
    getline(cin, S1);

    return S1;
}

string PrintUpperFirstLeeterOfEachWord(string S1)
{
    bool isFirstLetter = true;
    cout << "\nString After conversion: ";
    for (short i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && isFirstLetter)
        {
            S1[i] = toupper(S1[i]);
        }
        isFirstLetter = (S1[i] == ' ' ? true : false);
    }
    return S1;
}

int main()
{

    string S1 = " ";
    S1 = PrintUpperFirstLeeterOfEachWord(ReadString());
    cout << S1;

    return 0;
}