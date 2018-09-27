#pragma once
struct piggybank 
{
	int onedollar;
	int twodollar;
	int fivedollar;
	int quarters;
	int dimes;
	int nickels;
	int pennies;
};

float calcpiggybanknotes(piggybank piggy);
float calcpiggybankcoins(piggybank piggy);
float calcpiggybanktotal(piggybank piggy);