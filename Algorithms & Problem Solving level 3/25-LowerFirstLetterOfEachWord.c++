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

    for (short i = 0; i <= S1.length(); i++)
    {
        if (S1[i] != ' ' && isFirstLetter)
        {
            S1[i] = towlower(S1[i]);
        }

        isFirstLetter = (S1[i] == ' ' ? true : false);
    }

    return S1;
}

int main()
{

    cout << LowerFirstLetterOfEachWord(ReadString());

    return 0;
}