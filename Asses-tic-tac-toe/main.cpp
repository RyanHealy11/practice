#include <iostream>

int main() 
{
	char grid[3][3] = { { 'a', 'a', 'a' }, { 'a', 'a', 'a' }, { 'a', 'a', 'a' } };

	int onewin = false;
	int twowin = false;
	int playeroneselection = 0;
	while (onewin == false or twowin == false) {

		std::cout << " ----+---+----" << std::endl;
		std::cout << " | " << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2] << " | " << std::endl;
		std::cout << " ----+---+----" << std::endl;
		std::cout << " | " << grid[1][0] << " | " << grid[1][1] << " | " << grid[1][2] << " | " << std::endl;
		std::cout << " ----+---+----" << std::endl;
		std::cout << " | " << grid[2][0] << " | " << grid[2][1] << " | " << grid[2][2] << " | " << std::endl;
		std::cout << " ----+---+----" << std::endl;


		std::cin >> playeroneselection ;

		if (playeroneselection == 1) 
		{grid[0][0] = 'x';}
		else if (playeroneselection == 2)
		{grid[0][1] = 'x';}
		else if (playeroneselection == 3)
		{grid[0][2] = 'x';}
		else if (playeroneselection == 4)
		{grid[1][0] = 'x';}
		else if (playeroneselection == 5)
		{grid[1][1] = 'x';}
		else if (playeroneselection == 6)
		{grid[1][2] = 'x';}
		else if (playeroneselection == 7)
		{grid[2][0] = 'x';}
		else if (playeroneselection == 8)
		{grid[2][1] = 'x';}
		else if (playeroneselection == 9)
		{grid[2][2] = 'x';}



		if ((grid[0][0] == grid[0][1]) and (grid[0][0] == grid[0][2]))
		{
			std::cout << "wooooooooo" << std::endl;
		}


	}
	
	
	
	

	return 0;
}