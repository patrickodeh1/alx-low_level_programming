#include "main.h"

/**
 * print_diagonal - prints a line diagonally
 * @n: length of line
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (n <= 0)
			{
				_putchar(10);
			}
			else
			{
				if (j == i)
				{
					_putchar(92);
				}
				else
				{
					_putchar(32);
				}
			}
		}
		_putchar(10);
	}
}
