#include "main.h"

/**
 * print_numbers - prints numbers
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar(10);
}
