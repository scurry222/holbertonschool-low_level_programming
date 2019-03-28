#include "holberton.h"

/**
* binary_to_uint - convert binary number into an integer
* @b: string passing into function
*
* Return: decimal number if success, 0 if non bin num found
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;

	if (!b)
		return (0);

	for (dec = 0; *b; b++)
	{
		if (*b == '1')
			dec = (dec << 1) | 1;
		else if (*b == '0')
			dec = dec << 1;
		else
			return (0);
	}
	return (dec);
}
