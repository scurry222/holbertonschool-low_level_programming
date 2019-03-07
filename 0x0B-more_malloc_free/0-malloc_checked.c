#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: 98 on failure, pointer to memory on success
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);
	else
		return (mem);
}
