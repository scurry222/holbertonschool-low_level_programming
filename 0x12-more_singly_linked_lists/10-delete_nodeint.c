#include "lists.h"

/**
* delete_nodeint_at_index - delete node at given position
* @head: double pointer to first element of list
* @index: position to delete node
*
* Return: 1 on success, -1 on failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *curr = NULL;
	unsigned int i;

	if (!*head)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp && i < index - 1; i++)
		temp = temp->next;

	if (!temp || !temp->next)
		return (-1);

	curr = temp->next;

	temp->next = curr->next;

	free(curr);

	return (1);
}
