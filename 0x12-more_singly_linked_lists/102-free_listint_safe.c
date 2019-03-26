#include "lists.h"

/**
* free_listint_safe - free list consecutively in memory
* @h: double pointer to first element of list
*
* Return: count of nodes
*/

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int sub;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		sub = *h - (*h)->next;

		if (sub > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;

	return (count);
}
