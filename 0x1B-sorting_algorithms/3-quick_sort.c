#include "sort.h"

/**
* quick_sort - break up array into partitions and sort
* @array: array to sort
* @size: size of the array
*/

void quick_sort(int *array, size_t size)
{
	ssize_t lo = 0;

	sort_recurse(array, lo, (size - 1), size);
}

/**
* sort_recurse - create pivot point and 2 sections on either side
* @array: array to sort
* @lo: beginning of section
* @hi: end of section
* @size: size of the array
*
* Return: void
*/

void sort_recurse(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t pivot = 0;

	if (lo < hi)
	{
		pivot = partition(array, lo, hi, size);
		sort_recurse(array, lo, (pivot - 1), size);
		sort_recurse(array, (pivot + 1), hi, size);
	}
}

/**
* partition - sort the section in array
* @array: array to sort
* @lo: beginning of section
* @hi: end of section
* @size: size of the array
*
* Return: next section
*/

ssize_t partition(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t i, j = lo - 1;

	for (i = lo; i <= (hi - 1); i++)
	{
		if (array[i] < array[hi])
		{
			j++;
			if (i != j)
			{
				swap_int(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[hi] < array[j + 1])
	{
		swap_int(&array[hi], &array[j + 1]);
		print_array(array, size);
	}
	return (j + 1);
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
