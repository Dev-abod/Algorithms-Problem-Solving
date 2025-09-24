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

string ReplaceWordsInString(string S1, string Word1, string Word2)
{
    short pos = S1.find(Word1);
    while (pos != std::string::npos)
    {
        S1 = S1.replace(pos, Word1.length(), Word2);
        pos = S1.find(Word1); // find next word
    }
    return S1;
}
string FormateDate(stDate Date, string DateFormat = "dd/mm/yyyy")
{
    string FormattedDateString = "";
    FormattedDateString = ReplaceWordsInString(DateFormat, "dd",
                                               to_string(Date.Day));
    FormattedDateString = ReplaceWordsInString(FormattedDateString, "mm",
                                               to_string(Date.Month));
    FormattedDateString = ReplaceWordsInString(FormattedDateString, "yyyy",
                                               to_string(Date.Year));
    return FormattedDateString;
}
void PrintResult()
{
    string SD = ReadStringDate("\n\tPlease enter date dd/mm/yyyy: ");
    stDate Date;
    Date = StringToDate(SD);
    cout << "\t-----------------------------------------\n";
    cout << "\t" << FormateDate(Date) << "\n";
    cout << "\n\t" << FormateDate(Date, "yyyy/mm/dd") << "\n";
    cout << "\n\t" << FormateDate(Date, "mm/dd/yyyy") << "\n";
    cout << "\n\t" << FormateDate(Date, "dd-mm-yyyy") << "\n";
    cout << "\n\t" << FormateDate(Date, "mm-dd-yyyy") << "\n";
    cout << "\n\t" << FormateDate(Date, "Day: dd Month: mm Year: yyyy") << "\n";
}
int main()
{
    PrintResult();
    system("pause>0");
    return 0;
}