#include "lists.h"

/**
* get_nodeint_at_index - return nth node of linked list
* @head: pointer to first element
* @index: int to delete node at
*
* Return: head
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!head)
			return (NULL);

		if (!head->next)
			break;

		head = head->next;
	}
	return (head);
}
