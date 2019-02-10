#pragma once
#include <vector> 

class Cell {
	public:
		bool NewState, CurrentState;
		Cell(bool InitialState);
		void Calculate(vector<Cell> adjacent);
		void Update();
};