#include <iostream>
#include "Stuff.h"
#include <string>
int main()
{
	bool restart = false;
	do {
		char grid[3][3] = { { '1', '2', '3' },{ '4', '5', '6' },{ '7', '8', '9' } };
		bool win = false;
		int currentplayer = INT_MIN;
		int turncounter = 0;
		int currentmarker = 'x';
		printboard(grid);



		do {
			currentmarker = 'x';
			++turncounter;
			currentplayer = Player(grid, currentplayer, currentmarker);
			win = wincheck(grid, currentplayer);
			win = tiecheck(turncounter, win);

			if (win == false) {
				currentmarker = 'o';
				++turncounter;
				currentplayer = Player(grid, currentplayer, currentmarker);
				win = wincheck(grid, currentplayer);
				win = tiecheck(turncounter, win);

			}
		} while (win == false);
		char again = 'z';
		std::cout << "Would you like to play again?" << std::endl;
		std::cout << "y for Yes or n for No" << std::endl;
		std::cin >> again;
		if (again == 'y') { restart = true; }
		
	} while (restart == true);
	return 0;
}