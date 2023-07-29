#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 0 to 14 10times
 */

void more_numbers(void)
{
	int j, i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j < 10)
				putchar(48 + j);
			else
			{
				putchar(48 + (j / 10));
				putchar(48 + (j % 10));
			}
			j++;
		}
		printf("\n");
		i++;
	}
}
