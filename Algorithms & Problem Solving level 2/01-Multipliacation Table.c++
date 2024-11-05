#include <string>
#include <iostream>
using namespace std;


void PrintTableHeader()
{
    cout << "\n\t\t\tMultiplication Table From 1 to 10\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << "\t" << i;
    }
    cout << endl;


    cout << "-----------------------------------------------------------------------------------\n";
}
string ColumnSperator(int i)
{
    if (i < 10)
        return "  |";
    else
        return " |";
}

void PrintMultiplication()
{
    PrintTableHeader();
    for (int i = 1; i <= 10; i++)
    {
        cout << i << ColumnSperator(i);
        for (int j = 1; j <= 10; j++)
        {
            cout << "\t" << j * i ;
        }
        cout << endl;
    }
}




int main()
{
    
    PrintMultiplication();
    
    
}

