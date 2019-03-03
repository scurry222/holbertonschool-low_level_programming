#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add any amount of numbers together
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0 if success, 1 if too many args passed
 */

int main(int argc, char *argv[])
{
	int cents = 0;
	int num;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return(0);
	}
	while (num > 25)
	{
		cents++;
		num = num - 25;
	}
	while (num > 10)
	{
		cents++;
		num = num - 10;
	}
	while (num > 5)
	{
		cents++;
		num = num - 5;
	}
	while (num > 2)
	{
		cents++;
		num = num - 2;
	}	
	while (num != 0)
	{
		cents++;
		num = num - 1;
	}
	printf("%d\n", cents);
	return (0);
}
