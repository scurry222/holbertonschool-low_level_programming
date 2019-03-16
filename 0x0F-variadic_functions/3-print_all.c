#include "variadic_functions.h"

/**
 * print_c - prints a character
 * @valist: argument list
 */

void print_c(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_i - prints an integer
 * @valist: argument list
 */

void print_i(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_fl - prints a float
 * @valist: argument list
 */

void print_fl(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_s - prints a string
 * @valist: argument list
 */

void print_s(va_list valist)
{
	char *str;

	str = va_arg(valist, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints all args
 * @format: string containing format arguments
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	va_list valist;
	char *sep = "";

	fmt vlist[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_fl},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(valist, format);

	while (format && format[i])
	{
		while (vlist[j].name)
		{
			if (format[i] == *vlist[j].name)
			{
				printf("%s", sep);
				vlist[j].type(valist);
				sep = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}

	printf("\n");

	va_end(valist);
}
