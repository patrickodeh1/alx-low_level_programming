#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 * Return: a pointer to the string
 */

char *_strchr(char *s, char c)
{
	for (; *s >= '\0'; s++)
	{
		if (*s == c)
		{
			return ((char *) s);
		}
	}
	return (NULL);
}
