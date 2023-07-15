#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = '0'; num < '9'; num++)
	{
		putchar(num);
		putchar(num + 1);
		if (num < '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
