#include <stdio.h>

/**
 * main -Entry point
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num < '9')
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
