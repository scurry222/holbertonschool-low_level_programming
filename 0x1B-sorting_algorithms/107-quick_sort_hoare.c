#include "sort.h"

/**
* quick_sort_hoare - use the hoare method to quick sort
* @array: array to sort
* @size: size of the array
*/

void quick_sort_hoare(int *array, size_t size)
{
	if (size < 2)
		return;

	hoare_recurse(array, 0, (int)size - 1, size);
}

/**
* hoare_recurse - create pivot point and 2 sections on either side
* @array: array to sort
* @lo: beginning of section
* @hi: end of section
* @size: size of the array
*
* Return: void
*/

void hoare_recurse(int *array, int lo, int hi, size_t size)
{
	int pivot;

	if (lo < hi)
	{
		pivot = hoare_partition(array, lo, hi, size);
		hoare_recurse(array, lo, pivot - 1, size);
		hoare_recurse(array, pivot, hi, size);
	}
}

/**
* hoare_partition - move at both ends of partition until discrepancy
* @array: array to sort
* @lo: beginning of section
* @hi: end of section
* @size: size of the array
*
* Return: next section
*/

int hoare_partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	size_t i, j;

	i = lo - 1;
	j = hi + 1;
	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);
		do {
			j--;
		} while (array[j] > pivot);
		if (i >= j)
			return (i);
		if (i != j)
		{
			swap_int(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	return (0);
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
