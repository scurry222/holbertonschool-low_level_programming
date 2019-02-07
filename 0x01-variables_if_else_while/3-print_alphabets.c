#include <stdio.h>
#include <stdlib.h>

/**
* main - print alphabet in lowercase, then uppercase
*
* Return: 0 (success)
*/

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
