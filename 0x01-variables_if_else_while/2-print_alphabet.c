#include <stdio.h>
#include <stdlib.h>

/**
* main - print alphabet in lowercase char by char
*
* Return: 0 (success)
*/

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
