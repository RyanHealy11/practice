#include <iostream>

int main() 
{
	char grid[3][3] = { { '1', '2', '3' }, { '4', '5', '6' }, { '7', '8', '9' } };
std::cout << "Welcome to Tic Tac Toe" << std::endl;
	int onewin = false;
	int twowin = false;
	int repeat = false;
	bool one = false;
	bool two = false;
	bool three = false;
	bool four = false;
	bool five = false;
	bool six = false;
	bool seven = false;
	bool eight = false;
	bool nine = false;
	bool tie = false;
	int playeroneselection = 0;
	int playertwoselection = 0;
	do 
	{
		//player one
		std::cout << "" << std::endl;
		std::cout << " ----+---+----" << std::endl;
		std::cout << " | " << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2] << " | " << std::endl;
		std::cout << " ----+---+----" << std::endl;
		std::cout << " | " << grid[1][0] << " | " << grid[1][1] << " | " << grid[1][2] << " | " << std::endl;
		std::cout << " ----+---+----" << std::endl;
		std::cout << " | " << grid[2][0] << " | " << grid[2][1] << " | " << grid[2][2] << " | " << std::endl;
		std::cout << " ----+---+----" << std::endl;

		//player one selecton
		do 
		{
			repeat = false;
			std::cout << "" << std::endl;
			std::cout << "Player one which spot would you like? " << std::endl;
			
			std::cin >> playeroneselection;
			if (playeroneselection == 1)
			{
				if (one == false) { grid[0][0] = 'x'; one = true; }
				else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
			}
			else if (playeroneselection == 2)
			{
				if (two == false) { grid[0][1] = 'x'; two = true; }
				else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl;}
			}
			else if (playeroneselection == 3)
			{
				if (three == false) { grid[0][2] = 'x'; three = true; }
				else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl;}
			}
			else if (playeroneselection == 4)
			{
				if (four == false) { grid[1][0] = 'x'; four = true; }
				else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl;}
			}
			else if (playeroneselection == 5)
			{
				if (five == false) { grid[1][1] = 'x'; five = true; }
				else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl;}
			}
			else if (playeroneselection == 6)
			{
				if (six == false) { grid[1][2] = 'x'; six = true; }
				else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl;}
			}
			else if (playeroneselection == 7)
			{
				if (seven == false) { grid[2][0] = 'x'; seven = true; }
				else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl;}
			}
			else if (playeroneselection == 8)
			{
				if (eight == false) { grid[2][1] = 'x'; eight = true; }
				else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl;}
			}
			else if (playeroneselection == 9)
			{
				if (nine == false) { grid[2][2] = 'x'; nine = true; }
				else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl;}
			}
			else { std::cout << "Please choose a valid number" << std::endl; repeat = true; }
		} while (repeat == true);

		if ((grid[0][0] == grid[0][1]) and (grid[0][0] == grid[0][2]) and (grid[0][0] == 'x'))
		{
			std::cout << "Congradulations player one You have won" << std::endl;
			onewin = true;
		}
		else if ((grid[1][0] == grid[1][1]) and (grid[1][0] == grid[1][2]) and (grid[1][0] == 'x'))
		{
			std::cout << "Congradulations player one You have won" << std::endl;

			onewin = true;
		}
		else if ((grid[2][0] == grid[2][1]) and (grid[2][0] == grid[2][2]) and (grid[2][0] == 'x'))
		{
			std::cout << "Congradulations player one You have won" << std::endl;

			onewin = true;
		}
		else if ((grid[0][0] == grid[1][0]) and (grid[0][0] == grid[2][0]) and (grid[0][0] == 'x'))
		{
			std::cout << "Congradulations player one You have won" << std::endl;

			onewin = true;
		}
		else if ((grid[0][1] == grid[1][1]) and (grid[0][1] == grid[2][1]) and (grid[0][1] == 'x'))
		{
			std::cout << "Congradulations player one You have won" << std::endl;

			onewin = true;
		}
		else if ((grid[0][2] == grid[1][2]) and (grid[0][2] == grid[2][2]) and (grid[0][2] == 'x'))
		{
			std::cout << "Congradulations player one You have won" << std::endl;

			onewin = true;
		}
		else if ((grid[0][0] == grid[1][1]) and (grid[0][0] == grid[2][2]) and (grid[0][0] == 'x'))
		{
			std::cout << "Congradulations player one You have won" << std::endl;

			onewin = true;
		}
		else if ((grid[2][0] == grid[1][1]) and (grid[2][0] == grid[0][2]) and (grid[2][0] == 'x'))
		{
			std::cout << "Congradulations player one You have won" << std::endl;

			onewin = true;
		}
		if (((one and two and three and four and five and six and seven and eight and nine) == true) and tie == false)
		{
			std::cout << "WOW ITS A TIE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
			tie = true;
		}
		//player 2
		if ((onewin == false) and (tie == false)) 
		{
			std::cout << "" << std::endl;
			std::cout << " ----+---+----" << std::endl;
			std::cout << " | " << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2] << " | " << std::endl;
			std::cout << " ----+---+----" << std::endl;
			std::cout << " | " << grid[1][0] << " | " << grid[1][1] << " | " << grid[1][2] << " | " << std::endl;
			std::cout << " ----+---+----" << std::endl;
			std::cout << " | " << grid[2][0] << " | " << grid[2][1] << " | " << grid[2][2] << " | " << std::endl;
			std::cout << " ----+---+----" << std::endl;
			
			//p2 spot selection
			do 
			{
				std::cout << "Player two which spot would you like?" << std::endl;
				
				repeat = false;
				std::cin >> playertwoselection;
				if (playertwoselection == 1)
				{
					if (one == false) { grid[0][0] = 'o'; one = true; }
					else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
				}
				else if (playertwoselection == 2)
				{
					if (two == false) { grid[0][1] = 'o'; two = true; }
					else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
				}
				else if (playertwoselection == 3)
				{
					if (three == false) { grid[0][2] = 'o'; three = true; }
					else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
				}
				else if (playertwoselection == 4)
				{
					if (four == false) { grid[1][0] = 'o'; four = true; }
					else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
				}
				else if (playertwoselection == 5)
				{
					if (five == false) { grid[1][1] = 'o'; five = true; }
					else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
				}
				else if (playertwoselection == 6)
				{
					if (six == false) { grid[1][2] = 'o'; six = true; }
					else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
				}
				else if (playertwoselection == 7)
				{
					if (seven == false) { grid[2][0] = 'o'; seven = true; }
					else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
				}
				else if (playertwoselection == 8)
				{
					if (eight == false) { grid[2][1] = 'o'; eight = true; }
					else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
				}
				else if (playertwoselection == 9)
				{
					if (nine == false) { grid[2][2] = 'o'; nine = true; }
					else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
				}
				else { std::cout << "Please choose a valid number" << std::endl; repeat = true; }
			} while (repeat == true);
			
			//win checks for p2
			if ((grid[0][0] == grid[0][1]) and (grid[0][0] == grid[0][2]) and (grid[0][0] == 'o'))
			{
				std::cout << "Congradulations player two You have won" << std::endl;
				twowin = true;
			}
			else if ((grid[1][0] == grid[1][1]) and (grid[1][0] == grid[1][2]) and (grid[1][0] == 'o'))
			{
				std::cout << "Congradulations player two You have won" << std::endl;

				twowin = true;
			}
			else if ((grid[2][0] == grid[2][1]) and (grid[2][0] == grid[2][2]) and (grid[2][0] == 'o'))
			{
				std::cout << "Congradulations player two You have won" << std::endl;

				twowin = true;
			}
			else if ((grid[0][0] == grid[1][0]) and (grid[0][0] == grid[2][0]) and (grid[0][0] == 'o'))
			{
				std::cout << "Congradulations player two You have won" << std::endl;

				twowin = true;
			}
			else if ((grid[0][1] == grid[1][1]) and (grid[0][1] == grid[2][1]) and (grid[0][1] == 'o'))
			{
				std::cout << "Congradulations player two You have won" << std::endl;

				twowin = true;
			}
			else if ((grid[0][2] == grid[1][2]) and (grid[0][2] == grid[2][2]) and (grid[0][2] == 'o'))
			{
				std::cout << "Congradulations player two You have won" << std::endl;

				twowin = true;
			}
			else if ((grid[0][0] == grid[1][1]) and (grid[0][0] == grid[2][2]) and (grid[0][0] == 'o'))
			{
				std::cout << "Congradulations player two You have won" << std::endl;

				twowin = true;
			}
			else if ((grid[2][0] == grid[1][1]) and (grid[2][0] == grid[0][2]) and (grid[2][0] == 'o'))
			{
				std::cout << "Congradulations player two You have won" << std::endl;

				twowin = true;
			}
		}

		if (((one and two and three and four and five and six and seven and eight and nine) == true) and tie == false) 
		{
			std::cout << "WOW ITS A TIE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
			tie = true;
		}


	} while ((onewin == false) and (twowin == false) and (tie == false));
	return 0;
}