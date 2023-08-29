#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string to search for
 * Return: pointer to bytes in s that matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
			s++;
	}
	return (NULL);
}

/**
 * _strchr - searches for a character in a string
 * @s: string
 * @c: character
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	for (; *s >= '\0'; s++)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
	}
	return (NULL);
}
