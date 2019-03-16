#include "variadic_functions.h"

/**
* print_strings - print variable amount of strings
* @separator: separator inputted
* @n: number of arguments
*
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n - 1; i++)
	{
		str = va_arg(valist, char *);

		if (separator)
		{
			if (!str)
				printf("(nil)%s", separator);
			else
				printf("%s%s", str, separator);
		}
		else
		{
			if (!str)
				printf("(nil)");
			else
				printf("%s", str);
		}
	}
	i++;

	printf("%s\n", va_arg(valist, char *));

	va_end(valist);
}
