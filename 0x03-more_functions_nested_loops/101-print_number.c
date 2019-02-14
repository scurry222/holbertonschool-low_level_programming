#include "holberton.h"

/**
 * print_number - print exact integer
 * @n: number to print
 *
 * Return: void
 */

void print_number(int n)
{

	int power;
	int printing = 0;

	if (n == 0)
		_putchar ('0');
	if (n < 0)
	{
		n = n * -1;
		_putchar ('-');
	}
	for (power = 1000000; power >= 1; power = power / 10)
	{
		if (n >= power)
			printing = 1;
		if (printing == 1)
		{
			_putchar ((n / power) + '0');
			n = n % power;
		}
	}
}
