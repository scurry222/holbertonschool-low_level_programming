#include <stdio.h>
#include "holberton.h"

/**
 * main - print number of arguments
 * @argc: number of arguments
 * @argv: array containing arguments (made void)
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) **argv;

	printf("%d\n", (argc - 1));

	return (0);
}
