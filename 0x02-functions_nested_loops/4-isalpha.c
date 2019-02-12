#include "holberton.h"

/**
* isalpha - return 1 if character is in the alphabet
* @c: passed in character
*
* Return: 1 if success, 0 if not
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return(1);
	else
		return(0);
}
