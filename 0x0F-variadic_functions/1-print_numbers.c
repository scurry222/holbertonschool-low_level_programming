#include "variadic_functions.h"

/**
* print_numbers - print all numbers inputted
* @separator: separator inputted
* @n: number of args
*
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	if (separator)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(valist, int), separator);
		i++;

		printf("%d\n", va_arg(valist, int));
	}
	else
		printf("\n");
	va_end(valist);
}
