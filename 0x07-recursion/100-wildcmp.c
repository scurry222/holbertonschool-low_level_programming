#include "holberton.h"
#include <stdio.h>

/**
* wildcmp - compare two strings recursively, with asterisk usage
* @s1: string 1, does not include asterisk
* @s2: string 2, may include asterick
*
* Return: 1 if strings compare, 0 if not
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));

	if (*s2 != '*')
		return (0);

	if (*(s2 + 1) == '*')
		return (wildcmp(s1, (s2 + 1)));

	if (*s1 != *(s2 + 1) && *s1 == '\0')
		return (0);

	if (*(s1 + 1) == *(s2 + 1))
		return (wildcmp((s1 + 1), (s2 + 1)));

	return (wildcmp((s1 + 1), s2));
}
