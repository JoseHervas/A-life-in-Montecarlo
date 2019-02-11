#include "../include/pch.h"
#include "../include/Cell.h"
#include <vector> 
#include <iostream>
#include <sstream>

using namespace std;

Cell::Cell(bool InitialState)
{
	CurrentState = InitialState;
}

void Cell::Calculate(vector<Cell> adjacent)
	{
		// All the rules are based on the number of adjacent cells.
		int count = adjacent.size();

		// Less than two or greater than three is always dead.
		if (count < 2 || count > 3) {
			NewState = false;
		}
		else {
			// For live (OldState = true) cells, they are alive. For dead ones,
			// they live only if there is exactly three. 
			NewState = CurrentState || count == 3;
		}
}

void Cell::Update()
{
	CurrentState = NewState;

}

