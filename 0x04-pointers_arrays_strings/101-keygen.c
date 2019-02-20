#include <stdio.h>

/**
* main - guess a valid password for a password generator given an executable
*
* Return: 0
*/

int main(void)
{
	int i;
	int val = 0xad4;

	while (val > '~')
	{
		printf("~");
		val = val - '~';
	}
	putchar(val);
	return (0);
}
