#include "holberton.h"

/**
* factor - check if all numbers between 1 and n are factors of n
* @n: number to check for factors of
* @check: number that starts at n - 1, decrements to 1
*
* Return: 1 if no factor is found, 0 if factor is found
*/

int factor(int n, int check)
{
	if (check == 1)
		return (1);
	if (n % check == 0)
		return (0);

	return (factor(n, (check - 1)));
}

/**
* is_prime_number - check if n is a prime number
* @n: number to check
*
* Return: pass values into factor
*/

int is_prime_number(int n)
{
	int check = (n - 1);

	if (n <= 1)
		return (0);

	return (factor(n, check));
}
