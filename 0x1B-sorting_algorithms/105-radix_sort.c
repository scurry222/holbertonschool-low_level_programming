#include "sort.h"

/**
 * LSD_sort - sort by LSD
 * @array: array to sort
 * @size: size of the array
 * @lsd: least significant digit
 */
void LSD_sort(int *array, size_t size, size_t lsd)
{
	int bucket[10] = {0}, *dump, l, k;
	size_t i, j;

	dump = malloc(sizeof(int) * size);

	for (i = 0; i < size; i++)
		bucket[(array[i] / lsd) % 10]++;

	for (l = 1; l < 10; l++)
		bucket[l] += bucket[l - 1];

	for (k = size - 1; k >= 0; k--)
	{
		dump[bucket[(array[k] / lsd) % 10] - 1] = array[k];
		bucket[(array[k] / lsd) % 10]--;
	}

	for (j = 0; j < size; j++)
		array[j] = dump[j];

	free(dump);
}

/**
 * radix_sort - implementation of radix sort
 * @array: array of ints to sort
 * @size: size of the array
 */
void radix_sort(int *array, size_t size)
{
	int max = 0;
	size_t i, lsd;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
		if (array[i] > max)
			max = array[i];

	for (lsd = 1; max / lsd > 0; lsd *= 10)
	{
		LSD_sort(array, size, lsd);
		print_array(array, size);
	}
}

