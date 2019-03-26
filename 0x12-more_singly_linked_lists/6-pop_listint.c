#include "lists.h"

/**
* pop_listint - remove a node of linked list
* @head: double pointer to first element
*
* Return: data stored at head
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ntemp;

	if (!head || !*head)
		return (0);

	temp = *head;
	ntemp = (*head)->n;

	if (temp->next)
		*head = temp->next;

	else
		*head = NULL;

	free(temp);
	return (ntemp);
}
