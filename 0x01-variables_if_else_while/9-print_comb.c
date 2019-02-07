#include <stdio.h>
#include <stdlib.h>

/**
* main - print 0 through 9, separated by commas and spaces
*
* Return: 0 (success)
*/

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
