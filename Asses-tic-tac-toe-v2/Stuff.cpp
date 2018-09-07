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

int Player(char board[3][3],int player, char marker)
{
	
	int repeat = false;
	player = 1;
	do
	{
		repeat = false;
		std::cout << "" << std::endl;
		std::cout << "Player one which spot would you like? " << std::endl;
		int playerselection = INT_MIN;
		std::cin >> playerselection;
		
		if (playerselection == 1 and board[0][0] == '1')
		{ board[0][0] = marker;}
		else if (playerselection == 2 and board[0][1] == '2')
		{ board[0][1] = marker;}
		else if (playerselection == 3 and board[0][2] == '3')
		{ board[0][2] = marker;}
		else if (playerselection == 4 and board[1][0] == '4')
		{ board[1][0] = marker;}
		else if (playerselection == 5 and board[1][1] == '5')
		{board[1][1] = marker;}
		else if (playerselection == 6 and board[1][2] == '6')
		{board[1][2] = marker;}
		else if (playerselection == 7 and board[2][0] == '7')
		{board[2][0] = marker;}
		else if (playerselection == 8 and board[2][1] == '8')
		{board[2][1] = marker;}
		else if (playerselection == 9 and board[2][2] == '9')
		{board[2][2] = marker;}
		else if (playerselection <= 9 and playerselection > 0) 
		{ repeat = true; std::cout << "Please choose a spot that hasent been chosen yet" << std::endl; }
		else {  std::cout << "Please choose a valid number" << std::endl; repeat = true; printboard(board); }
	} while (repeat == true);
	
	printboard(board);

	return player;
}

int wincheck(char board[3][3], int player)
{
	if ((board[0][0] == board[0][1]) and (board[0][0] == board[0][2]) )
	{std::cout << "Congradulations player "<< player << " You have won!!!!!!!!!!!" << std::endl;
		return true;	}
	else if ((board[1][0] == board[1][1]) and (board[1][0] == board[1][2]))
	{		std::cout << "Congradulations player " << player << " You have won!!!!!!!!!!" << std::endl;
		return true;	}
	else if ((board[2][0] == board[2][1]) and (board[2][0] == board[2][2]) )
	{		std::cout << "Congradulations player " << player << " You have won!!!!!!!!!!!!!!" << std::endl;
		return true;	}
	else if ((board[0][0] == board[1][0]) and (board[0][0] == board[2][0]) )
	{		std::cout << "Congradulations player " << player << " You have won!!!!!!!!!!!!" << std::endl;
		return true;	}
	else if ((board[0][1] == board[1][1]) and (board[0][1] == board[2][1]) )
	{		std::cout << "Congradulations player " << player << " You have won!!!!!!!!!!!!!!!!" << std::endl;
		return true;	}
	else if ((board[0][2] == board[1][2]) and (board[0][2] == board[2][2]) )
	{		std::cout << "Congradulations player " << player << " You have won!!!!!!!!!!!!!!!" << std::endl;
		return true;	}
	else if ((board[0][0] == board[1][1]) and (board[0][0] == board[2][2]) )
	{		std::cout << "Congradulations player " << player << " You have won!!!!!!!!!!!!!!" << std::endl;
		return true;	}
	else if ((board[2][0] == board[1][1]) and (board[2][0] == board[0][2]) )
	{		std::cout << "Congradulations player " << player << " You have won!!!!!!!!!!!!!!!!!!" << std::endl;
		return true;	}
	return false;
}

int tiecheck(int turn, bool win)
{
	if (win == false) {
		if (turn == 9)
		{
			std::cout << "WOW ITS A TIE !!!!!!!" << std::endl;
			return true;
		}
		return false;
	}
	return true;
}