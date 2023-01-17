#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(time(nullptr));
	
	bool guessedNumber = false;
	int guessCount = 0;
	int ourGuess = 0;
	int guessNumber = 0;
	int computerNumber = rand() % 100 + 1;

	while (!guessNumber) {
		cout << "Enter your guess" << endl;
		cin >> ourGuess;

		if (ourGuess > 100 || ourGuess < 1)
		{
			cout << "That was a wasted guess. You must pick a number between 1 and 100 inclusive!" << endl;
			guessCount++;
			continue;
		}

		if (ourGuess == computerNumber) 
		{
			cout << "Congratulation! You guessed  the number in " << guessCount << " guesses!" << endl;
			cout << "Thanks for playing!" << endl;
			guessedNumber = true;
		}
		else if (ourGuess > computerNumber)
		{
			cout << "Your guess is too high!" << endl;
		}
		else
		{
			cout << "Your guess is too low!" << endl;
		}

		guessCount++;
	}
	return 0;
}
