#include "holberton.h"

/**
* print_line - print underscores until the number passed
* @n: number to stop printing at
*
* Return: void
*/

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
