#include "lists.h"

/**
* print_list - print by moving through elements of list_t
* @h: list_t input
*
* Return: node count
*/

size_t print_list(const list_t *h)
{
	size_t count;

	if (!h)
		return (0);

	for (count = 0; h; count++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
