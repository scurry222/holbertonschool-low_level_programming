#include "holberton.h"

/**
* flip_bits - calculate difference between two numbers
* @n: number 1
* @m: number 2 to "flip" bits from num 1
*
* Return: bits calculated
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff, bits = 0;

	for (diff = n ^ m; diff; diff = diff >> 1)
		bits += diff & 1;

	return (bits);
}
