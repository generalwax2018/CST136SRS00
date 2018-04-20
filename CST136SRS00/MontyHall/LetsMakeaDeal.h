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
	void runGame();
	
	
private:
	enum class prize {goat, car};
	enum class decision {stay, switch_door};
	enum class doorState{open, close};
	
	
	int dGuess{-1};

	int const dTotal;
	int const dRevealed;
	decision dDecision; 
	 
	vector<prize> dec_collection_doors_{};
	vector<doorState> st_collection_doors_{}; 

	int makeRandom();
	
	void randomOpen(); 
	void carPlacement();
	void doorDecision(); 
	 
};

