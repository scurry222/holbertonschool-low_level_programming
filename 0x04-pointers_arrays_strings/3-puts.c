#include <stdio.h>
#include "holberton.h"

/**
* _puts: print a string with putchar
* @str: pointer containing string
*
* Return: void
*/

void _puts(char *str)
{
	char c;
	int i;

	for (i = 0; str[i]; i++)
	{
		c = str[i];
		_putchar(c);
	}
	_putchar('\n');
}
