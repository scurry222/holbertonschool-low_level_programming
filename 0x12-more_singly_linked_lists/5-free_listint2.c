#include "lists.h"

/**
* free_listint2 - free list, given doouble pointer
* @head: double pointer to first element in list
*
* Return: void
*/

void free_listint2(listint_t **head)
{
	if (!head && !*head)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}

	*head = NULL;
}
