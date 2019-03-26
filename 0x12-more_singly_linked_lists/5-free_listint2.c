#include "lists.h"

/**
* free_listint2 - free list, given doouble pointer
* @head: double pointer to first element in list
*
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head && !*head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
