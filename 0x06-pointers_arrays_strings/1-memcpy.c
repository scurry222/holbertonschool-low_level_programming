#include "holberton.h"

/**
* *_memcpy - copy string 1 to string 2 until limit is reached
* @dest: destination string to copy into
* @src: source string to copy from
* @n: number of bytes to check
*
* Return: destination string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
