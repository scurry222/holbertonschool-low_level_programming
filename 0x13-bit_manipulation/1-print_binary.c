#include "holberton.h"

/**
* print_binary - convert dec to bin
* @n: number to convert
*
* Return: void
*/

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int place;

	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		place = n >> i;

		if (place)
		{
			if (place & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
