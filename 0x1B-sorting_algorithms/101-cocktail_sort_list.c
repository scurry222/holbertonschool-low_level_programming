#include "sort.h"

/**
 * list_len - function returns length of list
 * @list: head of list
 *
 * Return: length
 */

size_t list_len(listint_t *list)
{
	size_t len = 0;

	while (list)
	{
		len++;
		list = list->next;
	}
	return (len);
}

/**
* switch_nodes - switch the input nodes
* @a: element 1
* @b: element 2
*/

void switch_nodes(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}

/**
* trav_rev- function that sorts from the tail back
* @head: head of list
* @tail: tail of the list
* @list: original head of the list
*
* Return: new head of the list
*/
listint_t *trav_rev(listint_t *head, listint_t *tail, listint_t *list)
{
	while (tail && tail->prev)
	{
		if (tail->n < tail->prev->n)
		{
			switch_nodes(tail->prev, tail);
			if (!tail->prev)
				list = tail;
			print_list(list);
		}
		else
			tail = tail->prev;
		if (!tail->prev)
			head = tail;
	}
	return (head);
}


/**
* cocktail_sort_list - sort like a cocktail shaker
* @list: doubly linked list of elements to sort
*/
void cocktail_sort_list(listint_t **list)
{
	listint_t *h, *t = NULL;
	int sorted = 0;

	if (!list || !*list || list_len(*list) < 2)
		return;
	h = *list;
	while (!sorted)
	{
		sorted = 1;
		while (h->next)
		{
			if (h->n > h->next->n)
			{
				sorted = 0;
				switch_nodes(h, h->next);
				if (!h->prev->prev)
					*list = h->prev;
				print_list(*list);
			}
			else
				h = h->next;
			if (!h->next)
				t = h;
		}
		h = trav_rev(h, t, *list);
		*list = h;
	}
}
