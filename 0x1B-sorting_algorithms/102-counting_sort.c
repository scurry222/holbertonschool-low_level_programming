#include "sort.h"

/**
 * counting_sort - sorts an array of integers in ascending order using
 *               the Counting sort algorithm
 * @array: Array to sort
 * @size: Size of the array
 */
void counting_sort(int *array, size_t size)
{
	int *store;
	size_t i, j;
	int max = 0;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
		if (array[i] > max)
			max = array[i];

	store = calloc(max + 1, sizeof(int));

	for (i = 0; i < size; i++)
		store[array[i]] += 1;

	for (i = 1; i <= (size_t)max + 1; i++)
		store[i] += store[i - 1];

	print_array(store, max + 1);

	for (i = 0; i <= (size_t)max; i++)
		if (store[i] != store[i + 1] && store[i + 1])
			for (j = store[i + 1] - store[i]; j > 0; j--)
				array[store[i] + j - 1] = i + 1;
	free(store);
}
