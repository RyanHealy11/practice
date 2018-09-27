#include <iostream>
#include "character.h"
#include <ctime>

int swap( hero team[10]);
int main() 
{
	srand(time(0));

	hero IronMan{ "Iron Man", 505, 500 };
	hero SpiderMan{ "Spider Man", 60 , 500};
	hero Thor{ "Thor", 100, 2000 };
	hero Hulk{ "Hulk", 1000, 1250};
	hero CaptainAmerica{"Captain America",50,500};
	hero AntMan{"Antman",50,500};
	hero DocStrange{"Doctor Strange",100,1900};
	hero BlackPanther{"Black Panther",50,500};
	hero Vision{"Vision",250,500};
	hero CapMarvel{"Captain Marvel", 200, 750};
	
	hero marvel[10]{IronMan,SpiderMan,Thor,Hulk,CaptainAmerica,AntMan,DocStrange,BlackPanther,Vision,CapMarvel };

	hero SuperMan{"SuperMan",500,1000};
	hero Flash{"The Flash",25,2500};
	hero BatMan{"BatMan",5000, 50};
	hero WonderWoman{"Wonder Woman",50, 1500};
	hero GreenLantern{"Green Lantern",25,500};
	hero AquaMan{"AquaMan", 70,500};
	hero Martian{"Martain Manhunter",45,700};
	hero Cyborg{"Cyborg",40,500};
	hero Shazam{"Shazam",85,1800};
	hero RedTornado{"RedTornado",75,500};

	hero DC[10]{ SuperMan ,Flash ,BatMan ,WonderWoman ,GreenLantern ,AquaMan ,Martian ,Cyborg ,Shazam ,RedTornado };

	int MarvelAlive = 10;
	int DCAlive = 10;
	int bullshit = 0;
	int currentMarvel = 0;
	int currentDC = 0;
	int target = 0;
	int damage = 0;
	do 
	{
		target = (rand() % DCAlive);
		damage = (rand () %(marvel[currentMarvel].attack));
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
		++currentMarvel;

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
		++currentDC;

		if (currentMarvel == (MarvelAlive-1)) 
		{
			currentMarvel = 0;
		}
		if (currentDC == DCAlive) 
		{
			currentDC = 0;
		}

			++bullshit;
			std::cout << "bullshit counter: " << bullshit << std::endl;
	
	} while (MarvelAlive and DCAlive != 0);


	
	


	

	swap(marvel);
	swap(DC);

	/*std::cout << marvel[0].health << std::endl;
	std::cout << marvel[1].health << std::endl;
	std::cout << marvel[2].health << std::endl;
	std::cout << marvel[3].health << std::endl;
	std::cout << marvel[4].health << std::endl;
	std::cout << marvel[5].health << std::endl;
	std::cout << marvel[6].health << std::endl;
	std::cout << marvel[7].health << std::endl;
	std::cout << marvel[8].health << std::endl;
	std::cout << marvel[9].health << std::endl;
		
	std::cout << DC[0].health << std::endl;
	std::cout << DC[1].health << std::endl;
	std::cout << DC[2].health << std::endl;
	std::cout << DC[3].health << std::endl;
	std::cout << DC[4].health << std::endl;
	std::cout << DC[5].health << std::endl;
	std::cout << DC[6].health << std::endl;
	std::cout << DC[7].health << std::endl;
	std::cout << DC[8].health << std::endl;
	std::cout << DC[9].health << std::endl;*/


	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "stuff is currently running whoooooooo!!!!!" << std::endl;
	
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
	/*std::cout << team[0].health << std::endl;
	std::cout << team[1].health << std::endl;
	std::cout << team[2].health << std::endl;
	std::cout << team[3].health << std::endl;
	std::cout << team[4].health << std::endl;
	std::cout << team[5].health << std::endl;
	std::cout << team[6].health << std::endl;
	std::cout << team[7].health << std::endl;
	std::cout << team[8].health << std::endl;
	std::cout << team[9].health << std::endl;*/
	return 0;
}