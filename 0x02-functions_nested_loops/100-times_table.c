#include "main.h"
#include <stdio.h>


/**
 * print_times_table - prints n multiplication table
 * @n: int value
 */

void print_times_table(int n)
{
	int i, j, mul;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (j == 0)
					putchar(mul + '0');
				else if (mul < 10 && j != 0)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar(mul + '0');
				}
				else if (mul >= 10 && mul < 100)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar((mul / 10) + '0');
					putchar((mul % 10) + '0');
				}
				else if (mul >= 100)
				{
					putchar(',');
					putchar(' ');
					putchar((mul / 100) + '0');
					putchar(((mul / 10) % 10) + '0');
					putchar((mul % 10) + '0');
				}
			}
			putchar(10);
		}
	}
}
