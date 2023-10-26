#include "main.h"

/**
 * _sqrt - finds the square root (helper function)
 * @n: number
 * @g: guess
 * Return: natural square root
 */

int _sqrt(int n, int g)
{
	if (g * g == n)
		return (g);
	else if (g * g > n)
		return (-1);
	else
		return (_sqrt(n, g + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root or -1 if n does not have natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(n, 1));
}
