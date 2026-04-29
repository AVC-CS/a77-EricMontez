#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 10;
const int NUM_ROWS = 6;
const int NUM_COLS = 5;

void findMaxSum(int[], int[][NUM_COLS], int, int);
void findMaxElm(int[], int[][NUM_COLS], int, int);
void findMaxVal(int[], int[][NUM_COLS], int, int);

void findMaxSum(int result[], int num[][NUM_COLS], int rows, int cols)
{
    // TODO: find the row whose sum is the largest, copy that row into result.
    }
    for (int j = 0; j < cols; j++) result[j] = num[maxRow][j];
}

void findMaxElm(int result[], int num[][NUM_COLS], int rows, int cols)
{
    // TODO: for each row, store the maximum element of that row in result[i].
    }
}

void findMaxVal(int result[], int num[][NUM_COLS], int rows, int cols)
{
    // TODO: find the cell (r,c) holding the global maximum value; copy row r.
        }
    }
    for (int j = 0; j < cols; j++) result[j] = num[maxRow][j];
}

#endif
