#include <stdio.h>
#include <stdlib.h>

/**
*
*
*
*/

int main(void)
{
	unsigned long curr;
	unsigned long old = 1;
	unsigned long older = 0;
	unsigned long onehalf;
	unsigned long twohalf;
	int i;

	printf("%lu, %lu, ", older, old);

	for (i = 0; i <= 96; i++)
	{
		curr = old + older;

		if (i < 92)
		{
			printf("%lu", curr);
		}
		else
		{
			onehalf = curr / 10000000;
			printf("%lu", onehalf);
			twohalf = curr % 10000000;
			printf("%lu", twohalf);
		}

		if (i == 96)
			putchar('\n');
		else
			printf(", ");
		older = old;
		old = curr;
	}
	return (0);
}
