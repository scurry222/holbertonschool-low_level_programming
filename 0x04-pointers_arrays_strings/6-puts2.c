#include "holberton.h"

/**
* puts2 - print every other character in a string
* @str: str to pass
*
* Return: void
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i + 1]; i = i + 2)
		_putchar(i + '0');
	for (i = 0; str[i] <= '\0'; i++)
		if (str[i] == '\0')
			_putchar(i);
	_putchar('\n');
}
