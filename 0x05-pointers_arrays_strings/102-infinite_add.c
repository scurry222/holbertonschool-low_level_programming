#include "holberton.h"


/**
* rev_string - modify the string to be reversed
* @s: string to reverse
*
* Return: void
*/

void rev_string(char *s)
{
	int i;
	char c, *start, *end;
	int length;

	start = s;
	end = s;

	for (i = 0; s[i]; i++)
		;
	length = i;

	for (i = 0; i < length - 1; i++)
		end++;
	for (i = 0; i < length / 2; i++)
	{
		c = *end;
		*end = *start;
		*start = c;

		start++;
		end--;
	}
}

/**
* infinite_add - add a seemingly infinite two numbers
* @n1: first number
* @n2: second number
* @r: sum of both numbers
* @size_r: buffer
* Return: r if success
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, sum1;
	int n1len;

	for (i = 0; n1; i++)
		;
		n1len = i;

	rev_string(n1);
	rev_string(n2);

	for (i = 0; n1len; i++)
	{
		sum1 = ((n1[i] - '0') + (n2[i] - '0') + size_r);
		r[i] = sum1;
	}
	return (r);
}
