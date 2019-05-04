#include "lists.h"

/**
* insert_dnodeint_at_index - insert a new node in list at position index
* @h: double pointer to nodes in the list
* @idx: index to insert node at
* @n: number to fill into new node
*
* Return: new node at postion on success, NULL on failure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp = NULL;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !h)
		return (NULL);

	new->n = n;
	if (!*h)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; temp->next && i <= idx; i++)
	{
		temp = temp->next;

		if (!temp)
			return (NULL);
		if (i == idx - 1)
		{
			new->next = temp->next;
			new->prev = temp->prev;
			temp->prev->next = new;
			temp->next->prev = new;
			return (new);
		}
	}
	if (!temp->next)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
