#include "sort.h"

/**
* shell_sort - use Shell's method to sort
* @array: array to sort
* @size: size of the array
*/

void shell_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, gap = 1;

	if (!array || size < 2)
		return;

	while (gap < size / 3)
		gap = 3 * gap + 1;

	while (gap >= 1)
	{
		for (i = gap; i < size; ++i)
		{
			for (j = i; j >= gap &&
				     (array[j] < array[j - gap]); j -= gap)
				swap_int(&array[j], &array[j - gap]);
		}
		print_array(array, size);
		gap = gap / 3;
	}
}

/**
* swap_int - swap two values at two pointers
* @a: first pointer
* @b: second pointer
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;

}
