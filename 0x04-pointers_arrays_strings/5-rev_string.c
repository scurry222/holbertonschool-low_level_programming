#include "holberton.h"

/**
* rev_string - modify the string to be reversed
* @s: string to reverse
*
* Return: void
*/

void rev_string(char *s)
{
	int i;
	char c, *start, *end;
	int length;

	start = s;
	end = s;

	for (i = 0; s[i]; i++)
		;
	length = i;

	for (i = 0; i < length - 1; i++)
		end++;
	for (i = 0; i < length / 2; i++)
	{
		c = *end;
		*end = *start;
		*start = c;

		start++;
		end--;
	}
}
