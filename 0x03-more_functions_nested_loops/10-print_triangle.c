#include "holberton.h"

/**
* print_triangle - print a traingle of hashes
* @size: size of triangle
*
* Return: void
*/

void print_triangle(int size)
{
	int row;
	int space;
	int hash;

	if (size <= 0)
		_putchar ('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = 1; space <= size - row; space++)
				_putchar(' ');
			for (hash = 1; hash <= row; hash++)
				_putchar('#');
			_putchar ('\n');
		}
	}
}
