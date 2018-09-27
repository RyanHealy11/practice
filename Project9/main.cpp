#include <iostream>
#include<fstream>
#include<string>

int addMonster();
int removeMonster();
int viewMonster();
int browseMonster();

struct Monster 
{
	std::string ID;
	std::string monsterName;
	std::string age;
	std::string eyes;
};



int main()
{
	std::cout << "Welcome to monster creature quest. " << std::endl;
	std::cout << "" << std::endl;
	bool exit = false;
	int input;

	do
	{
		std::cout << "what would you like to do? " << std::endl;
		std::cout << "" << std::endl;
		std::cout << "1) Add a monster by ID" << std::endl;
		std::cout << "2) Remove a monster by ID" << std::endl;
		std::cout << "3) View a monster by ID" << std::endl;
		std::cout << "4) Browse monsters" << std::endl;
		std::cout << "5) Exit" << std::endl;

		std::cin >> input;

		if (input == 1) { addMonster(); }
		else if (input == 2) { removeMonster(); }
		else if (input == 3) { viewMonster(); }
		else if (input == 4) { browseMonster(); }
		else if (input == 5) { exit = true; }
		else { std::cout << "" << std::endl; }

	} while (exit == false);






	return 0;
}

int addMonster() 
{
	Monster newmonster{};
	std::cout << "what is the monsters name" << std::endl;
	std::cin >> newmonster.monsterName;
	std::cout << "what is the monsters id " << std::endl;
	std::cin >> newmonster.ID;
	std::cout << "how old is the monster " << std::endl;
	std::cin >> newmonster.age;
	std::cout << "how many eyes does the monster have" << std::endl;
	std::cin >> newmonster.eyes;

	std::fstream file;
	file.open("monsters/" + newmonster.ID + ".bin", std::ios::out | std::ios::binary);
	if (!file.is_open())
	{
		std::cout << "error opening file" << std::endl;
		return -1;
	}
	file << newmonster.ID << std::endl;
	file << newmonster.monsterName << std::endl;
	file << newmonster.age << std::endl;
	file << newmonster.eyes << std::endl;

	file.flush();
	file.close();

	file.open("monsters/ browse.bin", std::ios::app | std::ios::binary);
	if (!file.is_open())
	{
		std::cout << "error opening file" << std::endl;
		return -1;
	}
	file << newmonster.ID << " " << newmonster.monsterName << std::endl;
	
	

	file.flush();
	file.close();

	return 0;
}
int removeMonster()
{
	std::string ID;
	std::cout << "Please enter the ID you would like to remove" << std::endl;
	std::cin >> ID;

	if (remove(("monsters/" + ID + ".bin").c_str()) != 0) 
	{
		std::cout << "failed to delete file" << std::endl;
	}
	else 
	{
		std::cout << "file was deleted succefully" << std::endl;
	}
	return 0;
}
int viewMonster() 
{
	std::string choice;
	std::cout << "what file do you want to veiw" << std::endl;
	std::cin >> choice;
	std::fstream file;
	file.open("monsters/"+ choice +".bin", std::ios::in | std::ios::binary);
	if (!file.is_open())
	{
		std::cout << "error opening file" << std::endl;
		return -1;
	}
	std::string buffer;
	std::getline(file, buffer);
	std::cout << "the monsters ID is " << buffer << std::endl;
	std::getline(file, buffer);
	std::cout << "the monsters name is  " << buffer << std::endl;
	std::getline(file, buffer);
	std::cout << "the monster is " << buffer << " years old"<< std::endl;
	std::getline(file, buffer);
	std::cout << "the monster has " << buffer << " eyes" << std::endl;
	
	/*while (std::getline(file, buffer))
	{
		std::cout << buffer << std::endl;
	}*/
	return 0;
}
int browseMonster() 
{
	std::fstream file;
	file.open("monsters/ browse.bin", std::ios::in | std::ios::binary);
	if (!file.is_open())
	{
		std::cout << "error opening file" << std::endl;
		return -1;
	}
	std::string buffer;


	while (std::getline(file, buffer))
	{
		std::cout << buffer << std::endl;
	}
	return 0;
}



