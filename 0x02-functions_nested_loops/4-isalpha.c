#include "main.h"

/**
 * _isalpha - check for alphabet
 * @c: integer value
 * Return: 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	return (0);
}
