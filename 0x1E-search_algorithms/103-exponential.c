#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search algorithm
 * @array: sorted array to search
 * @size: size of the array
 * @value: value to find in array
 * Return: call to binary search, -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t pos = 1, hi, lo;

	if (!array || size == 0)
		return (-1);
	while (pos < size && array[pos] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		pos = pos * 2;
	}
	lo = pos / 2;
	if (pos >= size)
		hi = size - 1;
	else
		hi = pos;
	printf("Value found between indexes [%lu] and [%lu]\n", lo, hi);
	return (exp_binary(array, value, lo, hi));

}

/**
 * exp_binary - binary search algo modified for exponential algo
 * @array: sorted array to search
 * @value: value to find in array
 * @bot: bottom of section to check
 * @top: top of section to check
 * Return: position of value on success, -1 on failure
 */
int exp_binary(int *array, int value, size_t bot, size_t top)
{
	size_t mid;
	size_t i;

	if (!array)
		return (-1);

	while (bot <= top)
	{
		printf("Searching in array: ");
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
