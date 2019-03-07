#include <stdlib.h>
#include "holberton.h"

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to the peviously allocated memory
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size for memory block
 *
 * Return: pointer to the newly allocated memory, NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new, *old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	old = ptr;

	new = malloc(new_size);

	if (!new)
		return (NULL);

	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
	else
		for (i = 0; i < old_size; i++)
			new[i] = old[i];

	free(ptr);
	return (new);
}
