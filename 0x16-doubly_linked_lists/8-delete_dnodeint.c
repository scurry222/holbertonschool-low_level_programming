#include "lists.h"

/**
* delete_dnodeint_at_index - delete node in list at index
* @head: pointer to nodes in the list
* @index: position to remove node
*
* Return: 1 on success, -1 if failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr = NULL;
	dlistint_t *temp = NULL;

	if (!*head || !head)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		(*head)->prev = NULL;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
		temp = temp->next;

	curr = temp->next;
	temp->next = curr->next;
	curr->next->prev = temp;
	free(curr);

	return (1);
}
