#pragma once
#include "Cell.h"
#include "Grid.h"
#include <vector> 

class GridUpdater {
	public:
		int time;
		Grid Move1(Grid universe);
		GridUpdater();
};