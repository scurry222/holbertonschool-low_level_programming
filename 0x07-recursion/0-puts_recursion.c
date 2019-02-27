#include "holberton.h"

/**
* _puts_recursion - print a string using recursion
* @s: string to print
*
* Return: void
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
