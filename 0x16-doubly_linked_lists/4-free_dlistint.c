#include "lists.h"

/**
* free_dlistint - free elements in the list
* @head: pointer to nodes in the list
*
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
