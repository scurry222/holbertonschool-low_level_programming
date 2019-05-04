#include "lists.h"

/**
* add_dnodeint - add a node to the beginning of the list with info
* @head: double pointer to the nodes in the list
* @n: number to fill into new node
*
* Return: new node, added to list
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
