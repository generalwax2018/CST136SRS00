// MontyHall.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "LetsMakeaDeal.h"
#include <iostream>
#include <sstream>


using namespace std; 


int main(int const argc, char* const argv[])
{

	
	auto gameInstance = 0;
	auto doortoopen = 0;
	auto decision = 0;


	vector<LetsMakeaDeal> gamelist;

	istringstream gameI(argv[1]);
	istringstream numDoors(argv[2]); 
	istringstream doorDecision(argv[3]); 
	


	gameI >> gameInstance;
	numDoors >> doortoopen; 
	doorDecision >> decision; 
	

	while(argv[1] < gameInstance)
	{
		
		LetsMakeaDeal obj(gameInstance, doortoopen, decision);
		obj.runGame();

	}



    return 0;
}

