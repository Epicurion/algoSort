//  This stupid sort algorithm choose 2 random items in 
//  a list and swap them while the list is not ordered.
//  It returns the number of steps to order the list.

#include "algoSorts.h"

void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

int ordered(int *list, int size) {
	for (int index = 0; index < size - 1; index++) {
		if (list[index] > list[index + 1]) {
			return 1;
		}
	}
	return 0;
}

int choice(int max) {
	return arc4random_uniform(max);
}

int stupidSort(int *list, int size) {
	int steps = 0;
	while (ordered(list, size)) {
		int a = choice(size);
		int b = choice(size);
		swap(&list[a], &list[b]);
		steps++;
	}
	return steps;
}
