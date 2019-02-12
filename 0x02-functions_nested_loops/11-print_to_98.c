#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_to_98 - print all numbers up or down to 98
* @n: number that can be larger, smaller, or equal to 98
*
* Return: void
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
