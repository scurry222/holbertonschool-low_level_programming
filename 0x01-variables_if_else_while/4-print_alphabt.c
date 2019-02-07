#include <stdio.h>
#include <stdlib.h>

/**
* main - print alphabet in lowercase, but ignore q and e
*
* Return: 0 (success)
*/

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e')
			c++;
		if (c == 'q')
			c++;

		putchar(c);
	}
	putchar('\n');

	return (0);
}
