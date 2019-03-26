#include "lists.h"

/**
* insert_nodeint_at_index - insert a new node at the given position
* @head: double pointer to first element
* @idx: index to insert at
* @n: int to fill
*
* Return: new node on success, NULL if fail
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
