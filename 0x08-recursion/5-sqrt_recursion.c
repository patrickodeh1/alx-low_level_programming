#include "main.h"

/**
 * sqr - finds square root of a number using recursion
 * @n: number
 * @st: starting point
 * Return: square root
 */

int sqr(int n, int st)
{
	if ((st * st) > n)
	{
		return (-1);
	}
	else if ((st * st) == n)
	{
		return (st);
	}
	else
	{
		return (sqr(n, st + 1));
	}
}

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqr(n, 0));
	}
}
