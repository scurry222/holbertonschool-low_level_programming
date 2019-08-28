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
	int jump = sqrt(size), bot = 0, top = bot + jump;
	int i = 0, s = 0;

	if (!array)
		return (-1);

	s = (int)size;

	while (bot < s)
	{
		printf("Value checked array[%d] = [%d]\n", bot, array[bot]);
		if (top < s)
		{
			if (array[bot] <= value && array[top] >= value)
			{
				printf("Value found between indexes [%d] and [%d]\n", bot, top);
				break;
			}
		}
		else
		{
			if (array[bot] <= value)
			{
				printf("Value found between indexes [%d] and [%d]\n", bot, top);
				break;
			}
		}
		bot = top;
		top = bot + jump;
	}
	for (i = bot; bot <= top; i++)
	{
		if (top >= s)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
