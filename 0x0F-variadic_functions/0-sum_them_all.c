#include "variadic_functions.h"

/**
* sum_them_all - adds all arguments passed
* @n: number of arguments
*
* Return: sum if n is not 0, otherwise 0
*/

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
