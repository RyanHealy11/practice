#include <iostream>



int main()
{
	
	for(int i = 1; i < 101; ++i)
	{
		
		std::cout << i << std::endl;
	
	}

	for (int y = 100; y >= 1; --y) 
	{
	
		std::cout << y << std::endl;
	
	}
	int year = 1995;
	do 
	{
		std::cout << year << std::endl;
		++year;
	} while (year < 2018);
	int numbersgiven = 0;
	int num1 =  0;
	int num2 = 0;
	int num3 = 0;
	do 
	{
		std::cout << "What are your favorite numbers? " << std::endl;
		std::cin >> num1;
		std::cout << "your first number is " << num1 << std::endl;
		numbersgiven++;


	} while (numbersgiven = 0);
	do
	{
		std::cout << "What is your second number? " << std::endl;
		std::cin >> num2;
		std::cout << "your numbers so far are " << num1 << " " << num2 << std::endl;
		numbersgiven++;


	} while (numbersgiven = 0);
	do
	{
		std::cout << "What is your last faviorite number? " << std::endl;
		std::cin >> num3;
		std::cout << "your favorite numbers are " << num1 << " " << num2 << " " << num3 << std::endl;
		numbersgiven++;


	} while (numbersgiven = 0);


	return 0;
}