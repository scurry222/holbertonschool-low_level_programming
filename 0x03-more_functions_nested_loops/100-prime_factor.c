#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - print largest prime factor
*
* Return: void
*/

int main(void)
{
	unsigned long bigprime = 0;
	int prime;
	unsigned long i;
	unsigned long j;
	unsigned long num = 612852475143;


	for (i = 3; i <= 999999; i = i + 2)
	{
		if (num % i == 0)
		{
			prime = 1;
			for (j = 3; j <= i / 5; j = j + 2)
				if (i % j == 0)
				{
					prime = 0;
				}
			if (prime)
			{
				bigprime = i;
			}
		}
	}
	printf("%lu\n", bigprime);
	return (0);
}
