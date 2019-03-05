#include "holberton.h"
#include <stdlib.h>

/**
* _strdup - make new place in memory for a string
* @str: string to duplicate
*
* Return: New string on success, null if memory allocation failed
*/

char *_strdup(char *str)
{
	char *dup;
	int i;

	if (*str == '\0')
		return (NULL);

	dup = malloc(sizeof(char *));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	return (dup);
}
