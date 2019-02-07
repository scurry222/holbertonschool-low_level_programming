#include <stdio.h>
#include <stdlib.h>

/**
* main - print all combinations from 00 through 99
*
* Return: 0 (success)
*/

int main(void)
{
	int c;
	int c2;

	for (c = 48; c <= 56; c++)
	{
		for (c2 = c + 1; c2 <= 57; c2++)
		{
			if (c != c2)
			{
				putchar(c);
				putchar(c2);
				if (c != 56 || c2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
