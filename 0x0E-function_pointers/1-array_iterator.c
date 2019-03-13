#include "function_pointers.h"

/**
* array_iterator - execute function on each element of an array
* @array: array of integers to pass
* @size: amount of elements in array
* @action: call to function that needs the element
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	if (size == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
