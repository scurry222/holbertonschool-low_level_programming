#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int mult, i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mult = i * j;

	printf("%d\n", mul);

	return (0);
}
