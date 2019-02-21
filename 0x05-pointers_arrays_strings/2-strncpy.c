#include "holberton.h"

/**
* _strncpy - copy source array into dest array until length n
* @dest: destination to copy into
* @src: source to copy from
* @n: length to stop reading
*
* Return: destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
