#include "main.h"

/**
 * puts_half - prints a string
 * @str: string to print
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i]  != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
