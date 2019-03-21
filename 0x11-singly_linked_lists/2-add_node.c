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
* add_node - add new node to beginning of list_t
* @head: pointer to first element
* @str: input for str field in list_t
*
* Return: address of new element, NULL if malloc fail
*/

list_t *add_node(list_t **head, const char *str)
{
	char *tempstr = strdup(str);
	list_t *temp;

	temp = (list_t *)malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = tempstr;
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}
