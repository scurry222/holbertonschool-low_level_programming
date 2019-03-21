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
	int len = 0;

	while (*(s + len))
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
	list_t *new_t;
	list_t *last_t;

	new_t = malloc(sizeof(list_t));
	if (!new_t)
		return (NULL);

	new_t->next = NULL;

	if (!*head)
		*head = new_t;

	while (last_t->next)
		last_t = last_t->next;

	last_t->next = new_t;
	new_t->str = strdup(str);
	new_t->len = _strlen(str);

	return (new_t);
}
