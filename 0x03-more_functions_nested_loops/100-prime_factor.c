#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/*
*
*
*
*/

int main(void)
{
	unsigned long bigprime = 0;
	unsigned long factor = 0;
	int prime;
	unsigned long i;
/*	unsigned long j;*/

	unsigned long num;

	if (i % 2 != 0 && i % 3 != 0)

	num = 612852475143;
	printf("%lu\n", num);
	for (i = 2; i <= num / 2; i++)
	{
		printf("i=%lu\r", i);
		if (num % i == 0)
		{
			factor = i;
		}
		prime = 1;
/*		for (j = 2; j <= factor / 2; j++)
			if (factor % j == 0)
				prime = 0;
*/
		if (prime)
		{
			bigprime = factor;
		}
	}

	printf ("\n biggest prime = %lu\n", bigprime);
	return (0);
}
