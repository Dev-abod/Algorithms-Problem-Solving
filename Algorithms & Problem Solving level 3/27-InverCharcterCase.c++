#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char ReadChar()
{
    char Ch1 = ' ';
    cout << "Please enter charcter: ";
    cin >> Ch1;

    return Ch1;
}

char InvertCharcterCase(char Ch1)
{
    return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);
}

int main()
{
    cout << "char after inverting case: ";
    cout << InvertCharcterCase(ReadChar());

    return 0;
}