#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct slist - struct to match name with function
 * @name: name
 * @type: function to match
 */

typedef struct slist
{
	char *name;
	void (*type)(va_list valist);
} fmt;

void print_c(va_list valist);
void print_i(va_list valist);
void print_fl(va_list valist);
void print_s(va_list valist);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
