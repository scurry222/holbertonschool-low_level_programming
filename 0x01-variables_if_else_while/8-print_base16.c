#include <stdio.h>
#include <stdlib.h>

/**
* main - print 0 through 16 in hexadecimal
*
* Return: 0 (success)
*/

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
