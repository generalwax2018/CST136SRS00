#include "stdafx.h"
#include "LetsMakeaDeal.h"
#include <random>
#include <vector>
#include <cassert>

using namespace std;

LetsMakeaDeal::LetsMakeaDeal(int const doors, int const reveal_doors, string const decision) :
	dTotal{ doors }, dRevealed(reveal_doors)
{
	if( decision.compare("stay") == 0)
	{
		dDecision = decision::stay; 

	}
	else
	{
		dDecision = decision::switch_door; 
	}



	dec_collection_doors_.assign(doors, prize::goat);
	st_collection_doors_.assign(doors, doorState::close);
	runGame();

}

void LetsMakeaDeal::runGame()
{
	carPlacement();
	randomOpen();
	doorDecision();

	if( dDecision == decision::switch_door)
	{
		doorDecision(); 
	}

	if (dec_collection_doors_[dGuess] == prize::car)
	{
		gameresult::won; 

	}
	else
	{
		gameresult::lost; 
	}



}
void LetsMakeaDeal::randomOpen()
{
	
	auto check = makeRandom();
	auto i = dRevealed;

	while (i < 0)
	{

		while (dec_collection_doors_[check] == prize::car || st_collection_doors_[check] != doorState::open || dGuess == check)
		{
			check = makeRandom();

		}

		st_collection_doors_[check] = doorState::open;
		--i; 

	}
}




void LetsMakeaDeal::doorDecision()
{

	auto check = makeRandom();

	if (dGuess < 0)
	{
		dGuess = check;
	}
	else
	{
		while( st_collection_doors_[check] == doorState::open || dGuess == check)
		{
			check = makeRandom();

		}

		dGuess = check; 
	}
	
}




void LetsMakeaDeal::carPlacement()
{
	dec_collection_doors_[makeRandom()] = prize::car;
}

void LetsMakeaDeal::guessPlacement()
{
	dGuess = makeRandom();

}



int LetsMakeaDeal::makeRandom()
{

	static random_device random;
	static mt19937 sGenertor{};
	uniform_int_distribution<int> const dis(0, (dTotal - 1));

	return dis(sGenertor);

}
