#include "main.h"
#include <string.h>

/**
 * _palin - checks a string for palindrome
 * @s: string to check
 * @st: beginning of s
 * @end: end of s
 * Return: 1 if palindrome 0 if not
 */

int _palin(char *s, int st, int end)
{
	if (st >= end)
		return (1);
	if (s[st] != s[end])
		return (0);
	return (_palin(s, s[st + 1], s[end - 1]));
}

/**
 * is_palindrome - calls _palin
 * @s: string to check
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (_palin(s, 0, length - 1));
}
