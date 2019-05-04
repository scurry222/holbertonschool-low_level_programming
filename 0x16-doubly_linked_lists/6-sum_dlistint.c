#include "lists.h"

/**
* sum_dlistint - add all numbers in nodes of list
* @head: pointer to the nodes in the list
*
* Return: sum of numbers
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
