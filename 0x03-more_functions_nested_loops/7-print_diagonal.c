#include "holberton.h"

/**
* print_diagonal - print a diagonal line made of backslashes
* @n: size of diagonal line
*
* Return: void
*/

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (n <= 0)
				_putchar('\n');
			else if (i == j)
			{
				_putchar ('\\');
				_putchar ('\n');
				break;
			}
			else
				_putchar (' ');
		}
	}
}
