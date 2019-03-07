#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: beginning number in array
 * @max: end number in array
 *
 * Return: pointer to int array, NULL on failure
 */

int *array_range(int min, int max)
{
	int *intarr;
	int i = 0, n;

	if (min > max)
		return (NULL);

	intarr = malloc(((max - min) + 1) * sizeof(int));

	if (intarr == NULL)
		return (NULL);

	for (n = min; n <= max; n++)
	{
		intarr[i] = n;
		i++;
	}

	return (intarr);
}
