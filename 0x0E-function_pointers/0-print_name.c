#include "function_pointers.h"

/**
* print_name - print the string "name"
* @name: string to pass through f function
* @f: function that prints strings
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	if (f)
		f(name);
}
