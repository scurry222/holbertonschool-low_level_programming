#include "holberton.h"

/**
* free_buff - free string
* @buff: string to pass
*
* Return: 0
*/

int free_buff(char *buff)
{
	free(buff);
	return (0);
}

/**
* read_textfile - print letters from a text file to standard output
* @filename: file to open
* @letters: number of letters to print
*
* Return: amount of letters read and written, 0 on fail
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rcount, wcount;
	char *buffer;
	int fd;

	if (!filename || letters < 1)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
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
