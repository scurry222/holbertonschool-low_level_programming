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
	listint_t *temp = head;


	for (i = 0; temp && i < index; i++)
		temp = temp->next;

	if (!temp)
		return (NULL);

	return (temp);
}
