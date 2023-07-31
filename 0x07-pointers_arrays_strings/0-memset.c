#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p = b;
		p++;
	}
	return (s);
}
