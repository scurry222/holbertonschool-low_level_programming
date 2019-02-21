#include "holberton.h"

/**
* leet - encode a string with numbers
* @a: array to encode
*
* Return: modified string
*/

char *leet(char *a)
{
	int i;
	int j;
	char arr1[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char arr2[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; a[i]; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (a[i] == arr1[j])
				a[i] = arr2[j];
		}
	}
	return (a);
}
