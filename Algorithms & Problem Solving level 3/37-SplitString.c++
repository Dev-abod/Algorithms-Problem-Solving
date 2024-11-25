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

    cout << "\nYour string words are: \n\n";
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

int main()
{
    vector<string> vString;
    string S2 = "Abdullah###Abdulhamed###salem";

    vString = SplitString(S2, "###");

    cout << "Token = " << vString.size() << endl;

    for (string &S1 : vString)
    {
        cout << S1 << endl;
    }

    return 0;
}