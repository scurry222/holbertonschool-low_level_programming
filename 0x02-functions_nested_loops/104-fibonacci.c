#include <stdio.h>
#include <stdlib.h>

/**
*
*
*
*/

int main(void)
{
	unsigned long old = 2;
	unsigned long older = 1;
	unsigned long curr;
	unsigned long onehalf;
	unsigned long onehalf2;
	unsigned long twohalf;
	unsigned long twohalf2;
	unsigned long split = 1000000000;
	int i;

	printf("%lu, %lu", older, old);

	for (i = 1; i < 91; i++)
	{
		curr = old + older;
		printf(", %lu", old);
		older = old;
		old = curr;
	}
	onehalf = (old / split);
	onehalf2 = (old % split);
	twohalf = (curr / split);
	twohalf2 = (curr % split);
	for (i = 92; i <= 98; ++i)
	{
		onehalf = twohalf - onehalf;
		onehalf2 = twohalf2 - onehalf2;
		twohalf += onehalf;
		twohalf2 += onehalf2;

		printf(", %lu%lu", (onehalf2 / split) + onehalf, onehalf2 % split);
	}
	putchar('\n');
	return (0);
}
