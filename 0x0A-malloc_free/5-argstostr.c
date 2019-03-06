#include "holberton.h"
#include <stdlib.h>

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
	int len = 0;

	if (!ac || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	cat = malloc(sizeof(char *) * (len + 1));

	if (cat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			cat[v] = av[i][j];
			v++;
		}
		cat[v] = '\n';
		v++;
	}
	cat[v] = '\0';

	return (cat);
}
