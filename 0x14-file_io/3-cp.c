#include "holberton.h"

/**
* main - make a new file and copy contents from another file
* @argc: number of elements
* @av: arg1: file 1 to copy from arg 2: file to copy into
*
* Return: 0 on success, -1 on fail
*/
int main(int argc, char **av)
{
	int f_from, f_to, r, a, b;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage cp file_from file_to\n");
		exit(97);
	}
	f_from = open(av[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t read from file %s\n", av[1]);
		exit(98);
	}
	f_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(f_from, buffer, 1024)) > 0)
	{
		if (write(f_to, buffer, r) != r || f_to == -1)
		{
			close(f_from);
			dprintf(STDERR_FILENO, "Error: Can\'t write to %s\n", av[2]);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	a = close(f_from);
	b = close(f_to);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
		exit(100);
	}
	return (0);
}
