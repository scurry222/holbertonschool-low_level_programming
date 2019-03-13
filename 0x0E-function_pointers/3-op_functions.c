#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - find addition of a and b
* @a: number 1
* @b: number 2
*
* Return: sum if success, 100 if fail
*/

int op_add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

/**
* op_sub - find subtraction of a and b
* @a: number 1
* @b: number 2
*
* Return: difference if success, 100 if fail
*/
int op_sub(int a, int b)
{
	int dif;

	dif = a - b;

	return (dif);
}

/**
* op_mul - find multiplication of a and b
* @a: multiplier
* @b: multiple
*
* Return: product if success, 100 if fail
*/
int op_mul(int a, int b)
{
	int prod;

	prod = a * b;

	return (prod);
}

/**
* op_div - find modulus of a and b
* @a: dividend
* @b: divisor
*
* Return: quotient if success, 100 if fail
*/


int op_div(int a, int b)
{
	int quo;

	if (!a || !b)
	{
		printf("Error\n");
		exit(100);
	}
	quo = a / b;

	return (quo);
}

/**
* op_mod - find modulus of a and b
* @a: dividend
* @b: divisor
*
* Return: modulus if success, 100 if fail
*/

int op_mod(int a, int b)
{
	int mod;

	if (!a || !b)
	{
		printf("Error\n");
		exit(100);
	}
	mod = a % b;

	return (mod);
}
