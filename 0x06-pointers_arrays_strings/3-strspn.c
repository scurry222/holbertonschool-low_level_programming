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
	unsigned int i, j, match, bytes;

	for (i = 0; s[i]; i++)
	{
		match = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				bytes++;
			}
		}
		if (match == 0)
			return (bytes);
	}
	return (0);
}
