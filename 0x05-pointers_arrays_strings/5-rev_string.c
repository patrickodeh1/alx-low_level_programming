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
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	int length, start = 0, end;
	char temp;

	length = _strlen(s);
	end = length - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
