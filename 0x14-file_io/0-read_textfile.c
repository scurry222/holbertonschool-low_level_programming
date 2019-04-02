#include "holberton.h"

/**
*
*
*
*/

int free_buff(char *buff)
{
	free(buff);
	return (0);
}

/**
*
*
*
*
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rcount, wcount;
	char *buffer;
	int fd;

	if (!filename || letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);
	if (!fd)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		free_buff(buffer);

	rcount = read(fd, buffer, letters);
	if (!rcount)
		free_buff(buffer);

	wcount = write(STDOUT_FILENO, buffer, rcount);
	if (!wcount)
		free_buff(buffer);

	close(fd);

	free(buffer);

	return (wcount);
}
