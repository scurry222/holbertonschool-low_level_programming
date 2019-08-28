#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: sorted array to search
 * @size: size of array
 * @value: value to find in array
 * Return: position of value on success, -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	int s = (int)size;

	for (i = 0; i < s; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
