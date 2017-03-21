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
