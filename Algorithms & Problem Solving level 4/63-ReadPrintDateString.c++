#include <iostream>
#include <string>
#include <vector>
using namespace std;
string ReadStringDate(string Message)
{
    string StringDate;
    cout << Message;
    getline(cin >> ws, StringDate);
    return StringDate;
}
struct stDate
{
    short Year;
    short Month;
    short Day;
};
vector<string> SplitString(string S1, string Delimi)
{
    vector<string> vString;
    short pos = 0;
    string sWord;
    while ((pos = S1.find(Delimi)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);

        if (sWord != "")
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delimi.length());
    }
    if (S1 != " ")
    {
        vString.push_back(S1);
    }
    return vString;
}
stDate StringToDate(string SD)
{
    vector<string> vString;
    stDate Date;
    vString = SplitString(SD, "/");
    Date.Day = stoi(vString[0]);
    Date.Month = stoi(vString[1]);
    Date.Year = stoi(vString[2]);
    return Date;
}
string DateToString(stDate Date, string Delimi)
{
    return to_string(Date.Day) + Delimi + to_string(Date.Month) + Delimi +
           to_string(Date.Year);
}
void PrintResult()
{
    string SD = ReadStringDate("\n\tPlease enter date dd/mm/yyyy: ");
    stDate Date;
    Date = StringToDate(SD);
    cout << "\n\tConvert String (" << SD << ") To Date: \n";
    cout << "\t-----------------------------------\n";
    cout << "\tDay : " << Date.Day << endl;
    cout << "\tMonth: " << Date.Month << endl;
    cout << "\tYear : " << Date.Year << endl;
    cout << "\n\tConvert Date To String: \n";
    cout << "\t-----------------------\n";
    cout << "\tYou entered : " << DateToString(Date, "/") << endl;
}
int main()
{
    PrintResult();
    system("pause>0");
    return 0;
}