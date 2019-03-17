#include "holberton.h"

/**
*
*
*
*
*/

int _printf(char *fmt, ...)
{
	int i = 0, j = 0;
	va_list args;
	char *sval;
	int counter = 0;
/*	void (*pfunc)(va_list);*/

	p_t funcarr[] = {
                {'i', print_int},
                {'d', print_int},
                {'s', print_string},
                {'c', print_char},
                {'x', print_hex},
                {'b', print_binary},
                {'%', print_char}
	};

	va_start(args, fmt);

        if (fmt == NULL)
                return (1);

	sval = fmt;

        for (i = 0; sval[i] != '\0'; i++, counter++)
        {
                if (sval[i] == '%')
                {
			i++;
			for (j = 0; funcarr[j].c != '\0'; j++)
			{
				if (sval[i] == funcarr[j].c)
				{
					counter += funcarr[j].f(args);
				}
			}
		}
		else
			putchar(sval[i]);

	}
	return (counter);
}
