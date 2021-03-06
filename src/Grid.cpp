#include "../include/pch.h"
#include "../include/Grid.h"
#include "../include/Cell.h"
#include <vector> 
#include <iostream>
#include <sstream>

using namespace std;

bool Grid::random_bool() {
	static const int shift = static_cast<int>(std::log2(RAND_MAX));
	return (rand() >> shift) & 1;
}

Grid::Grid(int Height, int Width) {
	Grid::Height = Height;
	Grid::Width = Width;
	for (int x = 0; x < Width; x++) {
		vector<Cell> row;
		for (int y = 0; y < Height; y++) {
			row.push_back(Cell(random_bool()));
		}
		matrix.push_back(row);
	}
}

Cell Grid::GetCell(int x, int y)
{
	return matrix[x][y];
}


vector<Cell> Grid::GetAdjacentCells(int x, int y){
	vector<Cell> AliveCells;
	for (int x_distance = 0; x_distance < 2; x_distance++) {
		for (int y_distance = 0; y_distance < 2; y_distance++) {
			if (GetCell(x + x_distance, y + y_distance).CurrentState) {
				AliveCells.push_back(GetCell(x + x_distance, y + y_distance));
			}
		}
	}
	return AliveCells;
};