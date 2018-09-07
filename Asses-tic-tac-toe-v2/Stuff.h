#pragma once
#include<iostream>



int printboard(char board[3][3]);

int Player(char board[3][3], int player, char marker);

int wincheck(char board[3][3], int player);

int tiecheck(int turn, bool win);

