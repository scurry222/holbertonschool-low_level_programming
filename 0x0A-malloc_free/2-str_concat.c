#include "holberton.h"
#include <stdlib.h>

/**
* str_concat - concatenate two strings
* @s1: first string
* @s2: second string
*
* Return: allocated cat-ed string, null on allocation error
*/

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i = 0, j = 0;

	while(s1[i])
		i++;
	while (s2[j])
		j++;

	if (*s1 == '\0' || *s2 == '\0')
		return (NULL);

	cat = malloc(((i + j + 2) * sizeof(char *)));

	if (cat == NULL)
		return (NULL);

	j = 0;

	for (i = 0; s1[i]; i++)
	{
		cat[i] = s1[i];
		j++;
	}

	for (i = 0; s2[i]; i++)
	{
		cat[j] = s2[i];
		j++;
	}
	cat[j] = '\0';

	return (cat);
}
