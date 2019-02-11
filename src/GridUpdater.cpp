#include "../include/pch.h"
#include "../include/Cell.h"
#include "../include/Grid.h"
#include "../include/GridUpdater.h"
#include <vector> 
#include <iostream>
#include <sstream>

using namespace std;

Grid GridUpdater::Move1(Grid universe){
	for (int x = 0; x < universe.Width -1; x++) {
		for (int y = 0; y < universe.Height -1; y++) {
			Cell currCell = universe.GetCell(x, y);
			vector<Cell> adjacent = universe.GetAdjacentCells(x, y);
			currCell.Calculate(adjacent);
			currCell.Update();
			universe.matrix[x][y] = currCell;
		}
	}
	time++;
	return universe;
}

GridUpdater::GridUpdater() {
	time = 0;
}