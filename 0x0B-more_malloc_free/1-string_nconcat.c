#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from string 2 to concatenate
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ncat;
	unsigned int i1, i2, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n > len2)
		n = len2;

	ncat = malloc(sizeof(char) * (len1 + (n + 1)));
	if (!ncat)
		return (NULL);

	for (i1 = 0; i1 < len1; i1++)
		ncat[i1] = s1[i1];

	for (i2 = 0; i2 < n; i2++)
	{
		ncat[i1] = s2[i2];
		i1++;
	}

	ncat[i1] = '\0';

	return (ncat);
}
