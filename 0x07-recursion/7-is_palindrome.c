#include "holberton.h"

/**
* strend - find end of string
* @s: string to find length of
*
* Return: s + 1 until end of string, unless s is 0
*/

int strend(char *s)
{
	if (*s == 0)
		return (0);

	return (strend(s + 1) + 1);
}

/**
* compare - compare chars at beginning with chars at end recursively
* @s: string
* @i: beginning of string
* @end: end of string
*
* Return: 0 if non matching char is found, 1 if i incremented past end
*/

int compare(char *s, int i, int end)
{
	if (s[i] != s[end])
		return (0);

	if (i >= end)
		return (1);

	return (compare(s, (i + 1), (end - 1)));

}

/**
* is_palindrome - check if string is a pallindrome
* @s: string to check
*
* Return: pass end and start values into compare
*/

int is_palindrome(char *s)
{
	int end = 0;

	end = (strend(s) - 1);


	return (compare(s, 0, end));
}
