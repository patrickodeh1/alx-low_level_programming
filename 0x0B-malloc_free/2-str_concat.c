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

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	new_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (new_str == NULL)
		return (NULL);
	_strcpy(new_str, s1);

	for (i = 0; s2[i] != '\0'; i++)
	{
		new_str[len1 + i] = s2[i];
	}
	new_str[len1 + i] = '\0';
	return (new_str);
}
