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
	char *pdest = dest;
	char *psrc = src;

	if ((pdest != NULL) && (psrc != NULL))
	{
		while (n)
		{
			pdest = psrc;
			--n;
		}
	}
	return (dest);
}
