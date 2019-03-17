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

	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (separator && i != (n - 1))
		{
			printf("%d%s", va_arg(valist, int), separator);

		}
		else
			printf("%d", va_arg(valist, int));
	}
	va_end(valist);
	printf("\n");
}
