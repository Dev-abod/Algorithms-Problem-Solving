#include <string>
#include <iostream>
#include <cctype>
#include <vector>
#include <fstream>
#include <iomanip>
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

vector<string> SplitString(string S1, string Delim)
{
}

stClient ConvertLineToRecord(string Line, string Seperator = " ")
{
    stClient Client;
    vector<string> vClientData;

    vClientData = SplitString(Line, Seperator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.PhoneNumber = vClientData[3];

    return Client;
}

vector<stClient> LoadClientsDataFromFile(string FileName)
{
    vector<stClient> vClients;
    fstream MyFile;
    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;
        stClient Client;
        while (getline(MyFile, Line))
        {
            Client = ConvertLineToRecord(Line);
            vClients.push_back(Client);
        }
        MyFile.close();
    }
}

void PrintClientRecord(stClient Client)
{
}

void PrintAllClientsData(vector<stClient> vClients)
{
    cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s)";
    cout << "\n________________________________________________________";
    cout << "\n_______________________________________________\n"
         << endl;

    cout << "|  " << left << setw(15) << "Account Number";
    cout << "|  " << left << setw(10) << "Pin Code";
    cout << "|  " << left << setw(40) << "Client Name";
    cout << "|  " << left << setw(12) << "Phone";

    cout << "\n________________________________________________________";
    cout << "\n_______________________________________________\n"
         << endl;

    for (stClient Client : vClients)
    {
        PrintClientRecord(Client);
        cout << endl;
    }

    cout << "\n________________________________________________________";
    cout << "\n_______________________________________________\n"
         << endl;
}

int main()
{
    vector<stClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    PrintAllClientsData(vClients);

    return 0;
}