#include "main.h"

/**
 * _strlen - prints string in reverse order
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
 * print_rev - prints string in reverse order
 * @s: string
 */

void print_rev(char *s)
{
	int length, i;

	length = _strlen(s);
	i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(10);
}
