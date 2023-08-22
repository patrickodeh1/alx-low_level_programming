#include "main.h"

/**
 * _strlen - gets string length
 * @s: string
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * puts_half - prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int i = 0;
	int len = _strlen(str) - 1;

	i = len / 2;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
