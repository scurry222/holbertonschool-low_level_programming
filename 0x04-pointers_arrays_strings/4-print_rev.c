#include "holberton.h"

/**
* print_rev - print string in reverse
* @s: string to reverse
*
* Return: void
*/

void print_rev(char *s)
{
	int i;
	char c;
	int length;

	for (i = 0; s[i]; i++)
		;
	length = i - 1;

	for (i = length; i >= 0; i--)
	{
		c = s[i];
		_putchar(c);
	}
	_putchar('\n');
}
