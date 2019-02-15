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
	unsigned long i;
	unsigned long num = 612852475143;


	while (num % 2 == 0)
		num = num / 2;
	for (i = 3; i <= 999999; i = i + 2)
	{
		while (num % i == 0)
		{
			num = num / i;
		}
	}

	if (num > 2)
		printf("%lu\n", num);
	return (0);
}
