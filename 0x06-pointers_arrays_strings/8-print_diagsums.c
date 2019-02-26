#include "holberton.h"
#include <stdio.h>

/**
* print_chessboard - print elements from an array of arrays
* @a: array to print
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1, sum2;

	for (i = 0; i < size; i++)
		sum1 += a[(size + 1) * i];
	for (j = 1; j <= size; j++)
		sum2 += a[(size - 1) * j];
	printf("%d, %d\n", sum1, sum2);
}
