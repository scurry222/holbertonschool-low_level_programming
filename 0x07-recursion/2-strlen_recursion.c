#include "holberton.h"

/**
* _strlen_recursion - find strlen of a string using recursion
* @s: string to find length of
*
* Return: number of bytes found
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
