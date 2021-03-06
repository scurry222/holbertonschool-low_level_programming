#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - guess a valid password for a password generator given an executable
*
* Return: 0
*/

int main(void)
{
	int i;
	int val = 0xad4;

	srand(time(NULL));
	while (val > '~')
	{
		i = rand() % 127;
		if (i >= 32 && val - i >= 32)
		{
			putchar(i);
			val = val - i;
		}
	}
	putchar(val);
	return (0);
}
