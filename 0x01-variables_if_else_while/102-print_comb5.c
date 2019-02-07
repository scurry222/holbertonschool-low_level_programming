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
	int c4;

	for (c = 48; c <= 57; c++)
	{
		for (c2 = 48; c2 <= 56; c2++)
		{
			for (c3 = c; c3 <= 57; c3++)
			{
				for (c4 = c2 + 1; c4 <= 57; c4++)
				{
					if (c != c2 || c2 != c3 || c3 != c4 || c2 != c4 || c != c3 || c != c4)
					{
					putchar(c);
					putchar(c2);
					putchar(' ');
					putchar(c3);
					putchar(c4);
					if (c != 57 || c2 != 56 || c3 != 57 || c4 != 57)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
