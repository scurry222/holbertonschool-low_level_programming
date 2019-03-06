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
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	dup = malloc(sizeof(char *) * i);

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[i] = '\0';

	return (dup);
}
