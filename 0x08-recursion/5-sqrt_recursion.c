#include "main.h"

/**
 * sqr - calculates the square root of a number
 * @n: number
 * @g: any number
 * Return: square root
 */

int sqr(int n, int g)
{
	if (g * g == n)
		return (g);
	else if (g * g > n)
		return (-1);
	else
		return (sqr(n, g + 1));
}

/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 0));
}
