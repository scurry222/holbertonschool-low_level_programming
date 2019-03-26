#include "lists.h"

/**
* print_listint - print elements of a linked list
* @h: pointer to listint_t head
*
* Return: index count on success, 0 if failure
*/

size_t print_listint(const listint_t *h)
{
	size_t i;

	if (!h)
		return (0);

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
