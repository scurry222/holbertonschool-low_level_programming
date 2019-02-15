#include "holberton.h"

/**
 * print_number - print exact integer
 * @n: number to print
 *
 * Return: void
 */

void print_number(int n)
{

	unsigned int power;
	int printing = 0;
	unsigned int nosign;

	if (n == 0)
		_putchar ('0');
	else
	{
		if (n < 0)
		{
			n = n * -1;
			nosign = n;
			_putchar ('-');
		}
		else
			nosign = n;
		for (power = 1000000000; power >= 1; power = power / 10)
		{
			if (nosign >= power)
				printing = 1;
			if (printing == 1)
			{
				_putchar ((nosign / power) + '0');
				nosign = nosign % power;
			}
		}
	}
}
