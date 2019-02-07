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

	for (c = '0'; c <= '9'; c++)
	{
		for (c2 = '0'; c2 <= '9'; c2++)
		{
			putchar(c);
			putchar(c2);
			if (c != '9' || c2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
