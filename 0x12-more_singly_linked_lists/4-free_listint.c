#include "lists.h"

/**
* free_listint - free list
* @head: pointer to first element
*
* Return: void
*/

void free_listint(listint_t *head)
{
	if (!head)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}
