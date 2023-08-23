#include "main.h"

/**
 * strl - checks string length
 * @s: string to check
 * Return: strings length
 */

int strl(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strl(s + 1));
}

/**
 * comp - compares characters of string
 * @s: string to compare
 * @i: iterator
 * @len: length
 * Return: 0
 */

int comp(char *s, int i, int len)
{
	if (i >= len)
		return (1);
	if (s[i] != s[len])
		return (0);
	return (comp(s, i + 1, len - 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 * Return: 1 if it is palindrome else 0
 */

int is_palindrome(char *s)
{
	int i = 0;

	i = strl(s) - 1;

	if (*s == '\0')
		return (1);
	return (comp(s, 0, i));
}
