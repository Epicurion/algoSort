#include "algoSorts.h"

void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

int bubbleSort(int *list, int size) {
	if (size <= 0) return 0;
	for (int *i = list; i < list + size - 1; i++) {
		if (*i > *(i + 1)) {
			swap(i, i + 1);
		}
	}
	return bubbleSort(list, size - 1) + 1;
}
