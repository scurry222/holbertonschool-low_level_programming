#include "holberton.h"

/**
*
*
*
*/

int print_last_digit(int r)
{
	int n;

	n = r % 10;

	if (r > 0)
		_putchar(n + '0');
	else
	{
		n = (n * (-1));
		_putchar(n + '0');
	}
	return(n);
}
