#include "main.h"

/**
 * string_toupper - converts all lowercase to uppercase in a string
 * @str: string to convert
 * Return: str
 */

char *string_toupper(char *str)
{
	int i, length = _strlen - 1;

	for (i = 0; i < length, str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}

/**
 * _strlen - checks string length
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
