#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * helper - helper function for is_palindrome
 * @st: start of string
 * @end: end of string
 * Returns: 1 if true
 */

int helper(char *st, char *end)
{
	if (st >= end)
		return (1);
	
	while (!isalnum(*st))
		st++;

	while (!isalnum(*end))
		end--;
	if(tolower(*st) != tolower(*end))
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
	return (helper (s, s + strlen(s) - 1));
}
