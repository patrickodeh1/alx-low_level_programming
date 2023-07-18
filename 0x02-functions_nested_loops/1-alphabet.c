#include "main.h"

/**
 * print_alphabet - function that prints alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		_putchar(ch);
	}
	_putchar(10);
}
