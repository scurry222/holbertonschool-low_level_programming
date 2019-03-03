#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check - checks for digits in arguments
 * @s: string to check
 *
 * Return: -1 if string contains non-digit, 0 otherwise
 */

int check(char *s)
{
	char digit[] = "0123456789";
	int i, j, checked;

	for (i = 0; s[i] != '\0'; i++)
	{
		checked = 0;
		for (j = 0; j <= 10; j++)
		{
			if (s[i] == digit[j])
				checked++;
		}
		if (checked == 0)
			return (-1);
	}

	return (0);
}

/**
 * main - add any amount of numbers together
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0 if success, 1 if too many args passed
 */

int main(int argc, char *argv[])
{
	int  i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (check(argv[i]) == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
