#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: sorted array to search
 * @size: size of the array
 * @value: value to find in array
 * Return: position of value on success, -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int bot = 0, mid = size / 2, top = size - 1;
	int i;

	if (!array)
		return (-1);

	while (bot <= top)
	{
		printf("Searching in array:");
		for (i = bot; i < top; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (bot + top) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			top = mid - 1;
		else
			bot = mid + 1;
	}
	return (-1);
}
