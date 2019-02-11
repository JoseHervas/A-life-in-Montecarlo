#include "../include/pch.h"
#include "../include/Cell.h"
#include "../include/Grid.h"
#include "../include/GridUpdater.h"
#include <vector> 
#include <iostream>
#include <sstream>

void printGrid(std::vector<vector<Cell>> const &input)
{
	for (int i = 0; i < input.size(); i++) {
		for (int j = 0; j < input[i].size(); j++) {
			std::cout << input[i][j].CurrentState << ' ';
		}
		std::cout << ' ' << std::endl;
	}
}

int main()
{
	GridUpdater Updater; //Create one updater for all universes
	Grid firstUniverse(10, 10); //Create one example of universe
	std::cout << "Time = " + std::to_string(Updater.time) << std::endl;
	printGrid(firstUniverse.matrix);
	firstUniverse = Updater.Move1(firstUniverse); //Move 1 turn in time
    std::cout << "Time = " + std::to_string(Updater.time)<< std::endl;
	printGrid(firstUniverse.matrix);
}