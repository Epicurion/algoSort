#include "algoSorts.h"

int selectionSort(int *list, int *end) {
	if (list >= end) return 0;
	int *max = list;
	for (int *i = list + 1; i <= end; i++) {
		if (*i > *max) {
			max = i;
		}
	}
	swap(max, end);
	return 1 + selectionSort(list, end - 1);
}
