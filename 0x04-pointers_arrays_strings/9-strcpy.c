#include <stdio.h>
#include "holberton.h"

/**
* _strcpy - copy a string
* @dest: destination pointer
* @src: source pointer with string to copy into dest
*
* Return: void
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	return (dest);
}
