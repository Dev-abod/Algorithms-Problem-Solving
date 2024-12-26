#include <string>
#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;

const string ClientsFileName = "Clients.txt";

struct stClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string PhoneNumber;
    double AccountBalance;
};

stClient ReadNewClient()
{
    stClient Client;

    cout << "Enter account Number ? : ";

    // Usage of std::ws will extract all the whitspace character
    getline(cin >> ws, Client.AccountNumber);

    cout << "Enter PinCode?         : ";
    getline(cin, Client.PinCode);

    cout << "Enter Name?            : ";
    getline(cin, Client.Name);

    cout << "Enter Phone?           : ";
    getline(cin, Client.PhoneNumber);

    return Client;
}

string ConvertRecordToLine(stClient Client, string Seperator = " ")
{
    string stClientRecord = " ";

    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.PhoneNumber;

    return stClientRecord;
}

void AddDataLineToFile(string FileName, string stDataLine)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app);

    if (MyFile.is_open())
    {
        MyFile << stDataLine << endl;
        MyFile.close();
    }
}

void AddNewCliient()
{
    stClient Client;
    Client = ReadNewClient();
    AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));
}

void AddClients()
{
    char AddMore = 'Y';
    do
    {
        system("cls");
        cout << "Adding New Client:\n\n";
        AddNewCliient();
        cout << "\nClient Added Successfully, do you want to add more client:";
        cin >> AddMore;
    } while (toupper(AddMore) == 'Y');
}

int main()
{

    AddClients();

    return 0;
}