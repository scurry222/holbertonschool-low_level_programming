#include "holberton.h"

/**
* factor - find factors of n
* @n: passed in number to check for square roots
* @f: incrementing number which is checked against n
*
* Return: moving f through the function until other returns are true
*/

int factor(int n, int f)
{

	if ((f * f) == n)
		return (f);

	if (f > (n / f))
		return (-1);

	return (factor(n, (f + 1)));
}

/**
* _sqrt_recursion - find square root through recursion
* @n: number to check for square roots
*
* Return: pass n and 1 into factor function, unless n is negative, 0, or 1
*/

int _sqrt_recursion(int n)
{

	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);

	return (factor(n, 1));
}
