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
	int i, j;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	cat = malloc(((len1 + len2 + 1) * sizeof(char)));

	if (cat == NULL)
		return (NULL);

	j = 0;

	for (i = 0; i < len1; i++)
		cat[i] = s1[i];

	for (j = 0; j < len2; i++)
	{
		cat[i] = s2[j];
		j++;
	}

	cat[i] = '\0';

	return (cat);
}
