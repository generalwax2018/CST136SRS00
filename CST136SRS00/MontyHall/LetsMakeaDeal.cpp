#include "stdafx.h"
#include "LetsMakeaDeal.h"
#include <random>
#include <vector>
#include <iostream>
#include <cassert>


using namespace std;


LetsMakeaDeal::LetsMakeaDeal(int const doors, int const reveal_doors, string const decision):
	dTotal{ doors }, dRevealed(reveal_doors)
{
	
	dec_collection_doors_.assign(doors,prize::goat);
	st_collection_doors_.assign(doors,doorState::close); 
	//runGame(); 


}

void LetsMakeaDeal::runGame(int const argc, char* const argv[])
{


	cout << "Number of game instances: " << endl;
	cout << "Number of doors: " << endl; //(default == 3)
	cout << "Number of doors to pre-disclose " << endl; // (default == 1)
	cout << "Switch or Stay: " << endl; //enum for each kcase

	
	auto doors = 3;
	auto open_doors = 1;
	string strat = "unknown";

	auto games = 0;
	auto fault = false;

	if ((argc - 1 ) / 2 < 2)
	{
		
		fault = true; 

	}
	else
		for (auto i = 1; i < argc: i += 2)
		{
			switch (argv[i][1])
			{
			case 'd':
				{
				istringstream iss(argv[i + 1]);
				iss >> doors;

					if (doors < 3)
					{
						fault = true; 
					}
					break; 
				}
			}
		}


}




int LetsMakeaDeal::makeDoors(int a)
{
	
	return 0; 
}

void LetsMakeaDeal::carPlacement()
{
	dec_collection_doors_[makeRandom(dTotal)] = prize::car; 
}


int LetsMakeaDeal::makeRandom(int const max)
{
	static random_device random; 
	static mt19937 sGenertor {42};
	uniform_int_distribution<int> const dis(0, (max -1));

	return dis(sGenertor);

}
