#include "holberton.h"

/**
* print_alphabet_x10 - print the alphabet in lowercase 10 times
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
