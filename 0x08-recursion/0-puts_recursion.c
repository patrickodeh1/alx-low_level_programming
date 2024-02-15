#include "main.h"

/**
 * puts_recursion - Displays a string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar(10);
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
