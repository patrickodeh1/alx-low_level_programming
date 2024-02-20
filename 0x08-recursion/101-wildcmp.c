#include "main.h"

/**
 * helper - helper function for wildcmp
 * @s1: first string
 * @s2: second string
 * Return: 1 if true
 */

int helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*'  || *s1 == *s2)
		return (helper(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (helper(s1, s2 + 1) || helper(s1 + 1, s2));
	return (0);
}


/**
 * wildcmp - compares two string
 * @s1: first string
 * @s2: second string
 * Return: 1 if true
 */

int wildcmp(char *s1, char *s2)
{
	return (helper(s1, s2));
}
