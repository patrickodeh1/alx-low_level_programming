#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @num: int value
 * Return: last digit
 */

int print_last_digit(int num)
{
	if (num % 10 >= 0)
	{
		_putchar(num % 10 + '0');
	}
	else
	{
		num *= -1;
		_putchar(num % 10 + '0');
	}

	return ((num *= -1) % 10);
}
