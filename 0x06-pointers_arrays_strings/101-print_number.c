#include "main.h"

/**
 * print_number - prints number
 * @n: number to print
 */

void print_number(int n)
{
	unsigned int i = n;

	if (i < 0)
	{
		i = -i;
		_putchar('-');
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i  % 10 + 48);
}
