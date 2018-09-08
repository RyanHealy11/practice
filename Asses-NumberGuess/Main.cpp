#include <iostream>





int main()
{

	bool reset = false;

	std::cout << "Welcome to the number guessing game" << std::endl;
	std::cout << "Please think of a number between 1 and 1000" << std::endl;
	std::cout << "if you must write it down to make sure you remember" << std::endl;
	std::cout << "Press 'h' for Higher 'l' for lower '=' for equals to " << std::endl;
	std::cout << "" << std::endl;
	std::cout << "When you are ready" << std::endl;
	system("pause");

	do {
		int max = 1000;
		int min = 1;
		int guess = INT_MIN;
		char PlayerInput;
		int turncounter = 1;
		bool endgame = false;
		guess = max / 2;
		guess = ((max - min) / 2) + 1;
		do
		{	std::cout << "Is This your number Higher, Lower, or Equals to " << guess << std::endl;
			std::cin >> PlayerInput;
			if (turncounter == 11) { std::cout << "Looks like someone changed there number" << std::endl; endgame = true; }
			else if (PlayerInput == 'h')
			{	++turncounter;
				min = guess;
				guess = (((max - min) / 2) + min);}
			else if (PlayerInput == 'l')
			{	++turncounter;
				max = guess;
				guess = (((max - min) / 2) + min);}
			else if (PlayerInput == '=')
			{	++turncounter;
				endgame = true;
				std::cout << "It Took the Computer " << turncounter << " turns to find your number" << std::endl;}
			else { std::cout << "Please enter a valid selection" << std::endl; }
		} while (endgame == false);
		std::cout << "would you like to play again? y/n" << std::endl;
		char PlayerReset = 't';
		std::cin >> PlayerReset;
		if (PlayerReset == 'y') { reset = true; }
		else if (PlayerReset == 'n') { reset = false; }
	} while (reset == true);
return 0;
}