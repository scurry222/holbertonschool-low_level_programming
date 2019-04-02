#include "holberton.h"

/**
* append_text_to_file - append text to end of file
* @filename: name of file
* @text_content: text to append
*
* Return: 1 on success, -1 on fail
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int i, wcount, fd;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
		;

	wcount = write(fd, text_content, i);
	if (wcount == -1)
		return (-1);

	close(fd);

	return (1);
}
