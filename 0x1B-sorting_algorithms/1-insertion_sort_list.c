#include "sort.h"

/**
 * listlen - returns the length of a linked list
 * @h: pointer to the list
 *
 * Return: length of list
 */
int listlen(listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}

/**
* insertion_sort_list - sort by inserting nodes 1 by 1
* @list: doubly linked list of nodes to order
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *n = NULL;

	if (!list || !*list || listlen(*list) < 2)
		return;

	tmp = (*list)->next;

	while (tmp)
	{
		n = tmp->next;
		while (tmp->prev && tmp->prev->n > tmp->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;

			tmp->next = tmp->prev;
			tmp->prev = tmp->next->prev;
			tmp->next->prev = tmp;

			if (!tmp->prev)
				*list = tmp;

			if (tmp->prev)
				tmp->prev->next = tmp;
			print_list(*list);
		}
		tmp = n;
	}
}
