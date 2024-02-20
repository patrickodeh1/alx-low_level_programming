#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * helper - helper function for is_palindrome
 * @st: start of string
 * @end: end of string
 * Return: 1 if true
 */

int helper(char *st, char *end)
{
	if (st >= end)
		return (1);

	if (!isalnum(*st))
		return (helper(st + 1, end));

	if (!isalnum(*end))
		return (helper(st, end - 1));
	if (tolower(*st) != tolower(*end))
		return (0);
	return (helper(st + 1, end - 1));
}

/**
 * is_palindrome - checks  if string is palindrome
 * @s: string
 * Return: 1 if true
 */

int is_palindrome(char *s)
{
	return (helper(s, s + strlen(s) - 1));
}
