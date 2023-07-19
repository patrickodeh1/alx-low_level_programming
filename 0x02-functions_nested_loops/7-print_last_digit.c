#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @num: int value
 * Return: last digit
 */

int print_last_digit(int num)
{
	if (num >= 0)
	{
		_putchar((num % 10) + '0');
		return (num % 10);
	}
	else
	{
		_putchar(-(num % 10) + '0');
		return (-(num  % 10));
	}
}
