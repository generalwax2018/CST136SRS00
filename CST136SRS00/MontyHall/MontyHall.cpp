// MontyHall.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "LetsMakeaDeal.h"
#include <sstream>
#include <iostream>
#include <string>

using namespace std; 


int main(int argc, char **argv)
{


	cout << "Number of game instances: " << endl;
	cout << "Number of doors: " << endl; //(default == 3)
	cout << "Number of doors to pre-disclose " << endl; // (default == 1)
	cout << "Switch or Stay: " << endl; //enum for each kcase


	stringstream os;
	LetsMakeaDeal obj;

	int doors = 0;
	int gameInstances = 0;
	int doors = 0;
	string decision = ""; 



	os << "a";

	os >> gameInstances;

	gameInstances = 5; 




	obj.runGame(); 

    return 0;
}

