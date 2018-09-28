#include <iostream>
#include<fstream>
#include<string>


int main() 
{
	std::fstream file;
	file.open("helloBinary.bin", std::ios::out | std::ios::binary);
	if (!file.is_open())
	{
		std::cout << "error opening file" << std::endl;
		return -1;
	}
	file << "I`ll be back with weapons " << std::endl;
	
	file.flush();
	file.close();

	file.open("helloBinary.bin", std::ios::in | std::ios::binary);
	if (!file.is_open())
	{
		std::cout << "error opening file" << std::endl;
		return -1;
	}
	
	std::string buffer;
	std::getline(file, buffer);

	std::cout << buffer << std::endl;
	
	file.flush();
	file.close();
	system("pause");
	return 0;
}