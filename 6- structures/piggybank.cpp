#include"piggybank.h"
float calcpiggybanknotes(piggybank piggy)
{
	int totalones = piggy.onedollar;
	int totaltwos = (piggy.twodollar * 2);
	int totalfives = (piggy.fivedollar * 5);
	int total = totalfives + totalones + totaltwos;
	return total;
}
float calcpiggybankcoins(piggybank piggy)
{
	float totalquarters = (piggy.quarters * 0.25 );
	float totaldimes = (piggy.dimes * 0.1);
	float totalnickels = (piggy.nickels * 0.05);
	float totalpennies = (piggy.pennies * 0.01);
	float total = totalquarters + totaldimes + totalnickels + totalpennies;
	return total;
}
float calcpiggybanktotal(piggybank piggy)
{
	float totalones = piggy.onedollar;
	float totaltwos = (piggy.twodollar * 2);
	float totalfives = (piggy.fivedollar * 5);
	float totalquarters = (piggy.quarters * 0.25);
	float totaldimes = (piggy.dimes * 0.1);
	float totalnickels = (piggy.nickels * 0.05);
	float totalpennies = (piggy.pennies * 0.01);
	float total = totalfives + totalones + totaltwos + totalquarters + totaldimes + totalnickels + totalpennies;
	return total;
}