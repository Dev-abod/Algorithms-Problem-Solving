#include <string>
#include <iostream>
using namespace std;

struct stClient
{
    string AccountNumber;
    string PinCode ;
    string Name ;
    string PhoneNumber;
    double AccountBalance;
};

stClient ReadNewClient()
{
    stClient Client;

    cout << "Enter account Number  : ";
    getline(cin, Client.AccountNumber);

    cout << "Enter Pin Code        : ";
    getline(cin, Client.PinCode);

    cout << "Enter Name            : ";
    getline(cin, Client.Name);

    cout << "Enter Phone Number    : ";
    getline(cin, Client.PhoneNumber);

    cout << "Enter account Balance : ";
    cin >> Client.AccountBalance;

    return Client;
}

string ConvertRecordToLine(stClient Client, string Seperator = " ")
{
    string stClientRecord = " ";

    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.PhoneNumber + Seperator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;
}

int main()
{
    stClient Client;

    cout << "Please Enter Client Data: \n\n";
    Client = ReadNewClient();

    cout << "\n\nClient Record for saving is:\n ";
    cout << ConvertRecordToLine(Client);

    return 0;
}