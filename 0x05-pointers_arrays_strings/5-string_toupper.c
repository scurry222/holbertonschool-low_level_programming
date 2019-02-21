#include "holberton.h"

/**
* string_toupper - capitalize all letters in passed in string
* @a: string to modify
*
* Return: modified string
*/

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i]; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
	}
	return (a);
}
