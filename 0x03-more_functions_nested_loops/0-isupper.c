#include "holberton.h"

/**
* _isupper - check if character is uppercase
* @c: character to check
*
* Return: 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
