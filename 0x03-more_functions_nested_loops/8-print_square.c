#include "holberton.h"

/**
* print_square - print a square of n size
* @size: size of square
*
* Return: void
*/

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar ('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
}
