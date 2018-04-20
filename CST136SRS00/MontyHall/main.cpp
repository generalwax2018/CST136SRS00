// MontyHall.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "LetsMakeaDeal.h"
#include <iostream>
#include <sstream>


using namespace std; 


int main(int const argc, char* const argv[])
{

	auto doors = 3;
	auto gameInstance = 0;


	auto numberofdoors = istringstream(argv[2]);
	auto doortoopen = istringstream(argv[3]);
	auto decision = istringstream(argv[4]);
	cout << "Number of game instances: " << endl;
	cout << "Number of doors: " << endl; //(default == 3)
	cout << "Number of doors to pre-disclose " << endl; // (default == 1)
	cout << "Switch or Stay: " << endl; //enum for each kcase

	
	vector<LetsMakeaDeal> gamelist; 
	istringstream gameI(argv[1]);

	gameI >> gameInstance; 

	

	while(argv[1] < gameInstance)
	{
		
		LetsMakeaDeal obj(gameInstance, doortoopen, decision);

	}



	

	obj.runGame();



    return 0;
}

