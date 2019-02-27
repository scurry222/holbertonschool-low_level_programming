#include "holberton.h"

/**
* factorial - return factorial of number n
* @n: number to find factorial of
*
* Return: factorial of the number
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
