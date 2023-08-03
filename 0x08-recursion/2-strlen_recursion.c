#include "main.h"

/**
 * _strlen_recursion - returns a string's length
 * @s: string
 * Return: string's length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	return (1 + _strlen_recursion(s + 1));
}
