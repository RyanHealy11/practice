#include <iostream>
#include "Stuff.h"
int main() 
{
	char grid[3][3] = { { '1', '2', '3' },{ '4', '5', '6' },{ '7', '8', '9' } };
	bool win = false;

	printboard(grid);



	do {
		PlayerOne(grid);
		wincheck(grid);
		if (win == false) {
			PlayerTwo(grid);
			wincheck(grid);
		}
	} while (win == false);


	return 0;
}