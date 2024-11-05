#include <iostream>
#include <string>

using namespace std;

string ReadText()
{
	string Text;
	cout << "\nplease enter Text\n";
	getline(cin, Text);
	return Text;
}

string EncryptionText(string Text, short encrypted)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + encrypted);
	}
	return Text;
}

string DecryptionText(string Text, short Decrepted)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - Decrepted);
	}
	return Text;
}

int main()
{
	const int EncreptedKey = 2;
	string TextAfterEncrypted, TextAfterDecrypted;

	string Text = ReadText();

	TextAfterEncrypted = EncryptionText(Text, EncreptedKey);
	TextAfterDecrypted = DecryptionText(EncryptionText(Text, EncreptedKey), EncreptedKey);

	cout << "After :" << Text << "\n";
	cout << "after Encrepted : " << TextAfterEncrypted << "\n";
	cout << "after Decrepted : " << TextAfterDecrypted << "\n";

	return 0;
}
