#include "main.h"

/**
 * _strlen - function that checks the length of a string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	i = _strlen(dest);
	while (src[j] != '\0' && j < n)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
