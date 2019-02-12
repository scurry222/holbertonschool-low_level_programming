#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*
*
*
*/

void print_times_table(int n)
{
	int x;
	int y;
	int sum;

	if (n > 0 && n < 15)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				sum = x * y;
				if (x != n)
				{
					if (sum < 10)
						printf("%d,   ", sum);
					else if (sum < 100)
						printf("%d,  ", sum);
					else
						printf("%d, ", sum);
				}
				else
					printf ("%d\n", sum);
			}
			printf ("\n");
		}
	}
}
