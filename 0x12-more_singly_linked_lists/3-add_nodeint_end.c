#include "lists.h"

/**
* add_nodeint_end - add node to the end of the list
* @head: double pointer to first element of list
* @n: int to store in new node
*
* Return: new node on success, NULL if fail
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *prev;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;

	else
	{
		prev = *head;
		while (prev->next != NULL)
			prev = prev->next;
		prev->next = new;
	}

	return (new);
}
