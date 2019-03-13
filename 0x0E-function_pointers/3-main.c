#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calculates basic math based on args
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0 on success, exit if failure
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	result = get_op_func(op);

	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result(num1, num2));

	return (0);
}
