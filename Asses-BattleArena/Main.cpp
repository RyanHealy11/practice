#include <iostream>
#include "character.h"
#include <ctime>

int swap( hero team[10]);
int main() 
{
	srand(time(0));

	hero IronMan{ "Iron Man", 505, 135 };
	hero SpiderMan{ "Spider Man", 60 , 225};
	hero Thor{ "Thor", 100, 2000 };
	hero Hulk{ "Hulk", 65, 1250};
	hero CaptainAmerica{"Captain America",50,150};
	hero AntMan{"Antman",55,125};
	hero DocStrange{"Doctor Strange",25,1900};
	hero BlackPanther{"Black Panther",50,225};
	hero Vision{"Vision",250,500};
	hero CapMarvel{"Captain Marvel", 45, 750};
	
	hero marvel[10]{IronMan,SpiderMan,Thor,Hulk,CaptainAmerica,AntMan,DocStrange,BlackPanther,Vision,CapMarvel };

	hero SuperMan{"SuperMan",500,1000};
	hero Flash{"The Flash",25,2500};
	hero BatMan{"BatMan",5000, 50};
	hero WonderWoman{"Wonder Woman",50, 1500};
	hero GreenLantern{"Green Lantern",25,100};
	hero AquaMan{"AquaMan", 70,150};
	hero Martian{"Martain Manhunter",45,700};
	hero Cyborg{"Cyborg",40,115};
	hero Shazam{"Shazam",85,1800};
	hero RedTornado{"RedTornado",75,200};

	hero DC[10]{ SuperMan ,Flash ,BatMan ,WonderWoman ,GreenLantern ,AquaMan ,Martian ,Cyborg ,Shazam ,RedTornado };




	
	


	
	int target = (rand() % 10);
	int damage = (rand () %(marvel[0].attack));
	DC[target].health -= damage;
	std::cout << DC[target].name << std::endl;
	
	if (DC[target].health < 0) 
	{
		DC[target].health = 0;
	}
	std::cout << DC[target].health << std::endl;


	

	swap( marvel);
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
	std::cout << "stuff isnt currently broken whoooooooo!!!!!" << std::endl;
	
	return 0;
}





int swap(hero team[10])
{
int correct = 0;
std::cout << "Test swap" << std::endl;
	do
	{
		correct = 0;
		for (int i = 0; i < 40; ++i)
		{
			if (team[i].health < team[i + 1].health)
			{
				hero temp = team[i + 1];
				team[i + 1] = team[i];
				team[i] = temp;
				
			}
			else if (team[i].health > team[i + 1].health)
			{
				++correct;
			}
		}
	} while (correct >= 90);
	std::cout << team[0].health << std::endl;
	std::cout << team[1].health << std::endl;
	std::cout << team[2].health << std::endl;
	std::cout << team[3].health << std::endl;
	std::cout << team[4].health << std::endl;
	std::cout << team[5].health << std::endl;
	std::cout << team[6].health << std::endl;
	std::cout << team[7].health << std::endl;
	std::cout << team[8].health << std::endl;
	std::cout << team[9].health << std::endl;
	return 0;
}