#include <stdio.h>
#include "holberton.h"

/**
 * main - print name
 * @argc: number of arguments (made void)
 * @argv: array containing name
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
