#include "holberton.h"
#include <stdlib.h>

/**
* _strchr - select part of string after char is found
* @s: string to check
* @c: character to look for
*
* Return: s at comparison is success, NULL is char not found
*/

char *_strchr(char *s, char c)
{
	int next;

	while (1)
	{
		next = *s++;
		if (next == c)
			return (s - 1);
		if (next == 0)
			return (NULL);
	}
}
