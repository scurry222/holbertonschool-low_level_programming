#include "holberton.h"

/**
*
*
*
*
*/

int main(int argc, char **av)
{
	int cp, rcount, rcpcount;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage cp file_from file_to\n");
		exit(97);
	}

	buffer = open(av[1], O_RDONLY);
	if (!rcount)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can\'t read from file %s\n", av[1]);
		exit(98);
	}
	rcpcount = open(av[2], O_O_RDWR | O_TRUNC);
	if (!rcpcount)
	{
		close(rcount);
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can\'t write to %s\n", av[2]);
		exit(99);
	}
	(void) cp;
	free(buffer);

	return (0);
}
