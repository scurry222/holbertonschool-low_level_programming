#include "holberton.h"
#include <stdlib.h>

/**
* create_array - create a new array in memory of one character
* @size: size of the array
* @c: character replacement
*
* Return: new array on success, null if allocation error
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
