#include "lists.h"

/**
* sum_listint - add elements of linked list
* @head: pointer to first element
*
* Return: sum of all ints
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
