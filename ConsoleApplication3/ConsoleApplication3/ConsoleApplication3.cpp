// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
using namespace std;


int main() {
	
	cout << "Hello World" << endl;
	
	system("pause");
	return 0;
}


//return a random word
string randomWord()
{
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS] =
	{
		"wall",
		"glasses",
		"labored",
		"persistent",
		"jumble"
	};

	int choice = (rand() % NUM_WORDS);
	string word = WORDS[choice];

	return word;


}
