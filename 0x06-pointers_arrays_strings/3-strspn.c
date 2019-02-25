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
	int i;
	int j;
	unsigned int bytes = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == s[j])
			{
				bytes++;
				break;
			}
		}
	}
	return (bytes);
}
