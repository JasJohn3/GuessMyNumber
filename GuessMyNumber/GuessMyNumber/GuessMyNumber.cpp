// GuessMyNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));  //seed random number generator

	int secretNumber = rand() % 100 + 1;  // random number between 1 and 100

	int tries = 0;
	int guess;

	cout << "\tWelcome to Guess My Number\n\n";

	do
	{
		cout << "Enter a Guess: ";
		cin >> guess; //user variable input
		++tries; //increment tries

		if (guess > secretNumber)
		{
			cout << "Too High!\n\n";
		}
		else if (guess < secretNumber)
		{
			cout << "Too Low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You guessed it in " << tries << " tries!\n";
		}
	} while (guess != secretNumber);
    return 0;
}

