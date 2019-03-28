#include "holberton.h"

/**
* get_bit - return value of bit at index
* @n: number to check bits from
* @index: position to check bit
*
* Return: bit on success, -1 if index out of range
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 50)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
