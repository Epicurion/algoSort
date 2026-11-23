#include "algoSorts.h"

int selectionSort(int *list, int *end) {
	if (list >= end) return 0;
	int *min = list;
	for (int *i = list + 1; i < end; i++) {
		if (*i < *min) {
			min = i;
		}
	}
	swap(min, end);
	return 1 + selectionSort(list, end - 1);
}
