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

vector<string> SplitString(string S1, string delim)
{
    vector<string> vString;
    short pos = 0;
    string sWord; // define a string variable

    // use find() function to get the position the delimiters
    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); // store the word
        if (sWord != "")
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + delim.length()); // erase() until position and move to next word
    }

    if (S1 != "")
    {
        vString.push_back(S1); // it adds last word of the string
    }

    return vString;
}

string ReverseString(vector<string> vString, string delim)
{
    string S1 = "";

    // declare iterator
    vector<string>::iterator iter = vString.end();
    while (iter != vString.begin())
    {
        --iter;
        S1 += *iter + " ";
    }

    S1 = S1.substr(0 , S1.length() - delim.length());

    return S1;
}

int main()
{
    vector<string> vString;
    string S1 = ReadString();

    cout << "\nBefor Reverse string : ";
    vString = SplitString(S1, " ");
    for (string &s : vString)
    {
        cout << s << " ";
    }

    cout << "\nAfter Reverse string : ";
    cout << ReverseString(vString, " ");

    return 0;
}