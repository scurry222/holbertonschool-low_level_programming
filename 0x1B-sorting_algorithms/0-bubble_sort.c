#include "sort.h"

/**
* bubble_sort - iterate through the array and swap numbers
* until it is ordered
* @array: array to be ordered
* @size: size of the array
*
* Return: void
*/

void bubble_sort(int *array, size_t size)
{
	unsigned int i, sorted = 0;

	if (size < 2)
		return;

	while (sorted == 0)
	{
		sorted = 1;
		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_int(&array[i], &array[i + 1]);
				print_array(array, size);
				sorted = 0;
			}
		}
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
