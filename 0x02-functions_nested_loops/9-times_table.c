#include "main.h"

/**
 * times_table - prints multiplication table
 */

void times_table(void)
{
	int row, col, mul;

	for (row = 0; row <= 9; row++)
	{
		putchar('0');
		for (col = 1; col <= 9; col++)
		{
			mul = row * col;
			putchar(',');
			putchar(' ');

			if (mul <= 9)
			{
				_putchar(' ');
				_putchar(mul + '0');
			}
			else
			{
				_putchar('0' + (mul / 10));
				_putchar('0' + (mul % 10));
			}
		}
		putchar(10);
	}
}

