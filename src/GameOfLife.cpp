#include "../include/pch.h"
#include "../include/Cell.h"
#include "../include/Grid.h"
#include "../include/GridUpdater.h"
#include <vector> 
#include <iostream>
#include <sstream>

int main()
{
	GridUpdater Updater; //Create one updater for all universes
	Grid firstUniverse(10, 10); //Create one example of universe
	Updater.Move1(firstUniverse); //Move 1 turn in time
    std::cout << "It has passed " + std::to_string(Updater.time) << std::endl;
}