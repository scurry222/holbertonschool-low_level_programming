#include "holberton.h"

/**
* _strcmp - compare two strings and return number of differences
* @s1: string 1 to check
* @s2: string 2 to check
*
* Return: number of differences
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 && *s2 && s1[i] == s2[i])
	{
		s1++;
		s2++;
		i++;
	}

	return (*s1 - *s2);
}
