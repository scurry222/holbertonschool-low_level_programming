#include <unistd.h>

/**
* main - write quote to standard error
*
* Return: 1 (success)
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 62);

	return (1);
}

