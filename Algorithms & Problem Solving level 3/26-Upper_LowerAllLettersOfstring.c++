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

string LowerFirstLetterOfEachWord(string S1)
{
    bool isFirstLetter = true;
    cout << "\nString After Lower: ";

    for (short i = 0; i <= S1.length(); i++)
    {

        S1[i] = towlower(S1[i]);
    }

    return S1;
}

string UpperFirstLetterOfEachWord(string S1)
{
    bool isFirstLetter = true;
    cout << "\nString After Upper: ";
    for (short i = 0; i < S1.length(); i++)
    {
        S1[i] = toupper(S1[i]);
    }

    return S1;
}

int main()
{
    string S1 = ReadString();

    cout << LowerFirstLetterOfEachWord(S1) << endl;
    cout << UpperFirstLetterOfEachWord(S1) << endl;

    return 0;
}