#include "holberton.h"
#include <stdio.h>

/**
* _strchr - select part of string after char is found
* @s: string to check
* @c: character to look for
*
* Return: s at comparison is success, NULL is char not found
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
