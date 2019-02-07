#include <stdio.h>
#include <stdlib.h>

/**
* main - print alphabet in lowercase, and in reverse
*
* Return: 0 (success)
*/

int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');

	return (0);
}
