# A life in Montecarlo
This project contains a basic toolkit to generate random game grids and to simulate iterations following the rules of the popular Game of Life from John Conway.

It also contains tools to print the configuration of each grid and to measure the performance of the iterations on runtime.

## How it works
1. A Cell class contains information about its <strong>current</strong> and <strong>next</strong> states ("live" or "dead" represented by a boolean value on each one). 
The Cell class also encapsulates methods to calculate the NextState based on its neighboring cells, and also one methood to update its current status based on the next one.

2. Grids are represented as matrices of Cell objects initializated with random booleans as CurrentState. The Grid also has methods to find a given cell by its position (x,y coordinates) and to return a vector with its neighboring cells that are alive on a given point in time.

3. A GridUpdater class manages the progress of the time (turns) and encapsulates the logic of the transformations during each iteration.

## Future improvements
The code still needs some improvements in performance. As date of today, the largest matrix generated is around 10 millon cells, with an average time of 145 seconds per iteration.

The time per iteration is directly related to the number of alive cells on the grid on such iteration, and usually decreases as the simulation advances.