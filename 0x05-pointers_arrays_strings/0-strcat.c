#include "holberton.h"

/**
* _strcat - concatenate two strings
* @dest: destination for resulting string
* @src: souce string to cat to dest
*
* Return: destination string
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
		;

	for (j = 0; src[j]; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
