#include "holberton.h"

/**
* _strncat - concatenate two strings at length n
* @dest: resulting string
* @src: string to concatenate
* @n: length to stop reading at
*
* Return: destination string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
		;

	for (j = 0; src[j] && j < n; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';
	return (dest);
}
