#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: bytee
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *ch;

	ch = dest;
	for (i = 0; i < n; i++)
		*dest++ = *src++;
	for (; n--; *dst++ = '\0')

	return (ch);
}
