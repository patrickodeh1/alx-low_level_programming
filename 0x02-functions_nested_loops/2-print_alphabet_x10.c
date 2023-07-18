#include "main.h"

/**
 *  print_alphabet_x10 - function that prints lowercase alphabets 10x
 *  Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int n = 0;

	for (; n <= 9; n++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		_putchar(10);
	}
}
