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
	int i = 0;

	while (*haystack)
	{
		i = 0;
		while (haystack[i] && needle[i] && haystack[i] == needle[i])
			i++;
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return (NULL);
}
