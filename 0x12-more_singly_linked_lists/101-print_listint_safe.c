#include "lists.h"

/**
* print_listint_safe - print list consecutively in memory
* @head: pointer to first element
*
* Return: count of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int sub;

	while (head)
	{
		count++;

		printf("[%p] %d\n", (void *)head, head->n);

		sub = head - head->next;

		if (sub > 0)
			head = head->next;

		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}

	}
	return (count);
}
