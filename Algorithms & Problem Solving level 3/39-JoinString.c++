#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString()
{
    string S1 = " ";
    cout << "Please enter string: ";
    getline(cin, S1);

    return S1;
}

string JoinString(vector<string> vString, string delim)
{
    string S1 = " ";

    for (string &s : vString)
    {
        S1 = S1 + s + delim;
    }

    return S1.substr(0, S1.length() - delim.length());
}

int main()
{
    vector<string> vString = {"Ali", "Salem", "Fadi"};
    string S1 = " ";
    S1 = JoinString(vString, " ");

    cout << "String : " << S1;

    return 0;
}