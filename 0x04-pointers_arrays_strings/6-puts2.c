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
	int length;

	for (i = 0; str[i]; i++)
		;
	length = i;
	for (i = 0; i < length; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
