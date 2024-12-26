#include <string>
#include <iostream>
#include <vector>
using namespace std;

struct stClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string PhoneNumber;
    double AccountBalance;
};

vector<string> SplitString(string S1, string Seperator)
{
    vector<string> vString;

    cout << "\nYour string words are: \n\n";
    short pos = 0;
    string sWord; // define a string variable

    // use find() function to get the position the delimiters
    while ((pos = S1.find(Seperator)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); // store the word
        if (sWord != "")
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Seperator.length()); // erase() until position and move to next word
    }

    if (S1 != "")
    {
        vString.push_back(S1); // it adds last word of the string
    }

    return vString;
}

stClient ConvertLineToRecord(string Line, string Seperator = "#//#")
{
    stClient Client;

    vector<string> vClientData;
    vClientData = SplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.PhoneNumber = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]); // cast string to double

    return Client;
}

void PrintClientRecord(stClient Client)
{
    cout << "Account Number      : " << Client.AccountNumber << endl;
    cout << "Pin Code            : " << Client.PinCode << endl;
    cout << "Client Name         : " << Client.Name << endl;
    cout << "Phone Number        : " << Client.PhoneNumber << endl;
    cout << "Account Balance     : " << Client.AccountBalance << endl;
}

int main()
{
    stClient Client;

    string S1 = "A150#//#1234#//#Abdullah Abdulahamid#//#778454456#//#4525.000";
    cout << S1 << endl << endl;

    cout << "\n\nClient Record for saving is:\n ";
    Client = ConvertLineToRecord(S1);

    PrintClientRecord(Client);

    return 0;
}