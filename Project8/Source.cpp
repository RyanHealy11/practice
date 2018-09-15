#include <iostream>
#include <fstream>
#include <string>
int main()
{
	std::fstream file;
	//file.open("test print.txt", std::ios::out);
	//if (!file.is_open())
	//{
	//	std::cout << "error opening file" << std::endl;
	//	return -1;
	//}

	//file << "interesting" << std::endl;
	//file.close();

	/*file.open("famousLines.txt", std::ios::out);
	if (!file.is_open())
	{
		std::cout << "error opening file" << std::endl;
		return -1;
	}
	file << "I`ll be back with weapons" << std::endl;
	file << "Eleventy billion dollars" << std::endl;
	file << "The holy light will save us" << std::endl;
	file << "Four score and seven years ago" << std::endl;
	file.close();

	file.open("commonAnimeTropes.txt", std::ios::out);
	if (!file.is_open())
	{
		std::cout << "error opening file" << std::endl;
		return -1;
	}
	file << "Office lady" << std::endl;
	file << "Magical girl" << std::endl;
	file << "Kendo Team Captain" << std::endl;
	file.close();
	
*/std::string name;
	std::cout << "Please, enter your full name: ";
	std::getline(std::cin, name);
	std::cout << "Hello, " << name << "!\n";
	
	std::string filename;

	std::getline(std::cin, filename);
	
	file.open("famousLines.txt", std::ios::in);
	if (!file.is_open())
	{
		std::cout << "error opening file" << std::endl;
		return -1;
	}

	std::string buffer;
	while (std::getline(file, buffer))  // iterates until error or EOF
	{
		// print the line after it is buffered
		std::cout << buffer << std::endl;
	}


	file.close();
	return 0;
}