#include "holberton.h"

/**
* _pow_recursion - find value of x to the power of y.
* @x: inital number to find power of.
* @y: power value.
*
* Return: value of x after multiplying y
*/

int _pow_recursion(int x, int y)
{
	int m;

	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y % 2 == 0)
	{
		m = _pow_recursion(x, y / 2);
		return (m * m);
	}
	return (x * _pow_recursion(x, y - 1));
}
