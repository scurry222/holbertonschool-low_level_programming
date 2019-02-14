#include "holberton.h"

/**
* _isdigit - check if character is a digit
* @c: character to check
*
* Return: 1 if character is a digit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
