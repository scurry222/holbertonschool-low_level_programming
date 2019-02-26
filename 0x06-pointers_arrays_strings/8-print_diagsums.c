#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - print sum of diagonals in an array
* @a: array to traverse
* @size: size of the array
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += a[(size + 1) * i];
	for (j = 1; j <= size; j++)
		sum2 += a[(size - 1) * j];
	printf("%d, %d\n", sum1, sum2);
}
