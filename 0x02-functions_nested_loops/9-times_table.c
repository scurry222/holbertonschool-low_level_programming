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
	int sum;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			sum = x * y;
			if (sum <= 9)
			{
				_putchar(sum + '0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(sum / 10 + '0');
				_putchar(sum % 10 + '0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			if (y == 9)
			_putchar('\n');
		}
	}
}
