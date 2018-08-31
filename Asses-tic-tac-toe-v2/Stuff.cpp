#include <iostream>
#include "Stuff.h"

int printboard(char board[3][3])
{
	std::cout << "" << std::endl;
	std::cout << " ----+---+----" << std::endl;
	std::cout << " | " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " | " << std::endl;
	std::cout << " ----+---+----" << std::endl;
	std::cout << " | " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " | " << std::endl;
	std::cout << " ----+---+----" << std::endl;
	std::cout << " | " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " | " << std::endl;
	std::cout << " ----+---+----" << std::endl;

	return 0;
}

int PlayerOne(char board[3][3])
{
	int repeat = false;

	do
	{
		repeat = false;
		std::cout << "" << std::endl;
		std::cout << "Player one which spot would you like? " << std::endl;
		int playerselection = INT_MIN;
		std::cin >> playerselection;
		if (playerselection == 1)
		{
			if (board[0][0] == '1') { board[0][0] = 'x';}
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 2)
		{
			if (board[0][1] == '2') { board[0][1] = 'x';}
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 3)
		{
			if (board[0][2] == '3') { board[0][2] = 'x';}
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 4)
		{
			if (board[1][0] == '4') { board[1][0] = 'x';}
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 5)
		{
			if (board[1][1] == '5') { board[1][1] = 'x';}
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 6)
		{
			if (board[1][2] == '6') { board[1][2] = 'x';}
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 7)
		{
			if (board[2][0] == '7') { board[2][0] = 'x';}
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 8)
		{
			if (board[2][1] == '8') { board[2][1] = 'x';}
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 9)
		{
			if (board[2][2] == '9') { board[2][2] = 'x';}
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else { std::cout << "Please choose a valid number" << std::endl; repeat = true; }
	} while (repeat == true);
	
	printboard(board);

	return 0;
}

int PlayerTwo(char board[3][3])
{
	int repeat = false;

	do
	{
		repeat = false;
		std::cout << "" << std::endl;
		std::cout << "Player Two which spot would you like? " << std::endl;
		int playerselection = INT_MIN;
		std::cin >> playerselection;
		if (playerselection == 1)
		{
			if (board[0][0] == '1') { board[0][0] = 'o'; }
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 2)
		{
			if (board[0][1] == '2') { board[0][1] = 'o'; }
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 3)
		{
			if (board[0][2] == '3') { board[0][2] = 'o'; }
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 4)
		{
			if (board[1][0] == '4') { board[1][0] = 'o'; }
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 5)
		{
			if (board[1][1] == '5') { board[1][1] = 'o'; }
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 6)
		{
			if (board[1][2] == '6') { board[1][2] = 'o'; }
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 7)
		{
			if (board[2][0] == '7') { board[2][0] = 'o'; }
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 8)
		{
			if (board[2][1] == '8') { board[2][1] = 'o'; }
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else if (playerselection == 9)
		{
			if (board[2][2] == '9') { board[2][2] = 'o'; }
			else { repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		}
		else { std::cout << "Please choose a valid number" << std::endl; repeat = true; }
	} while (repeat == true);

	printboard(board);
	return 0;
}

int wincheck(char board[3][3])
{
	if ((board[0][0] == board[0][1]) and (board[0][0] == board[0][2]) and (board[0][0] == 'x'))
	{
		std::cout << "Congradulations player one You have won!!!!!!!!!!!" << std::endl;
		
	}
	else if ((board[1][0] == board[1][1]) and (board[1][0] == board[1][2]) and (board[1][0] == 'x'))
	{
		std::cout << "Congradulations player one You have won!!!!!!!!!!" << std::endl;

		
	}
	else if ((board[2][0] == board[2][1]) and (board[2][0] == board[2][2]) and (board[2][0] == 'x'))
	{
		std::cout << "Congradulations player one You have won!!!!!!!!!!!!!!" << std::endl;

		
	}
	else if ((board[0][0] == board[1][0]) and (board[0][0] == board[2][0]) and (board[0][0] == 'x'))
	{
		std::cout << "Congradulations player one You have won!!!!!!!!!!!!" << std::endl;

		
	}
	else if ((board[0][1] == board[1][1]) and (board[0][1] == board[2][1]) and (board[0][1] == 'x'))
	{
		std::cout << "Congradulations player one You have won!!!!!!!!!!!!!!!!" << std::endl;

		
	}
	else if ((board[0][2] == board[1][2]) and (board[0][2] == board[2][2]) and (board[0][2] == 'x'))
	{
		std::cout << "Congradulations player one You have won!!!!!!!!!!!!!!!" << std::endl;

		
	}
	else if ((board[0][0] == board[1][1]) and (board[0][0] == board[2][2]) and (board[0][0] == 'x'))
	{
		std::cout << "Congradulations player one You have won!!!!!!!!!!!!!!" << std::endl;

		
	}
	else if ((board[2][0] == board[1][1]) and (board[2][0] == board[0][2]) and (board[2][0] == 'x'))
	{
		std::cout << "Congradulations player one You have won!!!!!!!!!!!!!!!!!!" << std::endl;

		
	}
	return 0;
}
