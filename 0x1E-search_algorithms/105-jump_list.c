#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: sorted linked list to search
 * @size: size of the linked list
 * @value: value to find in linked list
 * Return: position of value on success, -1 on failure
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp = list;
	listint_t *step = NULL;
	listint_t *prev = NULL;
	size_t jump;

	if (!list || size == 0)
		return (NULL);

	jump = sqrt(size);

	while (temp)
	{
		prev = temp;
		while (temp->next && temp->index < jump)
			temp = temp->next;
		printf("Value checked at index [%lu] = [%d]\n",
			temp->index, temp->n);
		if (temp->n >= value || temp->index == size - 1)
		{
			step = temp;
			printf("Value found between indexes [%lu] and [%lu]\n",
			       prev->index, step->index);
			break;
		}
		jump += sqrt(size);
	}
	while (prev && prev->index <= step->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
