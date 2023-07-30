#include "main.h"

/**
 * print_line - prints line
 * @n: number of times to print _
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (i <= n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar(10);
}
