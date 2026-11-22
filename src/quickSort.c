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
