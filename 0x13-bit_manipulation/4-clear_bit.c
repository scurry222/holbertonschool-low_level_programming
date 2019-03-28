#include "holberton.h"

/**
* clear_bit - set bit to 0 at index
* @n: number to clear
* @index: position to clear
*
* Return: 1 on success, -1 if index out of range
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > 50)
		return (-1);

	bit = ~(1 << index);
	*n = *n & bit;

	return (1);
}
