#pragma once
#include "Cell.h"
#include <vector> 

using namespace std;

class Grid {
	public:
		int Height, Width;
		vector<vector<Cell>> matrix;
		Grid(int Height, int Width);
		Cell GetCell(int x, int y);
		vector<Cell> GetAdjacentCells(int x, int y)
	};