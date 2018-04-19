#pragma once
#include "stdafx.h"
#include <string>
#include <vector>

using namespace std; 

class LetsMakeaDeal
{
public:
	
	enum class gameresult { won, lost };
	
	LetsMakeaDeal(int const doors, int const reveal_doors, string const decision);
	void runGame(int const argc, char* const argv[]);
	
	
private:
	enum class prize {goat, car};
	enum class decision {stay, switch_door};
	enum class doorState{open, close};

	int const dTotal;
	int const dRevealed;

	
	string const dPrize;
	string const dDecision; 
	string const dState;
	 
	vector<prize> dec_collection_doors_{};
	vector<doorState> st_collection_doors_{}; 

	int makeDoors(int a);
	int makeRandom(int const max);

	void carPlacement();
	 
};

