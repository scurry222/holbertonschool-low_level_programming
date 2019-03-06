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
	int c, i = 0;

	if (!str)
		return (NULL);

	while (*str)
		i++;
 
	dup = malloc(sizeof(char) * i + 1);

	if (!dup)
		return (NULL);

	for (c = 0; c < i; c++)
		dup[c] = str[c];

	dup[c] = '\0';

	return (dup);
}
