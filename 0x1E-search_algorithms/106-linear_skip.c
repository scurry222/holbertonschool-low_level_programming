#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: sorted singly linked list to search
 * @value: value to find in list
 * Return: position of value on success, -1 on failure
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp, *jump;

	if (!list)
		return (NULL);

	jump = list->express;
	temp = list;

	while (jump)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			jump->index, jump->n);
		if (jump->n >= value)
			break;
		temp = jump;
		if (!jump->express)
		{
			while (jump->next)
				jump = jump->next;
			break;
		}
		jump = jump->express;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		temp->index, jump->index);
	while (temp)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
