#include "holberton.h"
#include <stdio.h>

/**
* _strpbrk - search a string for a set of bytes
* @s: string to check
* @accept: acceptable bytes
*
* Return: modified string if chars are found, NULL if not
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
