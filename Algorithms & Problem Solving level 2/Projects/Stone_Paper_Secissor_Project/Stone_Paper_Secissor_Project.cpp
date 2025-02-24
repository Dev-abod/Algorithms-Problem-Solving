
#include <iostream>
using namespace std;

enum enGameChoice { Stone =1, Paper =2 , Scissors =3};

enum enWinner {Player1 =1 , Computer =2 , Draw =3};

struct stRoundInfo
{
    short RoundNumber = 0;
    enGameChoice Player1Choice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string WinnerName;
};

struct stGameResults
{
    short GameRounds = 0;
    short Player1WinTimes = 0;
    short Computer2WinPlayer = 0;
    short DrawTimes = 0;
    enWinner GameWinner;
    string WinnerName = "";
};

stGameResults PlayGame(short HowManyRounds)
{
    stRoundInfo RoundInfo;
    short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

    for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++)
    {
        cout << "\nRound [" << GameRound << "] begins:\n";
        RoundInfo.RoundNumber = GameRound;
    }
}

short ReadHowManyRound() // ÊÚíÏ ßã ÚÏÏ ÇáÌæáÇÊ ÇáãÎÊÇÑÉ ãä ÞÈá ÇáãÓÊÎÏã
{
    short GameRounds = 1;
    do
    {
        cout << "How Many Rounds 1 to 10 : ";
        cin >> GameRounds;
    } while (GameRounds < 1 || GameRounds>10);

    return GameRounds;
}

void ResetScreen()
{

}

void StartGame()
{
    char PlayAgain = 'Y';
    do
    {
        ResetScreen();
        stGameResults GameResults = PlayGame(ReadHowManyRound());
        cout << endl << "Do you want to play again? Y/N? ";
        cin >> PlayAgain;
    } while (PlayAgain == 'Y' || PlayAgain == 'y');
}


int main()
{
    StartGame();
    return 0;
}


