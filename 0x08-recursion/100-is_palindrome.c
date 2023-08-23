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
 * @i1: iterator
 * @i2: iterator
 * Return: 0
 */

int comp(char *s, int i1, int i2)
{
	if (*(s + i1) == *(s + i2))
	{
		if (i1 == i2 || i1 == i2 + 1)
			return (1);
		return (0 + comp(s, i1 + 1, i2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 * Return: 1 if it is palindrome else 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, srl(s) - 1));
}
