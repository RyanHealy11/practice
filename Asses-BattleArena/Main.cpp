#include <iostream>
#include "character.h"
#include <ctime>

int swap( hero team[10]);
int main() 
{
	srand(time(0));

	hero IronMan{ "Iron Man", 100, 500 };
	hero SpiderMan{ "Spider Man", 100 , 500};
	hero Thor{ "Thor", 100, 500 };
	hero Hulk{ "Hulk", 1000, 1000};
	hero CaptainAmerica{"Captain America",100,500};
	hero AntMan{"Antman",100,500};
	hero DocStrange{"Doctor Strange",100,500};
	hero BlackPanther{"Black Panther",100,500};
	hero Vision{"Vision",100,500};
	hero CapMarvel{"Captain Marvel", 100, 500};
	
	hero marvel[10]{IronMan,SpiderMan,Thor,Hulk,CaptainAmerica,AntMan,DocStrange,BlackPanther,Vision,CapMarvel };

	hero SuperMan{"SuperMan",1000,1000};
	hero Flash{"The Flash",100,500};
	hero BatMan{"BatMan",100, 500};
	hero WonderWoman{"Wonder Woman",100, 500};
	hero GreenLantern{"Green Lantern",100,500};
	hero AquaMan{"AquaMan", 100,500};
	hero Martian{"Martain Manhunter",100,500};
	hero Cyborg{"Cyborg",100,500};
	hero Shazam{"Shazam",100,500};
	hero RedTornado{"RedTornado",100,500};

	hero DC[10]{ SuperMan ,Flash ,BatMan ,WonderWoman ,GreenLantern ,AquaMan ,Martian ,Cyborg ,Shazam ,RedTornado };

	int MarvelAlive = 10;
	int DCAlive = 10;
	int currentMarvel = 0;
	int currentDC = 0;
	int target = 0;
	int damage = 0;
	
	swap(DC);
	swap(marvel);

	do 
	{
		if (!marvel[currentMarvel].health == 0)
		{
			target = (rand() % DCAlive);
			damage = (rand() % (marvel[currentMarvel].attack));
			DC[target].health -= damage;
			/*std::cout << DC[target].name << std::endl;*/
			std::cout << marvel[currentMarvel].name << " attacks " << DC[target].name << " for " << damage << " damage" << std::endl;

			if (DC[target].health <= 0)
			{
				--DCAlive;
				DC[target].health = 0;
				std::cout << DC[target].name << " now has " << DC[target].health << " health and has fallen" << std::endl;
				std::cout << "" << std::endl;
				swap(DC);
			}
			else
			{
				std::cout << DC[target].name << " now has " << DC[target].health << " health" << std::endl;
				std::cout << "" << std::endl;

			}
		}
		++currentMarvel;

		if (!DC[currentDC].health == 0) 
		{
			target = (rand() % MarvelAlive);
			damage = (rand() % (DC[currentDC].attack));
			marvel[target].health -= damage;
			std::cout << DC[currentDC].name << " attacks " << marvel[target].name << " for " << damage << " damage" << std::endl;

			if (marvel[target].health <= 0)
			{
				--MarvelAlive;
				marvel[target].health = 0;
				std::cout << marvel[target].name << " now has " << marvel[target].health << " health and has fallen" << std::endl;
				std::cout << "" << std::endl;
				swap(marvel);
			}
			else
			{
				std::cout << marvel[target].name << " now has " << marvel[target].health << " health" << std::endl;
				std::cout << "" << std::endl;
			}
			
		}
		++currentDC;

		if (currentMarvel == 10) 
		{
			currentMarvel = 0;
		}
		if (currentDC == 10) 
		{
			currentDC = 0;
		}
	
	} while (MarvelAlive and DCAlive != 0);


	if (DCAlive == 0) 
	{
		std::cout << "The Marvel squad Triumphs over the DC squad" << std::endl;
	}
	else if (MarvelAlive == 0)
	{
		std::cout << "The DC squad Triuphs over the marvel squad" << std::endl;
	}


	

	


	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	
	return 0;
}





int swap(hero team[10])
{
int correct = 0;
//std::cout << "Test swap" << std::endl;
	do
	{
		hero temp;
		correct = 0;
		for (int i = 0; i < 10; ++i)
		{
			if (team[i].health < team[i + 1].health)
			{
				temp = team[i + 1];
				team[i + 1] = team[i];
				team[i] = temp;
				
			}
			else if (team[i].health >= team[i + 1].health)
			{
				++correct;
			}
		}
	} while (correct != 10);
	
	return 0;
}