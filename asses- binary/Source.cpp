#include <iostream>
#include<fstream>
#include<string>
#include "savedat.h"

int main()
{
	saveData write{ "harry", 0, 500, true, 5000 };
	std::fstream file;
	file.open("savedata.bin", std::ios::out | std::ios::binary);
	if (!file.is_open())
	{
		std::cout << "error opening file" << std::endl;
		return -1;
	}
	file << write.playerName << std::endl;
	file << write.deathCount << std::endl;
	file << write.deepestFloor << std::endl;
	file << write.hasBeenBeatenGame << std::endl;
	file << write.timePlayed << std::endl;

	file.flush();
	file.close();
	
	
	file.open("savedata.bin", std::ios::in | std::ios::binary);
	if (!file.is_open())
	{
		std::cout << "error opening file" << std::endl;
		return -1;
	}
	std::string buffer;
	std::getline(file, buffer);
	std::cout << "Your name is " << buffer << std::endl;
	std::getline(file, buffer);
	std::cout << "You have died " << buffer << " times" << std::endl;
	std::getline(file, buffer);
	std::cout << "Your farthest floor reached is " << buffer << std::endl;
	std::getline(file, buffer);
	std::cout << "Have you beat the game" << buffer << std::endl;
	std::getline(file, buffer);
	std::cout << "You have played for " << buffer << " seconds" << std::endl;
	
	file.flush();
	file.close();

	system("pause");
	return 0;
}