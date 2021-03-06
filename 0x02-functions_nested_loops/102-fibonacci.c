#include <stdio.h>
#include <stdlib.h>

/**
* main - print 50 fibonacci numbers, starting from 1 and 2
*
* Return: 0 (success)
*/

int main(void)
{
	unsigned long curr;
	unsigned long old = 2;
	unsigned long older = 1;
	int i;

	printf("%lu, %lu, ", older, old);

	for (i = 2; i <= 49; i++)
	{
		curr = old + older;

		printf("%lu", curr);
		if (i == 49)
			putchar('\n');
		else
			printf(", ");
		older = old;
		old = curr;
	}
	return (0);
}
