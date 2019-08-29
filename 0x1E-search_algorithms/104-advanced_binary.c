#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * recursive_binary - use recursion to do a binary search
 * @array: sorted array to search
 * @lo: bottom section of array
 * @hi: top section of array
 * @value: value to find in array
 * Return: position of value on success, -1 on failure
 */
int recursive_binary(int *array, size_t lo, size_t hi, int value)
{
	int mid = 0;
	size_t i;

	printf("Searching in array: ");
	for (i = lo; i < hi; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	mid = (lo + hi) / 2;
	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	else if (hi == lo)
		return (-1);
	else if (array[mid] >= value)
		return (recursive_binary(array, lo, mid, value));
	else if (array[mid] < value)
		return (recursive_binary(array, mid + 1, hi, value));
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * recursion
 * using the Binary search algorithm
 * @array: sorted array to search
 * @size: size of the array
 * @value: value to find in array
 * Return: position of value on success, -1 on failure
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (recursive_binary(array, 0, size - 1, value));
}
