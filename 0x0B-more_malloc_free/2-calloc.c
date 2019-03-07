#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of each element, in bytes
 *
 * Return: pointer to array, NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		arr[i] = 0;
		i++;
	}

	return (arr);
}
