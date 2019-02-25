#include "holberton.h"

/**
* _memset - fill string with specific character to a limit
* @s: string to modify
* @b: character to fill string with
* @n: number of bytes to fill
*
* Return: modified string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
