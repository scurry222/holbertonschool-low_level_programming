#include "function_pointers.h"

/**
* int_index - search for an integer
* @array: integer array to pass
* @size: number of elements in array
* @cmp: pointer to function that compares values
*
* Return: iterator if success, -1 if failure or not comparable
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) == 1)
			return (i);

	return (-1);
}
