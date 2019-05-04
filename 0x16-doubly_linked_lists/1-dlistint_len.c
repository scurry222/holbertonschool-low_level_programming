#include "lists.h"

/**
* dlistint_len - return length of the linked list
* @h: pointer to the nodes of the list
*
* Return: number of nodes in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *) h;
	int i;

	for (i = 0; temp; i++)
		temp = temp->next;

	return (i);
}
