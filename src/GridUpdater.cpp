#include "../include/pch.h"
#include "../include/Cell.h"
#include "../include/Grid.h"
#include "../include/GridUpdater.h"
#include <vector> 

using namespace std;

GridUpdater::GridUpdater(){
	time = 0;
}

void GridUpdater::Move1(Grid universe){
	for (int x = 0; x < universe.Width; x++) {
		for (int y = 0; y < universe.Height; y++) {
			Cell currCell = universe.GetCell(x, y);
			vector<Cell> adjacent = universe.GetAdjacentCells(x, y);
			currCell.Calculate(adjacent);
			currCell.Update();
		}
	}
	time++;
}
