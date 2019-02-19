#include "holberton.h"

/**
* puts_half - print second half of a string
* @str: string to pass
*
* Return: void
*/

void puts_half(char *str)
{
	int i, length;

	for (i = 0; str[i]; i++)
		;
	length = i;

	for (i = length / 2; str[i]; i++)
		_putchar(i + '0');
	_putchar('\n');
}
