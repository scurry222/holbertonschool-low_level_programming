#include "lists.h"

/**
* listint_len - count amount of elements in linked list
* @h: pointer to listint_t head
*
* Return: index on success, 0 if fail
*/

size_t listint_len(const listint_t *h)
{
	size_t i;

	if (!h)
		return (0);

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}
