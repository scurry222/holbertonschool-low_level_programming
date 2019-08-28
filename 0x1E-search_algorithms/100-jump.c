#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: sorted arrayto search
 * @size: size of the array
 * @value: value to find in array
 * Return: position of value on success, -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, bot = 0, top;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);
	top = jump;
	while (bot < size)
	{
		printf("Value checked array[%lu] = [%d]\n", bot, array[bot]);
		if (top < size)
		{
			if (array[bot] <= value && array[top] >= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", bot, top);
				break;
			}
		}
		else
		{
			if (array[bot] <= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", bot, top);
				break;
			}
		}
		bot = top;
		top = bot + jump;
	}
	while (bot <= top)
	{
		if (bot == size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", bot, array[bot]);
		if (array[bot] == value)
			return (bot);
		bot++;
	}
	return (-1);
}
