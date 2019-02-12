#include "holberton.h"

/**
* print_alphabet - print alphabet in lowercase
*
* Return: void
*/

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
		putchar (n);

	putchar ('\n');
}
