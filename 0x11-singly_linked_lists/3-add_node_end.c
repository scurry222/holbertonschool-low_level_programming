#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
* _strlen - modified strlen for const var
* @s: const to find len of
*
* Return: length of s
*/

int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
* add_node_end - add new node to end of list_t
* @head: pointer to first element
* @str: input for str field in list_t
*
* Return: pointer of new element, NULL if malloc fail
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	while (last->next)
		last = last->next;

	last->next = new;

	return (new);
}
