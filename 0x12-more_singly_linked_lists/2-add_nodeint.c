#include "lists.h"

/**
* add_nodeint - add an integer node to list
* @head: double pointer to first element
* @n: int to fill node
*
* Return: new node on success, NULL if fail
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
