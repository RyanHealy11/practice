#include <iostream>

int main()

{
	/*
	int input1 = -1;
	std::cout << "Give me a number between 1 and 100 " << std::endl;
	std::cin >> input1;

	if (input1 < 50)
	{
		std::cout << "That is a small number" << std::endl;
	}
	else if (input1 == 50)
	{
		std::cout << "your number is a balenced number" << std::endl;
	}
	else 
	{
		std::cout << "That is a large number" << std::endl;
	}
	*/

	/*
	int age = -1;
	std::cout << "What is your age? " << std::endl;
	
	std::cin >> age;
	
	
	if (age >= 65)
	{
		std::cout << "you are eligable for retierment benifits!!!!!!!" << std::endl;
	}
	else if (age >= 50)
	{
		std::cout << "you are eligable to join AARP" << std::endl;
	}
	else if (age >= 18)
	{
		std::cout << "you are now an adult have fun adulting" << std::endl;
	}
	else
	{
		std::cout << "leave this pub now minor " << std::endl;
	}
	*/
	/*
	int num1 = -1;
	int num2 = -1;
	int num3 = -1;

	std::cout << "Good sir please give me 3 random numbers" << std::endl;
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;

	if ((num1 < num2) and (num1 < num3))
	{
		std::cout << num1 << std::endl;
	}
	else if ((num2 < num1) and (num2 < num3))
	{
		std::cout << num2 << std::endl;
	}
	else if ((num3 < num1) and (num2 > num3))
	{
		std::cout << num3 << std::endl;
	}
	*/
	/*
	int num = -1;
	std::cout << "give me a number " << std::endl;
	std::cin >> num;
	num = (num % 2);
	std::cout << num << std::endl;
	if(num == 1) 
	{
		std::cout << "your number is odd" << std::endl; 
	}
	else if(num == 0) 
	{
		std::cout << "your number is even" << std::endl; 
	}
	*/
	/*
	int clamp = -1;
		std::cout << "give me a number " << std::endl;
		std::cin >> clamp;
		if (clamp < 15)
		{
			clamp = 15;
			std::cout << clamp << std::endl;
		}
		else if (clamp > 30)
		{
			clamp = 30;
			std::cout << clamp << std::endl;
		}
		else
		{
			std::cout << clamp << std::endl;
		}
		*/





int userscore = 0;
int dinoscore = 0;
int dinostrength = 4;
int userstrength = -1;
int dinopaper = 1;
int userpaper = -1;
int dinobattle = 2;
int userbattle = -1;



std::cout << "How would you rate your strength from 1 to 10?" << std::endl;
std::cin >> userstrength;
if (dinostrength > userstrength)
{
	dinoscore++;
}
else if (userstrength > dinostrength)
{
	userscore++;
}
std::cout << "which of the following did you take into battle? (1 Rock, 2 Paper, 3 Scissors)" << std::endl;



std::cout << "how many battles have you fought" << std::endl;
std::cin >> userbattle;
if (dinobattle > userbattle)
{
	dinoscore++;
}
else if (dinobattle < userbattle)
{
	userscore++;
}
std::cout << "Did you get enough sleep?" << std::endl;



std::cout << "How muc Vitamin C do you get everyday?" << std::endl;














	return 0;
}