#include "main.hpp"
int main()
{
	int result[SIZE] = {0};
	int numbers[NUM_ROWS][NUM_COLS] = {{2, 7, 9, 6, 4},
									   {6, 1, 8, 10, 4},
									   {4, 3, 7, 2, 9},
									   {9, 9, 0, 3, 1},
									   {8, 8, 7, 8, 9},
									   {1, 2, 1, 2, 3}};

	findMaxSum(result, numbers, NUM_ROWS, NUM_COLS);
	cout << "The row values are:";
	for (int i = 0; i < NUM_COLS; i++)
		cout << setw(5) << result[i];
	cout << endl;

	findMaxElm(result, numbers, NUM_ROWS, NUM_COLS);
	cout << "The Max values in the rows are:\n";
	for (int i = 0; i < NUM_ROWS; i++)
		cout << setw(5) << result[i] << endl;

	findMaxVal(result, numbers, NUM_ROWS, NUM_COLS);
	cout << "The row that has the max value ";
	for (int i = 0; i < NUM_COLS; i++)
		cout << setw(5) << result[i];
	cout << endl;
}