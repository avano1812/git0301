// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
using namespace std;


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

