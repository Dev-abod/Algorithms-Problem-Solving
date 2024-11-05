
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int Random(int From, int To)
{
    // Function to generate a random number
    int Random = rand() % (To - From + 1) + From;
    return Random;
}

enum enCharType
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialLetter = 3,
    Digit = 4
};

char GetRandomCharcter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter:
    {
        return char(Random(97, 122));
    }
    case enCharType::CapitalLetter:
    {
        return char(Random(65, 90));
    }
    case enCharType::SpecialLetter:
    {
        return char(Random(33, 47));
    }
    case enCharType::Digit:
    {
        return char(Random(48, 54));
    }
    }
}

int main()
{
    //Seeds therandom number generator in C++, called only once
    srand((unsigned)time(NULL));

    cout << GetRandomCharcter(enCharType::SmallLetter) << endl;
    cout << GetRandomCharcter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharcter(enCharType::SpecialLetter) << endl;
    cout << GetRandomCharcter(enCharType::Digit) << endl;

    return 0;
}
