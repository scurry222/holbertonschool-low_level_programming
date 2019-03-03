#include <stdio.h>
#include "holberton.h"

/**
 * main - print all arguments recieved
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
