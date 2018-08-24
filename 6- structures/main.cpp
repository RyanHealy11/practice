#include <iostream>
#include "piggybank.h"
#include "student.h"


int main()
{
	piggybank me{ 1, 1, 1, 1, 1, 1, 1 };
	std::cout << calcpiggybanknotes(me) << std::endl; ;
	std::cout << calcpiggybankcoins(me) << std::endl; ;
	std::cout << calcpiggybanktotal(me) << std::endl; ;

	studentinfo s1{ 12006, 1, 45 };
	studentinfo s2{ 12007, 2, 29 };
	studentinfo s3{ 12008, 2, 32 };
	studentinfo s4{ 12009, 1, 40 };
	studentinfo s5{ 12010, 2, 47 };
	studentinfo s6{ 12011, 2, 28 };

	printstudentinfo(s1);
	printstudentinfo(s2);
	printstudentinfo(s3);
	printstudentinfo(s4);
	printstudentinfo(s5);
	printstudentinfo(s6);

	avgtestscores(s1);

















	return 0;
}