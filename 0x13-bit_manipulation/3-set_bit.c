#include "holberton.h"

/**
* set_bit - set bit to 1 at given index
* @n: number to set at index
* @index: position to set number to
*
* Return: 1 on success, -1 if index out of range
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > 50)
		return (-1);

	bit = 1 << index;
	*n = *n | bit;

	return (1);
}
