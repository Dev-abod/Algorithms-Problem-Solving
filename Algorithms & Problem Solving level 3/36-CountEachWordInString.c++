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

int CountWord(string S1)
{
    string delim = " "; // delimiter
    int counter = 0;

    cout << "\nYour string words are: \n\n";
    short pos = 0;
    string sWord; // define a string variable

    // use find() function to get the position the delimiters
    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); // store the word
        if (sWord != "")
        {
            counter++;
        }
        S1.erase(0, pos + delim.length()); // erase() until position and move to next word
    }

    if (S1 != "")
    {
        counter++; // it count the last word of the string
    }

    return counter;
}

int main()
{
    string S1 = ReadString();

    cout << "The number of words in your string is: " << CountWord(S1);
    return 0;
}