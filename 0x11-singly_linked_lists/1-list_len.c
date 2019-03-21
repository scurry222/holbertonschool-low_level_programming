#include "lists.h"

/**
* list_len - print amount of elements in list_t
* @h: list_t input
*
* Return: node count
*/

size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h; count++)
		h = h->next;

	return (count);
}
