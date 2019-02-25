#include "holberton.h"

/**
* _strspn - get length of a prefix substring
* @s: string to compare against substring
* @accept: accepted characters to count
*
* Return: bytes with characters
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, save;

	for (i = 0; s[i]; i++)
	{
		save = i;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == s[j])
			{
				i++;
			}
		}
		if (i == save)
			break;
	}
	return (i);
}
