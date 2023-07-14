#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char ch;

	ch = 122;
	while (ch >= 97)
	{
		putchar(ch);
		ch--;
	}
	putchar(10);
	return (0);
}
