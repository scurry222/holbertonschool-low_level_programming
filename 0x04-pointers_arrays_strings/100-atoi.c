#include "holberton.h"

/**
* _atoi - my own atoi with neg and pos inclusion
* @s: string to pass
*
* Return: modified string
*/

int _atoi(char *s)
{
	int num = 0;
	int n = 0;
	int digit;
	int i = 0;
	int length;
	int sign = 0;

	for (i = 0; s[i]; i++)
		;
	length = i;

	for (i = 0; i < length; i++)
	{
		digit = s[i] - '0';
		if (s[i] == '-')
			sign++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = 1;
			if (sign % 2 != 0)
				digit = -digit;
			n = 10 * n + digit;
		}
		else if ((s[i] < '0' || s[i] > '9') && num == 1)
			break;
	}
	return (n);
}
