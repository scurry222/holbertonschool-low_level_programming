#include "holberton.h"

/**
 * islower - checks if n is a lowercase character
 * @c: variable that could be any character
 *
 * Return: 1 if c is lowercase, 0 if not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return(1);
	else
		return(0); 
}
