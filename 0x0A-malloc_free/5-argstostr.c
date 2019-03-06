#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string inputted
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}


/**
* argstostr - convert input into one str, separated by \n
* @ac: argument count
* @av: input with multiple arguments
*
* Return: converted args, in one str
*/

char *argstostr(int ac, char *av[])
{
	char *cat;
	int i, j, v = 0;
	int len = 0, all = 0;

	if (!ac || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]) + 1;
		all += len;
	}

	cat = malloc(sizeof(char) * (all + 1));

	if (cat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			cat[v] = av[i][j];
			v++;
		}
		cat[v++] = '\n';
	}
	cat[v] = '\0';

	return (cat);
}
