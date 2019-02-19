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

	if (length % 2 == 0)
		for (i = length / 2; i < length; i++)
			_putchar(i + '0');
	else
		for (i = (length - 1) / 2; i <= length; i++)
			_putchar(i + '0');
	_putchar('\n');
}
