#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && *src; i++)
	{
		dest = src;
	}
	return (dest);
}
