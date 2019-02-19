#include "holberton.h"

/**
* _strlen - function to find length of a string
* @s: pointer to find length of
*
* Return: length
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}
