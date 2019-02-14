#include <stdio.h>
#include <stdlib.h>

/**
* main - print fib numbers up to 98: deal with overflowing
*
* Return: void
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
	unsigned long sum1;
	unsigned long sum2;
	int i;

	printf("%lu, %lu", older, old);

	for (i = 1; i < 91; i++)
	{
		curr = old + older;
		printf(", %lu", curr);
		older = old;
		old = curr;
	}
	onehalf = (older / split);
	twohalf = (old / split);
	onehalf2 = (older % split);
	twohalf2 = (old % split);
	for (i = 92; i <= 97; ++i)
	{
		sum2 = (onehalf2 + twohalf2) % split;
		sum1 = (onehalf + twohalf + (sum2 / split));
		onehalf = twohalf;
		onehalf2 = twohalf2;
		twohalf = sum1;
		twohalf2 = sum2;
		printf(", %lu%lu", sum1, sum2);
	}
	putchar('\n');
	return (0);
}
