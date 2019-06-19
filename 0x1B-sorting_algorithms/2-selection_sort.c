#include "sort.h"

/**
* selection_sort - iterate through the array and swap numbers
* and save the minimum number to put at the beginning
* @array: array to be ordered
* @size: size of the array
*
* Return: void
*/

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, first, curr;

	if (!array || !*array)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		first = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[first])
				first = j;
		}
		curr = array[i];
		array[i] = array[first];
		array[first] = curr;

		if (i != first)
			print_array(array, size);
	}
}
