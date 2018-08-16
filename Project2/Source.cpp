#include <iostream>

int main() 
{
	// printing with variables 
	int age = 19;

	std::cout << "here is my age " << age << std::endl;

	int userage = -1;

	//user input 
	std::cout << "What is your age?" << std::endl;
	std::cin >> userage;
	std::cout << "your age is " << userage << std::endl;

	// combining 2 values with variables 
	int value1 = 20;
	int value2 = 50;
	int value3 = value1 + value2;
	std::cout << value3 << std::endl;

	// changing values 
	int numbera = 5;
	numbera = 9;
	numbera = 11;
	numbera = 14;

	std::cout << "A) " << numbera << std::endl;

	int numberb = 10;
	numberb = 9;

	int thingb = 55;
	thingb = 22;
	std::cout << "B) " << numberb << std::endl;

	int numberc = 3;
	numberc = 7;
	numberc = 1;

	int somethingc = 23;
	somethingc = 21;

	numberc = somethingc;

	std::cout << "C) " << numberc << std::endl;

	int numberd = 1;
	int somethingd = 3;

	numberd = somethingd;

	std::cout << "D) " << somethingd << std::endl;

	//fun times with math

	int x = 13;

	x = x / 2;

	std::cout << "E) " << x << std::endl;

	float y = 13;

	y = y / 2;

	std::cout << "F) " << y << std::endl;

	// even more fun with math 

	float degcelsius = 78.0;
	float degfahrenheit = 0.0;

	degfahrenheit = ((degcelsius * 9) / 5 ) + 32.0;

	std::cout << "The Current Tempurature is " << degfahrenheit << " Degrees Fahrenheit, or " << degcelsius << " Degrees Celsius" <<  std::endl;

	std::cout << "How hot is it for in in Celcius? " << std::endl;
	std::cin >> degcelsius;
	degfahrenheit = ((degcelsius * 9) / 5) + 32.0;
	std::cout << "Did you know that is " << degfahrenheit << " degrees in fahrenheit?" << std::endl;

	//rectangle fun
	
	float rectwidth = 0.0;
	float rectheight = 0.0;
	float rectlength = 0.0;
	float rectarea = 0.0;

	std::cout << "What is the Width? " << std::endl;
	std::cin >> rectwidth;
	std::cout << "What is the Height? " << std::endl;
	std::cin >> rectheight;
	std::cout << "What is the Length? " << std::endl;
	std::cin >> rectlength;

	rectarea = rectwidth * rectheight * rectlength;
	std::cout << "the area of the rectangle is " << rectarea << std::endl;

	//more number fun 

	float a, b, c, d, e;
	float avg;
	avg = a = b = c = d = e = 0.0;

	std::cout << "Give me five numbers any numbers " << std::endl;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;

	avg = (a + b + c + d + e) / 5;

	std::cout << "The average of the numbers you gave me is " << avg << std::endl;

	//number swap

	int swap1 = 0;
	int swap2 = 0;
	std::cout << "give me a x " << std::endl;
	std::cin >> x;
	std::cout << "give me a y " << std::endl;
	std::cin >> y;
	swap1 = x;
	swap2 = y;
	x = swap2;
	y = swap1;
	std::cout << "your x is " << swap1 << std::endl;
	std::cout << "your y is " << swap2 << std::endl;








	return 0;
}