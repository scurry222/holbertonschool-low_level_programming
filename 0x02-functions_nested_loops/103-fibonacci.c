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
	unsigned long sum = 2;
	int i;

	for (i = 0; i < 30; i++)
	{
		curr = old + older;
		if ((curr % 2) == 0)
			sum += curr;
		older = old;
		old = curr;
	}
	printf("%lu\n", sum);
	return (0);
}
