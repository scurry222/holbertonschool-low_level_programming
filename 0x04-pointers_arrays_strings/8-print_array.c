#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_array - print all elements of an array
* *a: pointer to string
* @n: length of string
*
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i + 1 != n)
		printf(", ");
	}
	printf("\n");
}
