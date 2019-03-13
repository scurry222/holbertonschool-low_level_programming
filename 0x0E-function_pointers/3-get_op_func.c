#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* get_op_func - gets operator function to pass into main
* @s: string containing operator
*
* Return: pointer to the function that corresponds
* to the operator given as a parameter
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	if (!s || s[1])
		return (NULL);


	while (i < 5 && *s != *(ops[i].op))
		i++;

	return (ops[i].f);
}
