#include "sort.h"

/**
* heapify - sort subtree in heap order
* @array: array to sort
* @end: pointer to last element in heap
* @start: pointer to first element in heap
* @size: size of the array
*
* Return: void
*/

void heapify(int *array, size_t end, size_t start, size_t size)
{
	size_t left, right, max;
	int buf;

	max = start;
	left = (start * 2) + 1;
	right = (start * 2) + 2;

	if (left < end && array[left] > array[max])
		max = left;

	if (right < end && array[right] > array[max])
		max = right;

	if (max != start)
	{
		buf = array[start];
		array[start] = array[max];
		array[max] = buf;
		print_array(array, size);
		heapify(array, end, max, size);
	}
}

/**
* heap_sort - sorts an array using heap sort method
* @array: array of ints to sort
* @size: size of the array
*
* Return: void
*/
void heap_sort(int *array, size_t size)
{
	int i;
	int buf;

	if (size < 2)
		return;

	for (i = size / 2 - 1; i >= 0; i--)
		heapify(array, size, (size_t)i, size);

	for (i = size - 1; i >= 0; i--)
	{
		buf = array[i];
		array[i] = array[0];
		array[0] = buf;
		if (i != 0)
			print_array(array, size);
		heapify(array, (size_t)i, 0, size);
	}
}
