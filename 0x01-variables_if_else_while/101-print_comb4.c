#include <stdio.h>
#include <stdlib.h>

/**
* main - print 00 through 99, separated by commas and spaces
*
* Return: 0 (success)
*/

int main(void)
{
	int c;
	int c2;
	int c3;

	for (c = 48; c <= 55; c++)
	{
		for (c2 = c + 1; c2 <= 56; c2++)
		{
			for (c3 = c2 + 1; c3 <= 57; c3++)
			{
				if (c != c2 || c2 != c3 || c != c3)
				{
					putchar(c);
					putchar(c2);
					putchar(c3);
					if (c != 55 || c2 != 56 || c3 != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
