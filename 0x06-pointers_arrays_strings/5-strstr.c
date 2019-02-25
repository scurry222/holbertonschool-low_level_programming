#include "holberton.h"
#include <stdio.h>

/**
* _strstr - locate a substring in haystack string
* @haystack: string that may contain needle characters
* @needle: string the check against haystack
*
* Return: modified haystack if chars are found, NULL if not
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[0])
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
