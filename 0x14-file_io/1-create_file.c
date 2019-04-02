#include "holberton.h"

/**
* create_file - create a file with a string
* @filename: name of file
* @text_content: string to write into file
*
* Return: 1 on success, -1 on fail
*/

int create_file(const char *filename, char *text_content)
{
	int i, new, wcount;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	new = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (new == -1)
		return (-1);

	wcount = write(new, text_content, i);
	if (wcount == -1)
		return (-1);

	close(new);

	return (1);
}
