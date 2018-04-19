#include "stdafx.h"
#include "LetsMakeaDeal.h"
#include <random>
#include <vector>


using namespace std;


LetsMakeaDeal::LetsMakeaDeal(int const doors, int const reveal_doors, string const decision) :
	dTotal{ doors }, dRevealed(reveal_doors)
{
	
	dec_collection_doors_.assign(doors,prize::goat);
	st_collection_doors_.(doors,doorState::close); 
		runGame(); 


}

void LetsMakeaDeal::runGame()
{
	
	

	//std::vector<bool> doors = { };

}


//To avoid bugs and pass around program arguments - c++ programming language pg 245


int LetsMakeaDeal::makeDoors(int a)
{
	
	return 0; 
}




int LetsMakeaDeal::makeRandom(int const max)
{
	static random_device random; 
	static mt19937 sGenertor {42};
	uniform_int_distribution<int> const dis(0, (max -1));

	return dis(sGenertor);

}
