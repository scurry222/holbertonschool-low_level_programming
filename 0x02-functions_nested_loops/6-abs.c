#include "holberton.h"

/**
 * _abs - compute the absolute value of an integer
 * @r: any integer to pass into function
 *
 * Return: number
 */

int _abs(int r)
{
	if (r < 0)
		r = (r * (-1));

	return (r);
}
