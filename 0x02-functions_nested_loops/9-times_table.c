#include "holberton.h"

/**
* times_table - print a times table with only putchar
*
* Return: void
*/

void times_table(void)
{
	int x;
	int y;
	int prod;

	for (y = 0; y <= 9; y++)
	{
		_putchar('0');
		for (x = 1; x <= 9; x++)
		{
			prod = x * y;
			if (prod <= 9)
			{
				if (x <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
			}
			else
			{
				if (x <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(prod / 10 + '0');
					_putchar(prod % 10 + '0');
				}
			}
			if (x == 9)
			_putchar('\n');
		}
	}
}
