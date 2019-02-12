#include "holberton.h"

/**
 * _abs - compute the absolute value of an integer
 * @int: any integer to pass into function
 *
 * Return: Always 0.
 */

int _abs(int r)
{
	if (r < 0)
		r = (r * (-1));

	return (r);
}
