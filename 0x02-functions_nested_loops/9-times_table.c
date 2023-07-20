#include "main.h"

/**
 * times_table - prints multiplication table
 */

void times_table(void)
{
	int row, col, mul;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			mul = row * col;
	
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (mul < 10)
			{
				_putchar(mul + '0');
				_putchar(' ');
			}
			else
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar(10);
	}
}

