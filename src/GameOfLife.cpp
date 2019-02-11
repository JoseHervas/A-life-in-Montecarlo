#include "../include/pch.h"
#include "../include/Cell.h"
#include "../include/Grid.h"
#include "../include/GridUpdater.h"
#include <vector> 
#include <iostream>
#include <sstream>
#include <chrono>
#include <ctime>   

void printGrid(std::vector<vector<Cell>> const &input)
{
	/*Usage: printGrid(firstUniverse.matrix)*/
	for (int i = 0; i < input.size(); i++) {
		for (int j = 0; j < input[i].size(); j++) {
			std::cout << input[i][j].CurrentState << ' ';
		}
		std::cout << ' ' << std::endl;
	}
}

void printPerformance(std::chrono::system_clock::time_point start) {
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished computation at " << std::ctime(&end_time)
		<< "elapsed time: " << elapsed_seconds.count() << "s\n";
}

int main()
{
	GridUpdater Updater; //Create one updater for all universes
	std::cout << "Creating random universe with 10.000.000 cells ..." << std::endl;

	//create one universe
	auto start = std::chrono::system_clock::now();
	Grid firstUniverse(3162, 3162); //Create one example of universe
	//Grid firstUniverse(1000, 1000);
	printPerformance(start);

	//it. 1
	start = std::chrono::system_clock::now();
	std::cout << " " << std::endl;
	std::cout << "Simulating it. number 1" << std::endl;
	firstUniverse = Updater.Move1(firstUniverse); //Move 1 turn in time
	printPerformance(start);

	//it. 2
	start = std::chrono::system_clock::now();
	std::cout << " " << std::endl;
	std::cout << "Simulating it. number 2" << std::endl;
	firstUniverse = Updater.Move1(firstUniverse); //Move 1 turn in time
	printPerformance(start);

	//it. 3
	start = std::chrono::system_clock::now();
	std::cout << " " << std::endl;
	std::cout << "Simulating it. number 3" << std::endl;
	firstUniverse = Updater.Move1(firstUniverse); //Move 1 turn in time
	printPerformance(start);

	//it. 4
	start = std::chrono::system_clock::now();
	std::cout << " " << std::endl;
	std::cout << "Simulating it. number 4" << std::endl;
	firstUniverse = Updater.Move1(firstUniverse); //Move 1 turn in time
	printPerformance(start);

}