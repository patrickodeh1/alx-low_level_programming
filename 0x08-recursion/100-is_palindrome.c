#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks for palindrome
 * @s: string to check
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(char *s) 
{
	if (strlen(s) <= 1)
		return (1);
	if (s[0] != s[strlen(s) - 1])
		return (0);
	s[strlen(s) - 1] = '\0';
	return (is_palindrome(s + 1));
}
