#include <stdio.h>
#include <stdlib.h>

/**
* main - print sum of all multiples of 3 and 5 up to 1024 (excluding)
*
* Return: void
*/

int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
