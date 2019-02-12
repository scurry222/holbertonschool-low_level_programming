#include <stdio.h>
#include <stdlib.h>

/**
* main - print 50 fibonacci numbers, starting from 1 and 2
*
* Return: 0 (success)
*/

int main(void)
{
	int curr;
	int old = 1;
	int older = 0;
	int i;

	printf("%d, %d, ", older, old);

	for (i = 2; i <= 49; i++)
	{
		curr = old + older;

		printf("%d", curr);
		if (i == 49)
			putchar('\n');
		else
			printf(", ");
		older = old;
		old = curr;
	}
	return (0);
}
