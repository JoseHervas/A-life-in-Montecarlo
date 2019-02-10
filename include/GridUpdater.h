#pragma once
#include "Cell.h"
#include "Grid.h"
#include <vector> 

class GridUpdater {
	public:
		int time;
		Grid universe;
		GridUpdater();
		void Move1(Grid universe);
};