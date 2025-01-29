int CountCapitalLetter(string S1)
{
    short counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (isupper(S1[i]))
            counter++;
    }

    return counter;
}

int CountSmallLetter(string S1)
{
    short counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (islower(S1[i]))
            counter++;
    }

    return counter;
}