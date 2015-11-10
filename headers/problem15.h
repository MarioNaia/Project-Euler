#ifndef PROBLEM_15_H
#define PROBLEM_15_H

//Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down,
// there are exactly 6 routes to the bottom right corner.
//How many such routes are there through a 20×20 grid?

namespace problem15 {
    long choose(long n, long k);
    long calculateNumRoutes(int gridSize);
    long getAnswer();
}


#endif 
