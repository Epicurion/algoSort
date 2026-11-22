//  This quick sort recursively takes two pointers, a start and an end.
//  The end is the pivot. Then it creates two groups, less and more than the pivot.
//  It returns the number of steps to sort the list.

#include "algoSorts.h"

void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

int quickSort(int *list, int pivot) {
	int steps = 0;
	if (list >= pivot) {
		return 0;
	}
	int wall = list;

	for (int *pointer = list; pointer < pivot; pointer++) {
		if (*pointer <= *pivot) {
			swap(pointer, wall);
			steps++;
		}
	}
	swap(pivot, wall);

	steps += quicksort (list, wall - 1);
	steps += quicksort (wall + 1, pivot);
	return steps;
}
