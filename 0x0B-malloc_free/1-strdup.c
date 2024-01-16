#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string
 * Return: the length of string
 */

size_t _strlen(char *s)
{
	size_t i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
 * _strcpy - copies a string
 * @dest: destination to copy string to
 * @src: source to copy string from
 * Return: copied string (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

char *_strdup(char *str)
{
	int len;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}
	_strcpy(new_str, str);
	return (new_str);
}
