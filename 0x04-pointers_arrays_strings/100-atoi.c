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
	int i = 0;
	int length;
	int sign = 0;

	for (i = 0; s[i]; i++)
		;
	length = i;

	for (i = 0; i < length; i++)
	{
		if (s[i] == '-')
			sign++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = 1;
			n = 10 * n + (s[i] - '0');
		}
		else if ((s[i] < '0' || s[i] > '9') && num == 1)
			break;
	}
	if (sign % 2 != 0)
		n = n * -1;
	return (n);
}
