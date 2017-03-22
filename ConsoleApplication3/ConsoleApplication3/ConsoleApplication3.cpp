// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <time.h>
using namespace std;
string randomWord();
string mixUp(const string& aWord);
void welcomePlayer(const string& aJumble);
void play(const string& aWord);


int main() {
	srand(time(NULL));

	string secretWord;
	secretWord = randomWord();

	string jumble;
	jumble = mixUp(secretWord);

	welcomePlayer(jumble);

	play(secretWord);

	system("pause");

	return 0;
}

string randomWord()
{
	return string();
}

string mixUp(const string& aWord)
{
	string aJumble = aWord;
	int length = static_cast<int>(aJumble.size());

	for (int i = 0; i < length; ++i)
	{
		int randomIndex = (rand() % length);
		char temp = aJumble[i];
		aJumble[i] = aJumble[randomIndex];
		aJumble[randomIndex] = temp;
	}
	return aJumble;
}
void welcomePlayer(const string& aJumble)
{
	return;
}
void play(const string& aWord)
{
	return;
}