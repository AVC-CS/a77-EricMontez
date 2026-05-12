#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

const int SIZE = 10;
const int NUM_ROWS = 6;
const int NUM_COLS = 5;

void findMaxSum(int[], int[][NUM_COLS], int, int);
void findMaxElm(int[], int[][NUM_COLS], int, int);
void findMaxVal(int[], int[][NUM_COLS], int, int);

void findMaxSum(int result[], int num[][NUM_COLS], int rows, int cols)
{
    // find the row whose sum is the largest, copy that row into result.
    int maxsum = INT_MIN;
    int maxrow = -1;
    for (int i = 0; i < rows; i++) {
        int total = 0;
        for (int j = 0; j < cols; j++) {
            total += num[i][j];
        }
        if (total > maxsum) {
            maxsum = total;
            maxrow = i;
        }
    }
    for (int i = 0; i < cols; i++) {
        result[i] = num[maxrow][i];
    }
}

void findMaxElm(int result[], int num[][NUM_COLS], int rows, int cols)
{
    // for each row, store the maximum element of that row in result[i].
    for (int i = 0; i < rows; i++) {
        int maxElm = INT_MIN;
        for (int j = 0; j < cols; j++) {
            if (num[i][j] > maxElm) {
                maxElm = num[i][j];
            }
        }
        result[i] = maxElm;
    }
}

void findMaxVal(int result[], int num[][NUM_COLS], int rows, int cols)
{
    // find the row that contains the global maximum value, copy that row into result.
    int globalMax = INT_MIN;
    int maxRow = -1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (num[i][j] > globalMax) {
                globalMax = num[i][j];
                maxRow = i;
            }
        }
    }
    for (int i = 0; i < cols; i++) {
        result[i] = num[maxRow][i];
    }
}

#endif
