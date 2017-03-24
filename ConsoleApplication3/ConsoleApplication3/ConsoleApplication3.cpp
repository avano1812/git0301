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
	cout << "\t\t\tWelcome to Word Jumble!" << endl << endl;
	cout << "Unscramble the letters to make a word." << endl;
	cout << "Enter 'quit' to quit the game." << endl;
	cout << "The jumble is: " << aJumble;
}

void play(const string& aWord)
{
	string guess;
	do{
		cout << "Enter your guess: ";
		cin >> guess;

		if ((guess != aWord) && (guess != "quit"))
		{
			cout << "You are WERY WERY WRONG!!!!\n";
		}
	} while ((guess != aWord) && (guess != "quit"));

	if (guess == aWord)
	{
		cout << "You got it!\n";
	}

	cout << "Thanks a lot for playing.\n";
}