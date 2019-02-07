#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - check if randomized number n is pos, neg, or zero
*
* Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("0 is zero\n");
	if (n > 0)
		printf("%d is positive\n", n);

	return (0);
}
